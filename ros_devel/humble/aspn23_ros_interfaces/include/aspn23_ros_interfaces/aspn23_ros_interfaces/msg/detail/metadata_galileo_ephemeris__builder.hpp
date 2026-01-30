// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGalileoEphemeris_bgd {
public:
  explicit Init_MetadataGalileoEphemeris_bgd(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris
  bgd(::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_bgd_type arg) {
    msg_.bgd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_orbit {
public:
  explicit Init_MetadataGalileoEphemeris_orbit(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGalileoEphemeris_bgd orbit(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_orbit_type arg) {
    msg_.orbit = std::move(arg);
    return Init_MetadataGalileoEphemeris_bgd(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_clock {
public:
  explicit Init_MetadataGalileoEphemeris_clock(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGalileoEphemeris_orbit clock(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_clock_type arg) {
    msg_.clock = std::move(arg);
    return Init_MetadataGalileoEphemeris_orbit(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_prn {
public:
  explicit Init_MetadataGalileoEphemeris_prn(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGalileoEphemeris_clock
  prn(::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MetadataGalileoEphemeris_clock(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_nav_msg_type {
public:
  explicit Init_MetadataGalileoEphemeris_nav_msg_type(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGalileoEphemeris_prn nav_msg_type(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_nav_msg_type_type
          arg) {
    msg_.nav_msg_type = std::move(arg);
    return Init_MetadataGalileoEphemeris_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_time_of_validity {
public:
  explicit Init_MetadataGalileoEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGalileoEphemeris_nav_msg_type
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGalileoEphemeris_nav_msg_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

class Init_MetadataGalileoEphemeris_info {
public:
  Init_MetadataGalileoEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGalileoEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGalileoEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGalileoEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__BUILDER_HPP_
