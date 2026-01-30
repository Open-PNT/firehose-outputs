// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeTimestamp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_timestamp.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeTimestamp_elapsed_nsec {
public:
  Init_TypeTimestamp_elapsed_nsec()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  ::aspn23_ros_interfaces::msg::TypeTimestamp elapsed_nsec(
      ::aspn23_ros_interfaces::msg::TypeTimestamp::_elapsed_nsec_type arg) {
    msg_.elapsed_nsec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeTimestamp msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeTimestamp>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeTimestamp_elapsed_nsec();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__BUILDER_HPP_
