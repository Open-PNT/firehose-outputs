// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavTime                 \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavTime                 \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeSatnavTime_ {
  using Type = TypeSatnavTime_<ContainerAllocator>;

  explicit TypeSatnavTime_(rosidl_runtime_cpp::MessageInitialization _init =
                               rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->seconds_of_week = 0.0;
      this->time_reference = 0;
    }
  }

  explicit TypeSatnavTime_(const ContainerAllocator &_alloc,
                           rosidl_runtime_cpp::MessageInitialization _init =
                               rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->seconds_of_week = 0.0;
      this->time_reference = 0;
    }
  }

  // field types and members
  using _week_number_type = uint16_t;
  _week_number_type week_number;
  using _seconds_of_week_type = double;
  _seconds_of_week_type seconds_of_week;
  using _time_reference_type = uint8_t;
  _time_reference_type time_reference;

  // setters for named parameter idiom
  Type &set__week_number(const uint16_t &_arg) {
    this->week_number = _arg;
    return *this;
  }
  Type &set__seconds_of_week(const double &_arg) {
    this->seconds_of_week = _arg;
    return *this;
  }
  Type &set__time_reference(const uint8_t &_arg) {
    this->time_reference = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS = 0u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO =
      1u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU =
      2u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS =
      3u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavTime
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavTime
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeSatnavTime_ &other) const {
    if (this->week_number != other.week_number) {
      return false;
    }
    if (this->seconds_of_week != other.seconds_of_week) {
      return false;
    }
    if (this->time_reference != other.time_reference) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeSatnavTime_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeSatnavTime_

// alias to use template instance with default allocator
using TypeSatnavTime =
    aspn23_ros_interfaces::msg::TypeSatnavTime_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavTime_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavTime_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavTime_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavTime_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_HPP_
