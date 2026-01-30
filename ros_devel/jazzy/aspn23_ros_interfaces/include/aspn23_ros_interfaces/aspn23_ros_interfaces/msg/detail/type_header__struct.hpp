// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_header.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeHeader                     \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeHeader                     \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeHeader_ {
  using Type = TypeHeader_<ContainerAllocator>;

  explicit TypeHeader_(rosidl_runtime_cpp::MessageInitialization _init =
                           rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->vendor_id = 0ul;
      this->device_id = 0ull;
      this->context_id = 0ul;
      this->sequence_id = 0;
    }
  }

  explicit TypeHeader_(const ContainerAllocator &_alloc,
                       rosidl_runtime_cpp::MessageInitialization _init =
                           rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->vendor_id = 0ul;
      this->device_id = 0ull;
      this->context_id = 0ul;
      this->sequence_id = 0;
    }
  }

  // field types and members
  using _vendor_id_type = uint32_t;
  _vendor_id_type vendor_id;
  using _device_id_type = uint64_t;
  _device_id_type device_id;
  using _context_id_type = uint32_t;
  _context_id_type context_id;
  using _sequence_id_type = uint16_t;
  _sequence_id_type sequence_id;

  // setters for named parameter idiom
  Type &set__vendor_id(const uint32_t &_arg) {
    this->vendor_id = _arg;
    return *this;
  }
  Type &set__device_id(const uint64_t &_arg) {
    this->device_id = _arg;
    return *this;
  }
  Type &set__context_id(const uint32_t &_arg) {
    this->context_id = _arg;
    return *this;
  }
  Type &set__sequence_id(const uint16_t &_arg) {
    this->sequence_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr = aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeHeader std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeHeader std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const TypeHeader_ &other) const {
    if (this->vendor_id != other.vendor_id) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->context_id != other.context_id) {
      return false;
    }
    if (this->sequence_id != other.sequence_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeHeader_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeHeader_

// alias to use template instance with default allocator
using TypeHeader =
    aspn23_ros_interfaces::msg::TypeHeader_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_HPP_
