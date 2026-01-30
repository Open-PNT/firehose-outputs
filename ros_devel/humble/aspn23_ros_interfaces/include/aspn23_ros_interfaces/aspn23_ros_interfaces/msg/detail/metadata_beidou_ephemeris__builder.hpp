// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataBeidouEphemeris_aode {
public:
  explicit Init_MetadataBeidouEphemeris_aode(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris
  aode(::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_aode_type arg) {
    msg_.aode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_aodc {
public:
  explicit Init_MetadataBeidouEphemeris_aodc(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_aode
  aodc(::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_aodc_type arg) {
    msg_.aodc = std::move(arg);
    return Init_MetadataBeidouEphemeris_aode(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_t_gd2 {
public:
  explicit Init_MetadataBeidouEphemeris_t_gd2(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_aodc t_gd2(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_t_gd2_type arg) {
    msg_.t_gd2 = std::move(arg);
    return Init_MetadataBeidouEphemeris_aodc(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_t_gd1 {
public:
  explicit Init_MetadataBeidouEphemeris_t_gd1(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_t_gd2 t_gd1(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_t_gd1_type arg) {
    msg_.t_gd1 = std::move(arg);
    return Init_MetadataBeidouEphemeris_t_gd2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_orbit {
public:
  explicit Init_MetadataBeidouEphemeris_orbit(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_t_gd1 orbit(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_orbit_type arg) {
    msg_.orbit = std::move(arg);
    return Init_MetadataBeidouEphemeris_t_gd1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_clock {
public:
  explicit Init_MetadataBeidouEphemeris_clock(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_orbit clock(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_clock_type arg) {
    msg_.clock = std::move(arg);
    return Init_MetadataBeidouEphemeris_orbit(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_prn {
public:
  explicit Init_MetadataBeidouEphemeris_prn(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_clock
  prn(::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MetadataBeidouEphemeris_clock(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_time_of_validity {
public:
  explicit Init_MetadataBeidouEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataBeidouEphemeris_prn
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataBeidouEphemeris_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

class Init_MetadataBeidouEphemeris_info {
public:
  Init_MetadataBeidouEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataBeidouEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataBeidouEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataBeidouEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataBeidouEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__BUILDER_HPP_
