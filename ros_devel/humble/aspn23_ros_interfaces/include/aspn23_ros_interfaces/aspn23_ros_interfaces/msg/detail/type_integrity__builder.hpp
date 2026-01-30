// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeIntegrity_integrity_value {
public:
  explicit Init_TypeIntegrity_integrity_value(
      ::aspn23_ros_interfaces::msg::TypeIntegrity &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeIntegrity integrity_value(
      ::aspn23_ros_interfaces::msg::TypeIntegrity::_integrity_value_type arg) {
    msg_.integrity_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeIntegrity msg_;
};

class Init_TypeIntegrity_integrity_method {
public:
  Init_TypeIntegrity_integrity_method()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeIntegrity_integrity_value integrity_method(
      ::aspn23_ros_interfaces::msg::TypeIntegrity::_integrity_method_type arg) {
    msg_.integrity_method = std::move(arg);
    return Init_TypeIntegrity_integrity_value(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeIntegrity msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeIntegrity>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeIntegrity_integrity_method();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__BUILDER_HPP_
