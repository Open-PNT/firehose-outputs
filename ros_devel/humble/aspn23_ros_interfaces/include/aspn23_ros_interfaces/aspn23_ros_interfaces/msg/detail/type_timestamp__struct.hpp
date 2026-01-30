// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeTimestamp.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeTimestamp                  \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeTimestamp                  \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeTimestamp_ {
  using Type = TypeTimestamp_<ContainerAllocator>;

  explicit TypeTimestamp_(rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->elapsed_nsec = 0ll;
    }
  }

  explicit TypeTimestamp_(const ContainerAllocator &_alloc,
                          rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->elapsed_nsec = 0ll;
    }
  }

  // field types and members
  using _elapsed_nsec_type = int64_t;
  _elapsed_nsec_type elapsed_nsec;

  // setters for named parameter idiom
  Type &set__elapsed_nsec(const int64_t &_arg) {
    this->elapsed_nsec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeTimestamp std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeTimestamp std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const TypeTimestamp_ &other) const {
    if (this->elapsed_nsec != other.elapsed_nsec) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeTimestamp_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeTimestamp_

// alias to use template instance with default allocator
using TypeTimestamp =
    aspn23_ros_interfaces::msg::TypeTimestamp_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_HPP_
