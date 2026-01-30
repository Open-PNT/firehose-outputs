// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeRemotePoint                \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeRemotePoint                \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeRemotePoint_ {
  using Type = TypeRemotePoint_<ContainerAllocator>;

  explicit TypeRemotePoint_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->included_terms = 0;
      this->id = 0ul;
      this->position_reference_frame = 0;
      this->position1 = 0.0;
      this->position2 = 0.0;
      this->position3 = 0.0;
      this->num_position_components = 0;
    }
  }

  explicit TypeRemotePoint_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->included_terms = 0;
      this->id = 0ul;
      this->position_reference_frame = 0;
      this->position1 = 0.0;
      this->position2 = 0.0;
      this->position3 = 0.0;
      this->num_position_components = 0;
    }
  }

  // field types and members
  using _included_terms_type = uint8_t;
  _included_terms_type included_terms;
  using _id_type = uint32_t;
  _id_type id;
  using _position_reference_frame_type = uint8_t;
  _position_reference_frame_type position_reference_frame;
  using _position1_type = double;
  _position1_type position1;
  using _position2_type = double;
  _position2_type position2;
  using _position3_type = double;
  _position3_type position3;
  using _num_position_components_type = uint8_t;
  _num_position_components_type num_position_components;
  using _position_covariance_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _position_covariance_type position_covariance;

  // setters for named parameter idiom
  Type &set__included_terms(const uint8_t &_arg) {
    this->included_terms = _arg;
    return *this;
  }
  Type &set__id(const uint32_t &_arg) {
    this->id = _arg;
    return *this;
  }
  Type &set__position_reference_frame(const uint8_t &_arg) {
    this->position_reference_frame = _arg;
    return *this;
  }
  Type &set__position1(const double &_arg) {
    this->position1 = _arg;
    return *this;
  }
  Type &set__position2(const double &_arg) {
    this->position2 = _arg;
    return *this;
  }
  Type &set__position3(const double &_arg) {
    this->position3 = _arg;
    return *this;
  }
  Type &set__num_position_components(const uint8_t &_arg) {
    this->num_position_components = _arg;
    return *this;
  }
  Type &set__position_covariance(
      const std::vector<double,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<double>> &_arg) {
    this->position_covariance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t
      ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE = 0u;
  static constexpr uint8_t
      ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC = 1u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeRemotePoint
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeRemotePoint
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeRemotePoint_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeRemotePoint_ &other) const {
    if (this->included_terms != other.included_terms) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->position_reference_frame != other.position_reference_frame) {
      return false;
    }
    if (this->position1 != other.position1) {
      return false;
    }
    if (this->position2 != other.position2) {
      return false;
    }
    if (this->position3 != other.position3) {
      return false;
    }
    if (this->num_position_components != other.num_position_components) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeRemotePoint_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeRemotePoint_

// alias to use template instance with default allocator
using TypeRemotePoint =
    aspn23_ros_interfaces::msg::TypeRemotePoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeRemotePoint_<
    ContainerAllocator>::ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeRemotePoint_<ContainerAllocator>::
    ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_HPP_
