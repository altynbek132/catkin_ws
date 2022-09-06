// Generated by gencpp from file robot_control/rigid.msg
// DO NOT EDIT!


#ifndef ROBOT_CONTROL_MESSAGE_RIGID_H
#define ROBOT_CONTROL_MESSAGE_RIGID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace robot_control
{
template <class ContainerAllocator>
struct rigid_
{
  typedef rigid_<ContainerAllocator> Type;

  rigid_()
    : header()
    , tact_1(0.0)
    , tact_2(0.0)
    , tact_3(0.0)
    , tact_4(0.0)
    , tact_5(0.0)
    , load_1(0.0)
    , load_2(0.0)
    , load_3(0.0)
    , load_4(0.0)
    , load_5(0.0)  {
    }
  rigid_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tact_1(0.0)
    , tact_2(0.0)
    , tact_3(0.0)
    , tact_4(0.0)
    , tact_5(0.0)
    , load_1(0.0)
    , load_2(0.0)
    , load_3(0.0)
    , load_4(0.0)
    , load_5(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _tact_1_type;
  _tact_1_type tact_1;

   typedef double _tact_2_type;
  _tact_2_type tact_2;

   typedef double _tact_3_type;
  _tact_3_type tact_3;

   typedef double _tact_4_type;
  _tact_4_type tact_4;

   typedef double _tact_5_type;
  _tact_5_type tact_5;

   typedef double _load_1_type;
  _load_1_type load_1;

   typedef double _load_2_type;
  _load_2_type load_2;

   typedef double _load_3_type;
  _load_3_type load_3;

   typedef double _load_4_type;
  _load_4_type load_4;

   typedef double _load_5_type;
  _load_5_type load_5;





  typedef boost::shared_ptr< ::robot_control::rigid_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_control::rigid_<ContainerAllocator> const> ConstPtr;

}; // struct rigid_

typedef ::robot_control::rigid_<std::allocator<void> > rigid;

typedef boost::shared_ptr< ::robot_control::rigid > rigidPtr;
typedef boost::shared_ptr< ::robot_control::rigid const> rigidConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_control::rigid_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_control::rigid_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_control::rigid_<ContainerAllocator1> & lhs, const ::robot_control::rigid_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tact_1 == rhs.tact_1 &&
    lhs.tact_2 == rhs.tact_2 &&
    lhs.tact_3 == rhs.tact_3 &&
    lhs.tact_4 == rhs.tact_4 &&
    lhs.tact_5 == rhs.tact_5 &&
    lhs.load_1 == rhs.load_1 &&
    lhs.load_2 == rhs.load_2 &&
    lhs.load_3 == rhs.load_3 &&
    lhs.load_4 == rhs.load_4 &&
    lhs.load_5 == rhs.load_5;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_control::rigid_<ContainerAllocator1> & lhs, const ::robot_control::rigid_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_control::rigid_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_control::rigid_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_control::rigid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_control::rigid_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_control::rigid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_control::rigid_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_control::rigid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8bcb515782fec7970e7fb78e76cf6135";
  }

  static const char* value(const ::robot_control::rigid_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8bcb515782fec797ULL;
  static const uint64_t static_value2 = 0x0e7fb78e76cf6135ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_control::rigid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_control/rigid";
  }

  static const char* value(const ::robot_control::rigid_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_control::rigid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 tact_1\n"
"float64 tact_2\n"
"float64 tact_3\n"
"float64 tact_4\n"
"float64 tact_5\n"
"float64 load_1\n"
"float64 load_2\n"
"float64 load_3\n"
"float64 load_4\n"
"float64 load_5\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::robot_control::rigid_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_control::rigid_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tact_1);
      stream.next(m.tact_2);
      stream.next(m.tact_3);
      stream.next(m.tact_4);
      stream.next(m.tact_5);
      stream.next(m.load_1);
      stream.next(m.load_2);
      stream.next(m.load_3);
      stream.next(m.load_4);
      stream.next(m.load_5);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct rigid_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_control::rigid_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_control::rigid_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tact_1: ";
    Printer<double>::stream(s, indent + "  ", v.tact_1);
    s << indent << "tact_2: ";
    Printer<double>::stream(s, indent + "  ", v.tact_2);
    s << indent << "tact_3: ";
    Printer<double>::stream(s, indent + "  ", v.tact_3);
    s << indent << "tact_4: ";
    Printer<double>::stream(s, indent + "  ", v.tact_4);
    s << indent << "tact_5: ";
    Printer<double>::stream(s, indent + "  ", v.tact_5);
    s << indent << "load_1: ";
    Printer<double>::stream(s, indent + "  ", v.load_1);
    s << indent << "load_2: ";
    Printer<double>::stream(s, indent + "  ", v.load_2);
    s << indent << "load_3: ";
    Printer<double>::stream(s, indent + "  ", v.load_3);
    s << indent << "load_4: ";
    Printer<double>::stream(s, indent + "  ", v.load_4);
    s << indent << "load_5: ";
    Printer<double>::stream(s, indent + "  ", v.load_5);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_CONTROL_MESSAGE_RIGID_H
