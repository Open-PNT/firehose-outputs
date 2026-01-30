// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_mnav_ephemeris.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGpsMnavEphemeris_isa_l2_m_s {
public:
  explicit Init_MetadataGpsMnavEphemeris_isa_l2_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris isa_l2_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isa_l2_m_s_type
          arg) {
    msg_.isa_l2_m_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isa_l1_m_s {
public:
  explicit Init_MetadataGpsMnavEphemeris_isa_l1_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isa_l2_m_s isa_l1_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isa_l1_m_s_type
          arg) {
    msg_.isa_l1_m_s = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isa_l2_m_s(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isa_l2_m_e {
public:
  explicit Init_MetadataGpsMnavEphemeris_isa_l2_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isa_l1_m_s isa_l2_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isa_l2_m_e_type
          arg) {
    msg_.isa_l2_m_e = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isa_l1_m_s(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isa_l1_m_e {
public:
  explicit Init_MetadataGpsMnavEphemeris_isa_l1_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isa_l2_m_e isa_l1_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isa_l1_m_e_type
          arg) {
    msg_.isa_l1_m_e = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isa_l2_m_e(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isa_l2_py {
public:
  explicit Init_MetadataGpsMnavEphemeris_isa_l2_py(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isa_l1_m_e isa_l2_py(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isa_l2_py_type
          arg) {
    msg_.isa_l2_py = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isa_l1_m_e(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isc_l2_m_s {
public:
  explicit Init_MetadataGpsMnavEphemeris_isc_l2_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isa_l2_py isc_l2_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isc_l2_m_s_type
          arg) {
    msg_.isc_l2_m_s = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isa_l2_py(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isc_l1_m_s {
public:
  explicit Init_MetadataGpsMnavEphemeris_isc_l1_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isc_l2_m_s isc_l1_m_s(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isc_l1_m_s_type
          arg) {
    msg_.isc_l1_m_s = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isc_l2_m_s(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isc_l2_m_e {
public:
  explicit Init_MetadataGpsMnavEphemeris_isc_l2_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isc_l1_m_s isc_l2_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isc_l2_m_e_type
          arg) {
    msg_.isc_l2_m_e = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isc_l1_m_s(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_isc_l1_m_e {
public:
  explicit Init_MetadataGpsMnavEphemeris_isc_l1_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isc_l2_m_e isc_l1_m_e(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_isc_l1_m_e_type
          arg) {
    msg_.isc_l1_m_e = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isc_l2_m_e(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_a {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_a(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_isc_l1_m_e
  delta_a(::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_a_type
              arg) {
    msg_.delta_a = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_isc_l1_m_e(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_omega {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_omega(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_a delta_omega(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_omega_type
          arg) {
    msg_.delta_omega = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_a(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_i {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_i(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_omega
  delta_i(::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_i_type
              arg) {
    msg_.delta_i = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_omega(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_gamma {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_gamma(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_i delta_gamma(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_gamma_type
          arg) {
    msg_.delta_gamma = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_i(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_af_1 {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_af_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_gamma delta_af_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_af_1_type
          arg) {
    msg_.delta_af_1 = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_gamma(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_delta_af_0 {
public:
  explicit Init_MetadataGpsMnavEphemeris_delta_af_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_af_1 delta_af_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_delta_af_0_type
          arg) {
    msg_.delta_af_0 = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_af_1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_a_dot {
public:
  explicit Init_MetadataGpsMnavEphemeris_a_dot(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_delta_af_0 a_dot(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_a_dot_type arg) {
    msg_.a_dot = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_delta_af_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_orbit {
public:
  explicit Init_MetadataGpsMnavEphemeris_orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_a_dot orbit(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_orbit_type arg) {
    msg_.orbit = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_a_dot(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_clock {
public:
  explicit Init_MetadataGpsMnavEphemeris_clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_orbit clock(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_clock_type arg) {
    msg_.clock = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_orbit(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_prn {
public:
  explicit Init_MetadataGpsMnavEphemeris_prn(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_clock
  prn(::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_clock(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_week_number {
public:
  explicit Init_MetadataGpsMnavEphemeris_week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_prn week_number(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_week_number_type
          arg) {
    msg_.week_number = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_time_of_validity {
public:
  explicit Init_MetadataGpsMnavEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGpsMnavEphemeris_week_number
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_week_number(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

class Init_MetadataGpsMnavEphemeris_info {
public:
  Init_MetadataGpsMnavEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGpsMnavEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGpsMnavEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGpsMnavEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__BUILDER_HPP_
