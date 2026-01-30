// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavSvData_group_delay_vector {
public:
  explicit Init_TypeSatnavSvData_group_delay_vector(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData group_delay_vector(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_group_delay_vector_type
          arg) {
    msg_.group_delay_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_group_delay_enum {
public:
  explicit Init_TypeSatnavSvData_group_delay_enum(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_group_delay_vector group_delay_enum(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_group_delay_enum_type
          arg) {
    msg_.group_delay_enum = std::move(arg);
    return Init_TypeSatnavSvData_group_delay_vector(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_sv_clock_drift {
public:
  explicit Init_TypeSatnavSvData_sv_clock_drift(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_group_delay_enum sv_clock_drift(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_sv_clock_drift_type
          arg) {
    msg_.sv_clock_drift = std::move(arg);
    return Init_TypeSatnavSvData_group_delay_enum(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_sv_clock_bias {
public:
  explicit Init_TypeSatnavSvData_sv_clock_bias(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_sv_clock_drift sv_clock_bias(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_sv_clock_bias_type arg) {
    msg_.sv_clock_bias = std::move(arg);
    return Init_TypeSatnavSvData_sv_clock_drift(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_sv_vel {
public:
  explicit Init_TypeSatnavSvData_sv_vel(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_sv_clock_bias
  sv_vel(::aspn23_ros_interfaces::msg::TypeSatnavSvData::_sv_vel_type arg) {
    msg_.sv_vel = std::move(arg);
    return Init_TypeSatnavSvData_sv_clock_bias(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_sv_pos {
public:
  explicit Init_TypeSatnavSvData_sv_pos(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_sv_vel
  sv_pos(::aspn23_ros_interfaces::msg::TypeSatnavSvData::_sv_pos_type arg) {
    msg_.sv_pos = std::move(arg);
    return Init_TypeSatnavSvData_sv_vel(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_coordinate_frame {
public:
  explicit Init_TypeSatnavSvData_coordinate_frame(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_sv_pos coordinate_frame(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_coordinate_frame_type
          arg) {
    msg_.coordinate_frame = std::move(arg);
    return Init_TypeSatnavSvData_sv_pos(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_sv_data_time {
public:
  explicit Init_TypeSatnavSvData_sv_data_time(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_coordinate_frame sv_data_time(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_sv_data_time_type arg) {
    msg_.sv_data_time = std::move(arg);
    return Init_TypeSatnavSvData_coordinate_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_ephemeris_type {
public:
  explicit Init_TypeSatnavSvData_ephemeris_type(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_sv_data_time ephemeris_type(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_ephemeris_type_type
          arg) {
    msg_.ephemeris_type = std::move(arg);
    return Init_TypeSatnavSvData_sv_data_time(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_satellite_system {
public:
  explicit Init_TypeSatnavSvData_satellite_system(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData &msg)
      : msg_(msg) {}
  Init_TypeSatnavSvData_ephemeris_type satellite_system(
      ::aspn23_ros_interfaces::msg::TypeSatnavSvData::_satellite_system_type
          arg) {
    msg_.satellite_system = std::move(arg);
    return Init_TypeSatnavSvData_ephemeris_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

class Init_TypeSatnavSvData_prn {
public:
  Init_TypeSatnavSvData_prn()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeSatnavSvData_satellite_system
  prn(::aspn23_ros_interfaces::msg::TypeSatnavSvData::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_TypeSatnavSvData_satellite_system(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSvData msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavSvData>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeSatnavSvData_prn();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__BUILDER_HPP_
