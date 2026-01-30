// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavClock_af_2 {
public:
  explicit Init_TypeSatnavClock_af_2(
      ::aspn23_ros_interfaces::msg::TypeSatnavClock &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavClock
  af_2(::aspn23_ros_interfaces::msg::TypeSatnavClock::_af_2_type arg) {
    msg_.af_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavClock msg_;
};

class Init_TypeSatnavClock_af_1 {
public:
  explicit Init_TypeSatnavClock_af_1(
      ::aspn23_ros_interfaces::msg::TypeSatnavClock &msg)
      : msg_(msg) {}
  Init_TypeSatnavClock_af_2
  af_1(::aspn23_ros_interfaces::msg::TypeSatnavClock::_af_1_type arg) {
    msg_.af_1 = std::move(arg);
    return Init_TypeSatnavClock_af_2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavClock msg_;
};

class Init_TypeSatnavClock_af_0 {
public:
  explicit Init_TypeSatnavClock_af_0(
      ::aspn23_ros_interfaces::msg::TypeSatnavClock &msg)
      : msg_(msg) {}
  Init_TypeSatnavClock_af_1
  af_0(::aspn23_ros_interfaces::msg::TypeSatnavClock::_af_0_type arg) {
    msg_.af_0 = std::move(arg);
    return Init_TypeSatnavClock_af_1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavClock msg_;
};

class Init_TypeSatnavClock_t_oc {
public:
  Init_TypeSatnavClock_t_oc()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeSatnavClock_af_0
  t_oc(::aspn23_ros_interfaces::msg::TypeSatnavClock::_t_oc_type arg) {
    msg_.t_oc = std::move(arg);
    return Init_TypeSatnavClock_af_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavClock msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavClock>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeSatnavClock_t_oc();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__BUILDER_HPP_
