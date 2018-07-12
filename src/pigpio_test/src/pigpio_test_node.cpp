#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "pigpiod_if2.h"

#define RAD2DEG(x) ((x)*180./M_PI)
#define HALF 500000

float distance = 0;
float angle;

int pi;
extern int pi;

static int pwmpin[2] = {18, 19};
static int dirpin[2] = {21, 20};

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& scan)
{
  int count = scan->scan_time / scan->time_increment;

  for(int i = 0; i < count; i++) {
    float degree = RAD2DEG(scan->angle_min + scan->angle_increment * i);
      if(90.0 <= degree || degree <= -90.0){
        if(distance == 0){
          distance = scan->ranges[i];
          angle =  degree;
        }else{
          if(distance > scan->ranges[i]){
            distance = scan->ranges[i];
            angle =  degree;
          }
        }
    }
  }
  ROS_INFO(": [%f, %f]", distance, angle);
  distance = 0;
  angle = 0;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "rplidar_node_client");
  ros::NodeHandle n;

  pi = pigpio_start("localhost","8888");
  set_mode(pi, pwmpin[0], PI_OUTPUT);
  set_mode(pi, dirpin[0], PI_OUTPUT);
  set_mode(pi, pwmpin[1], PI_OUTPUT);
  set_mode(pi, dirpin[1], PI_OUTPUT);

  ros::Subscriber sub = n.subscribe<sensor_msgs::LaserScan>("/scan", 1000, scanCallback);

  hardware_PWM(pi, pwmpin[0], 400, HALF);
  hardware_PWM(pi, pwmpin[1], 400, HALF);

  //ros::spin();

  // 出力信号の停止
  hardware_PWM(pi, pwmpin[0], 0, 0);
  gpio_write(pi, dirpin[0], PI_LOW);
  hardware_PWM(pi, pwmpin[1], 0, 0);
  gpio_write(pi, dirpin[1], PI_LOW);

  // PINOUT -> PININ
  set_mode(pi, pwmpin[0], PI_INPUT);
  set_mode(pi, dirpin[0], PI_INPUT);
  set_mode(pi, pwmpin[1], PI_INPUT);
  set_mode(pi, dirpin[1], PI_INPUT);

  // 終了
  pigpio_stop(pi);

  return 0;
}