// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_mounting.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeMounting                   \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeMounting                   \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeMounting_ {
  using Type = TypeMounting_<ContainerAllocator>;

  explicit TypeMounting_(rosidl_runtime_cpp::MessageInitialization _init =
                             rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->lever_arm.begin(), this->lever_arm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->lever_arm_sigma.begin(), this->lever_arm_sigma.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->orientation_quaternion.begin(),
          this->orientation_quaternion.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(
          this->orientation_tilt_error_covariance.begin(),
          this->orientation_tilt_error_covariance.end(), 0.0);
    }
  }

  explicit TypeMounting_(const ContainerAllocator &_alloc,
                         rosidl_runtime_cpp::MessageInitialization _init =
                             rosidl_runtime_cpp::MessageInitialization::ALL)
      : lever_arm(_alloc), lever_arm_sigma(_alloc),
        orientation_quaternion(_alloc),
        orientation_tilt_error_covariance(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->lever_arm.begin(), this->lever_arm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->lever_arm_sigma.begin(), this->lever_arm_sigma.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->orientation_quaternion.begin(),
          this->orientation_quaternion.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(
          this->orientation_tilt_error_covariance.begin(),
          this->orientation_tilt_error_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _lever_arm_type = std::array<double, 3>;
  _lever_arm_type lever_arm;
  using _lever_arm_sigma_type = std::array<double, 3>;
  _lever_arm_sigma_type lever_arm_sigma;
  using _orientation_quaternion_type = std::array<double, 4>;
  _orientation_quaternion_type orientation_quaternion;
  using _orientation_tilt_error_covariance_type = std::array<double, 9>;
  _orientation_tilt_error_covariance_type orientation_tilt_error_covariance;

  // setters for named parameter idiom
  Type &set__lever_arm(const std::array<double, 3> &_arg) {
    this->lever_arm = _arg;
    return *this;
  }
  Type &set__lever_arm_sigma(const std::array<double, 3> &_arg) {
    this->lever_arm_sigma = _arg;
    return *this;
  }
  Type &set__orientation_quaternion(const std::array<double, 4> &_arg) {
    this->orientation_quaternion = _arg;
    return *this;
  }
  Type &
  set__orientation_tilt_error_covariance(const std::array<double, 9> &_arg) {
    this->orientation_tilt_error_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeMounting std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeMounting std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const TypeMounting_ &other) const {
    if (this->lever_arm != other.lever_arm) {
      return false;
    }
    if (this->lever_arm_sigma != other.lever_arm_sigma) {
      return false;
    }
    if (this->orientation_quaternion != other.orientation_quaternion) {
      return false;
    }
    if (this->orientation_tilt_error_covariance !=
        other.orientation_tilt_error_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeMounting_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeMounting_

// alias to use template instance with default allocator
using TypeMounting =
    aspn23_ros_interfaces::msg::TypeMounting_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__STRUCT_HPP_
