// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem      \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem      \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeSatnavSatelliteSystem_ {
  using Type = TypeSatnavSatelliteSystem_<ContainerAllocator>;

  explicit TypeSatnavSatelliteSystem_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->satellite_system = 0;
    }
  }

  explicit TypeSatnavSatelliteSystem_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->satellite_system = 0;
    }
  }

  // field types and members
  using _satellite_system_type = uint8_t;
  _satellite_system_type satellite_system;

  // setters for named parameter idiom
  Type &set__satellite_system(const uint8_t &_arg) {
    this->satellite_system = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS = 0u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO = 1u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS = 2u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU = 3u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS = 4u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS = 5u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS = 6u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
                          ContainerAllocator>,
                      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeSatnavSatelliteSystem_ &other) const {
    if (this->satellite_system != other.satellite_system) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeSatnavSatelliteSystem_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeSatnavSatelliteSystem_

// alias to use template instance with default allocator
using TypeSatnavSatelliteSystem =
    aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
        std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSatelliteSystem_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_HPP_
