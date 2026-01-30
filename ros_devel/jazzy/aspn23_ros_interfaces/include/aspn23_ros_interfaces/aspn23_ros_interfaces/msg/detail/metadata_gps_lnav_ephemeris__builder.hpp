// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsLnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_lnav_ephemeris.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_lnav_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGpsLnavEphemeris_iode {
public:
  explicit Init_MetadataGpsLnavEphemeris_iode(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris
  iode(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_iode_type arg) {
    msg_.iode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_iodc {
public:
  explicit Init_MetadataGpsLnavEphemeris_iodc(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_iode
  iodc(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_iodc_type arg) {
    msg_.iodc = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_iode(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_t_gd {
public:
  explicit Init_MetadataGpsLnavEphemeris_t_gd(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_iodc
  t_gd(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_t_gd_type arg) {
    msg_.t_gd = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_iodc(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_orbit {
public:
  explicit Init_MetadataGpsLnavEphemeris_orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_t_gd orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_orbit_type arg) {
    msg_.orbit = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_t_gd(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_clock {
public:
  explicit Init_MetadataGpsLnavEphemeris_clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_orbit clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_clock_type arg) {
    msg_.clock = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_orbit(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_prn {
public:
  explicit Init_MetadataGpsLnavEphemeris_prn(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_clock
  prn(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_clock(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_week_number {
public:
  explicit Init_MetadataGpsLnavEphemeris_week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_prn week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_week_number_type
          arg) {
    msg_.week_number = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_time_of_validity {
public:
  explicit Init_MetadataGpsLnavEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsLnavEphemeris_week_number
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_week_number(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

class Init_MetadataGpsLnavEphemeris_info {
public:
  Init_MetadataGpsLnavEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGpsLnavEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGpsLnavEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataGpsLnavEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGpsLnavEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__BUILDER_HPP_
