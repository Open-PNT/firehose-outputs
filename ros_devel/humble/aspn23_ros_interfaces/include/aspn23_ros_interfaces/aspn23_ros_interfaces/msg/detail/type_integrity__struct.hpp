// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeIntegrity                  \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeIntegrity                  \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeIntegrity_ {
  using Type = TypeIntegrity_<ContainerAllocator>;

  explicit TypeIntegrity_(rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->integrity_method = 0;
      this->integrity_value = 0.0;
    }
  }

  explicit TypeIntegrity_(const ContainerAllocator &_alloc,
                          rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->integrity_method = 0;
      this->integrity_value = 0.0;
    }
  }

  // field types and members
  using _integrity_method_type = uint8_t;
  _integrity_method_type integrity_method;
  using _integrity_value_type = double;
  _integrity_value_type integrity_value;

  // setters for named parameter idiom
  Type &set__integrity_method(const uint8_t &_arg) {
    this->integrity_method = _arg;
    return *this;
  }
  Type &set__integrity_value(const double &_arg) {
    this->integrity_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeIntegrity std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeIntegrity std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const TypeIntegrity_ &other) const {
    if (this->integrity_method != other.integrity_method) {
      return false;
    }
    if (this->integrity_value != other.integrity_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeIntegrity_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeIntegrity_

// alias to use template instance with default allocator
using TypeIntegrity =
    aspn23_ros_interfaces::msg::TypeIntegrity_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_HPP_
