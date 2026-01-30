// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_time.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavTime_time_reference {
public:
  explicit Init_TypeSatnavTime_time_reference(
      ::aspn23_ros_interfaces::msg::TypeSatnavTime &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavTime time_reference(
      ::aspn23_ros_interfaces::msg::TypeSatnavTime::_time_reference_type arg) {
    msg_.time_reference = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavTime msg_;
};

class Init_TypeSatnavTime_seconds_of_week {
public:
  explicit Init_TypeSatnavTime_seconds_of_week(
      ::aspn23_ros_interfaces::msg::TypeSatnavTime &msg)
      : msg_(msg) {}
  Init_TypeSatnavTime_time_reference seconds_of_week(
      ::aspn23_ros_interfaces::msg::TypeSatnavTime::_seconds_of_week_type arg) {
    msg_.seconds_of_week = std::move(arg);
    return Init_TypeSatnavTime_time_reference(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavTime msg_;
};

class Init_TypeSatnavTime_week_number {
public:
  Init_TypeSatnavTime_week_number()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeSatnavTime_seconds_of_week week_number(
      ::aspn23_ros_interfaces::msg::TypeSatnavTime::_week_number_type arg) {
    msg_.week_number = std::move(arg);
    return Init_TypeSatnavTime_seconds_of_week(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavTime msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavTime>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeSatnavTime_week_number();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__BUILDER_HPP_
