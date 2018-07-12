// Generated by gencpp from file sensor_msgs/RelativeHumidity.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_RELATIVEHUMIDITY_H
#define SENSOR_MSGS_MESSAGE_RELATIVEHUMIDITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct RelativeHumidity_
{
  typedef RelativeHumidity_<ContainerAllocator> Type;

  RelativeHumidity_()
    : header()
    , relative_humidity(0.0)
    , variance(0.0)  {
    }
  RelativeHumidity_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , relative_humidity(0.0)
    , variance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _relative_humidity_type;
  _relative_humidity_type relative_humidity;

   typedef double _variance_type;
  _variance_type variance;





  typedef boost::shared_ptr< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> const> ConstPtr;

}; // struct RelativeHumidity_

typedef ::sensor_msgs::RelativeHumidity_<std::allocator<void> > RelativeHumidity;

typedef boost::shared_ptr< ::sensor_msgs::RelativeHumidity > RelativeHumidityPtr;
typedef boost::shared_ptr< ::sensor_msgs::RelativeHumidity const> RelativeHumidityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::RelativeHumidity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/home/pi/catkin_ws/src/std_msgs/msg'], 'geometry_msgs': ['/home/pi/catkin_ws/src/common_msgs/geometry_msgs/msg'], 'sensor_msgs': ['/home/pi/catkin_ws/src/common_msgs/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8730015b05955b7e992ce29a2678d90f";
  }

  static const char* value(const ::sensor_msgs::RelativeHumidity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8730015b05955b7eULL;
  static const uint64_t static_value2 = 0x992ce29a2678d90fULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/RelativeHumidity";
  }

  static const char* value(const ::sensor_msgs::RelativeHumidity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
{
  static const char* value()
  {
    return " # Single reading from a relative humidity sensor.  Defines the ratio of partial\n\
 # pressure of water vapor to the saturated vapor pressure at a temperature.\n\
\n\
 Header header             # timestamp of the measurement\n\
                           # frame_id is the location of the humidity sensor\n\
\n\
 float64 relative_humidity # Expression of the relative humidity\n\
                           # from 0.0 to 1.0.\n\
                           # 0.0 is no partial pressure of water vapor\n\
                           # 1.0 represents partial pressure of saturation\n\
\n\
 float64 variance          # 0 is interpreted as variance unknown\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::sensor_msgs::RelativeHumidity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.relative_humidity);
      stream.next(m.variance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RelativeHumidity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::RelativeHumidity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::RelativeHumidity_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "relative_humidity: ";
    Printer<double>::stream(s, indent + "  ", v.relative_humidity);
    s << indent << "variance: ";
    Printer<double>::stream(s, indent + "  ", v.variance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_RELATIVEHUMIDITY_H
