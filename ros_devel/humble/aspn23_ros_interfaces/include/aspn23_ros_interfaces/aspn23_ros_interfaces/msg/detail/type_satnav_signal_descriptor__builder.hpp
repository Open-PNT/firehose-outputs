// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSignalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavSignalDescriptor_signal_descriptor {
public:
  Init_TypeSatnavSignalDescriptor_signal_descriptor()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor
  signal_descriptor(::aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor::
                        _signal_descriptor_type arg) {
    msg_.signal_descriptor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeSatnavSignalDescriptor_signal_descriptor();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__BUILDER_HPP_
