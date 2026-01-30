// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_mounting.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeMounting_orientation_tilt_error_covariance {
public:
  explicit Init_TypeMounting_orientation_tilt_error_covariance(
      ::aspn23_ros_interfaces::msg::TypeMounting &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeMounting orientation_tilt_error_covariance(
      ::aspn23_ros_interfaces::msg::TypeMounting::
          _orientation_tilt_error_covariance_type arg) {
    msg_.orientation_tilt_error_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMounting msg_;
};

class Init_TypeMounting_orientation_quaternion {
public:
  explicit Init_TypeMounting_orientation_quaternion(
      ::aspn23_ros_interfaces::msg::TypeMounting &msg)
      : msg_(msg) {}
  Init_TypeMounting_orientation_tilt_error_covariance orientation_quaternion(
      ::aspn23_ros_interfaces::msg::TypeMounting::_orientation_quaternion_type
          arg) {
    msg_.orientation_quaternion = std::move(arg);
    return Init_TypeMounting_orientation_tilt_error_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMounting msg_;
};

class Init_TypeMounting_lever_arm_sigma {
public:
  explicit Init_TypeMounting_lever_arm_sigma(
      ::aspn23_ros_interfaces::msg::TypeMounting &msg)
      : msg_(msg) {}
  Init_TypeMounting_orientation_quaternion lever_arm_sigma(
      ::aspn23_ros_interfaces::msg::TypeMounting::_lever_arm_sigma_type arg) {
    msg_.lever_arm_sigma = std::move(arg);
    return Init_TypeMounting_orientation_quaternion(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMounting msg_;
};

class Init_TypeMounting_lever_arm {
public:
  Init_TypeMounting_lever_arm()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeMounting_lever_arm_sigma
  lever_arm(::aspn23_ros_interfaces::msg::TypeMounting::_lever_arm_type arg) {
    msg_.lever_arm = std::move(arg);
    return Init_TypeMounting_lever_arm_sigma(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMounting msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeMounting>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeMounting_lever_arm();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__BUILDER_HPP_
