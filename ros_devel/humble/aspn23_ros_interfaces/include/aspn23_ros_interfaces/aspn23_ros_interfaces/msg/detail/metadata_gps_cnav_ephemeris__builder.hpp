// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsCnavEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGpsCnavEphemeris_a_dot {
public:
  explicit Init_MetadataGpsCnavEphemeris_a_dot(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris a_dot(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_a_dot_type arg) {
    msg_.a_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_delta_a_0 {
public:
  explicit Init_MetadataGpsCnavEphemeris_delta_a_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_a_dot delta_a_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_delta_a_0_type
          arg) {
    msg_.delta_a_0 = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_a_dot(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_isc_l5_q5 {
public:
  explicit Init_MetadataGpsCnavEphemeris_isc_l5_q5(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_delta_a_0 isc_l5_q5(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_isc_l5_q5_type
          arg) {
    msg_.isc_l5_q5 = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_delta_a_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_isc_l5_i5 {
public:
  explicit Init_MetadataGpsCnavEphemeris_isc_l5_i5(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_isc_l5_q5 isc_l5_i5(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_isc_l5_i5_type
          arg) {
    msg_.isc_l5_i5 = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_isc_l5_q5(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_isc_l2_c {
public:
  explicit Init_MetadataGpsCnavEphemeris_isc_l2_c(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_isc_l5_i5 isc_l2_c(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_isc_l2_c_type
          arg) {
    msg_.isc_l2_c = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_isc_l5_i5(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_isc_l1_ca {
public:
  explicit Init_MetadataGpsCnavEphemeris_isc_l1_ca(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_isc_l2_c isc_l1_ca(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_isc_l1_ca_type
          arg) {
    msg_.isc_l1_ca = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_isc_l2_c(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_iode {
public:
  explicit Init_MetadataGpsCnavEphemeris_iode(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_isc_l1_ca
  iode(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_iode_type arg) {
    msg_.iode = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_isc_l1_ca(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_iodc {
public:
  explicit Init_MetadataGpsCnavEphemeris_iodc(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_iode
  iodc(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_iodc_type arg) {
    msg_.iodc = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_iode(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_t_gd {
public:
  explicit Init_MetadataGpsCnavEphemeris_t_gd(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_iodc
  t_gd(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_t_gd_type arg) {
    msg_.t_gd = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_iodc(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_orbit {
public:
  explicit Init_MetadataGpsCnavEphemeris_orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_t_gd orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_orbit_type arg) {
    msg_.orbit = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_t_gd(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_clock {
public:
  explicit Init_MetadataGpsCnavEphemeris_clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_orbit clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_clock_type arg) {
    msg_.clock = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_orbit(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_prn {
public:
  explicit Init_MetadataGpsCnavEphemeris_prn(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_clock
  prn(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_clock(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_week_number {
public:
  explicit Init_MetadataGpsCnavEphemeris_week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_prn week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_week_number_type
          arg) {
    msg_.week_number = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_time_of_validity {
public:
  explicit Init_MetadataGpsCnavEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsCnavEphemeris_week_number
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_week_number(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

class Init_MetadataGpsCnavEphemeris_info {
public:
  Init_MetadataGpsCnavEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGpsCnavEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGpsCnavEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGpsCnavEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__BUILDER_HPP_
