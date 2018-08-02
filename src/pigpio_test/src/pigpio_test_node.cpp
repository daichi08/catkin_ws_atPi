#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "pigpiod_if2.h"
#include "math.h"

//#define RAD2DEG(x) (fmodf((x+M_PI+0.5*M_PI)*180.0/M_PI, 360.0))
#define RAD2DEG(x) ((x)*180./M_PI)
#define HALF 500000
#define PHASE_DIFF 1.5*M_PI

int pi;
extern int pi;

static int pwmpin[2] = {18, 19};
static int dirpin[2] = {21, 20};

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& scan)
{
  int count = scan->scan_time / scan->time_increment;
  ros::Time t = ros::Time::now();
  ros::Duration d = ros::Duration(0.5);
  ROS_INFO("current time : %f", t);

  for(int i = 0; i < count; i++) {
    float degree = RAD2DEG(fmodf(scan->angle_min + PHASE_DIFF + scan->angle_increment * i, 2*M_PI));
    if(0.0 < degree && degree < 180.0){
      //ROS_INFO("%f", scan->ranges[i]);
    }
  }
  d.sleep();
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "pigpio_test");
  ros::NodeHandle n;

  pi = pigpio_start("localhost","8888");
  set_mode(pi, pwmpin[0], PI_OUTPUT);
  set_mode(pi, dirpin[0], PI_OUTPUT);
  set_mode(pi, pwmpin[1], PI_OUTPUT);
  set_mode(pi, dirpin[1], PI_OUTPUT);


  //hardware_PWM(pi, pwmpin[0], 400, HALF);
  //hardware_PWM(pi, pwmpin[1], 400, HALF);

  ros::Subscriber sub = n.subscribe<sensor_msgs::LaserScan>("/scan", 1000, scanCallback);

  ros::spin();

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
