// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGeneric.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_generic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGeneric_mounting {
public:
  explicit Init_MetadataGeneric_mounting(
      ::aspn23_ros_interfaces::msg::MetadataGeneric &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGeneric
  mounting(::aspn23_ros_interfaces::msg::MetadataGeneric::_mounting_type arg) {
    msg_.mounting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGeneric msg_;
};

class Init_MetadataGeneric_time_of_validity {
public:
  explicit Init_MetadataGeneric_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGeneric &msg)
      : msg_(msg) {}
  Init_MetadataGeneric_mounting time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGeneric::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGeneric_mounting(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGeneric msg_;
};

class Init_MetadataGeneric_info {
public:
  Init_MetadataGeneric_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGeneric_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGeneric::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGeneric_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGeneric msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::MetadataGeneric>() {
  return aspn23_ros_interfaces::msg::builder::Init_MetadataGeneric_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__BUILDER_HPP_
