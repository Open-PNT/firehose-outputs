// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_clock.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavClock                \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavClock                \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeSatnavClock_ {
  using Type = TypeSatnavClock_<ContainerAllocator>;

  explicit TypeSatnavClock_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->t_oc = 0.0;
      this->af_0 = 0.0;
      this->af_1 = 0.0;
      this->af_2 = 0.0;
    }
  }

  explicit TypeSatnavClock_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->t_oc = 0.0;
      this->af_0 = 0.0;
      this->af_1 = 0.0;
      this->af_2 = 0.0;
    }
  }

  // field types and members
  using _t_oc_type = double;
  _t_oc_type t_oc;
  using _af_0_type = double;
  _af_0_type af_0;
  using _af_1_type = double;
  _af_1_type af_1;
  using _af_2_type = double;
  _af_2_type af_2;

  // setters for named parameter idiom
  Type &set__t_oc(const double &_arg) {
    this->t_oc = _arg;
    return *this;
  }
  Type &set__af_0(const double &_arg) {
    this->af_0 = _arg;
    return *this;
  }
  Type &set__af_1(const double &_arg) {
    this->af_1 = _arg;
    return *this;
  }
  Type &set__af_2(const double &_arg) {
    this->af_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavClock
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavClock
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavClock_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeSatnavClock_ &other) const {
    if (this->t_oc != other.t_oc) {
      return false;
    }
    if (this->af_0 != other.af_0) {
      return false;
    }
    if (this->af_1 != other.af_1) {
      return false;
    }
    if (this->af_2 != other.af_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeSatnavClock_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeSatnavClock_

// alias to use template instance with default allocator
using TypeSatnavClock =
    aspn23_ros_interfaces::msg::TypeSatnavClock_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_HPP_
