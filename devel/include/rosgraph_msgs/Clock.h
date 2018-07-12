// Generated by gencpp from file rosgraph_msgs/Clock.msg
// DO NOT EDIT!


#ifndef ROSGRAPH_MSGS_MESSAGE_CLOCK_H
#define ROSGRAPH_MSGS_MESSAGE_CLOCK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosgraph_msgs
{
template <class ContainerAllocator>
struct Clock_
{
  typedef Clock_<ContainerAllocator> Type;

  Clock_()
    : clock()  {
    }
  Clock_(const ContainerAllocator& _alloc)
    : clock()  {
  (void)_alloc;
    }



   typedef ros::Time _clock_type;
  _clock_type clock;





  typedef boost::shared_ptr< ::rosgraph_msgs::Clock_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosgraph_msgs::Clock_<ContainerAllocator> const> ConstPtr;

}; // struct Clock_

typedef ::rosgraph_msgs::Clock_<std::allocator<void> > Clock;

typedef boost::shared_ptr< ::rosgraph_msgs::Clock > ClockPtr;
typedef boost::shared_ptr< ::rosgraph_msgs::Clock const> ClockConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosgraph_msgs::Clock_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosgraph_msgs::Clock_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosgraph_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/home/pi/catkin_ws/src/ros_comm_msgs/rosgraph_msgs/msg'], 'std_msgs': ['/home/pi/catkin_ws/src/std_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosgraph_msgs::Clock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosgraph_msgs::Clock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosgraph_msgs::Clock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosgraph_msgs::Clock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosgraph_msgs::Clock_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosgraph_msgs::Clock_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosgraph_msgs::Clock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9c97c1d230cfc112e270351a944ee47";
  }

  static const char* value(const ::rosgraph_msgs::Clock_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9c97c1d230cfc11ULL;
  static const uint64_t static_value2 = 0x2e270351a944ee47ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosgraph_msgs::Clock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosgraph_msgs/Clock";
  }

  static const char* value(const ::rosgraph_msgs::Clock_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosgraph_msgs::Clock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# roslib/Clock is used for publishing simulated time in ROS. \n\
# This message simply communicates the current time.\n\
# For more information, see http://www.ros.org/wiki/Clock\n\
time clock\n\
";
  }

  static const char* value(const ::rosgraph_msgs::Clock_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosgraph_msgs::Clock_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.clock);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Clock_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosgraph_msgs::Clock_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosgraph_msgs::Clock_<ContainerAllocator>& v)
  {
    s << indent << "clock: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.clock);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSGRAPH_MSGS_MESSAGE_CLOCK_H
