// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeHeader.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeHeader_sequence_id {
public:
  explicit Init_TypeHeader_sequence_id(
      ::aspn23_ros_interfaces::msg::TypeHeader &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeHeader
  sequence_id(::aspn23_ros_interfaces::msg::TypeHeader::_sequence_id_type arg) {
    msg_.sequence_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeHeader msg_;
};

class Init_TypeHeader_context_id {
public:
  explicit Init_TypeHeader_context_id(
      ::aspn23_ros_interfaces::msg::TypeHeader &msg)
      : msg_(msg) {}
  Init_TypeHeader_sequence_id
  context_id(::aspn23_ros_interfaces::msg::TypeHeader::_context_id_type arg) {
    msg_.context_id = std::move(arg);
    return Init_TypeHeader_sequence_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeHeader msg_;
};

class Init_TypeHeader_device_id {
public:
  explicit Init_TypeHeader_device_id(
      ::aspn23_ros_interfaces::msg::TypeHeader &msg)
      : msg_(msg) {}
  Init_TypeHeader_context_id
  device_id(::aspn23_ros_interfaces::msg::TypeHeader::_device_id_type arg) {
    msg_.device_id = std::move(arg);
    return Init_TypeHeader_context_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeHeader msg_;
};

class Init_TypeHeader_vendor_id {
public:
  Init_TypeHeader_vendor_id()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeHeader_device_id
  vendor_id(::aspn23_ros_interfaces::msg::TypeHeader::_vendor_id_type arg) {
    msg_.vendor_id = std::move(arg);
    return Init_TypeHeader_device_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeHeader msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeHeader>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeHeader_vendor_id();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__BUILDER_HPP_
