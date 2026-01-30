// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementHeading.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementHeading             \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementHeading             \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementHeading_ {
  using Type = MeasurementHeading_<ContainerAllocator>;

  explicit MeasurementHeading_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference = 0;
      this->obs = 0.0;
      this->variance = 0.0;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementHeading_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference = 0;
      this->obs = 0.0;
      this->variance = 0.0;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  // field types and members
  using _header_type =
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _reference_type = uint8_t;
  _reference_type reference;
  using _obs_type = double;
  _obs_type obs;
  using _variance_type = double;
  _variance_type variance;
  using _error_model_type = uint8_t;
  _error_model_type error_model;
  using _num_error_model_params_type = uint16_t;
  _num_error_model_params_type num_error_model_params;
  using _error_model_params_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _error_model_params_type error_model_params;
  using _num_integrity_type = uint8_t;
  _num_integrity_type num_integrity;
  using _integrity_type = std::vector<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>;
  _integrity_type integrity;

  // setters for named parameter idiom
  Type &set__header(
      const aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> &_arg) {
    this->header = _arg;
    return *this;
  }
  Type &set__time_of_validity(
      const aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>
          &_arg) {
    this->time_of_validity = _arg;
    return *this;
  }
  Type &set__reference(const uint8_t &_arg) {
    this->reference = _arg;
    return *this;
  }
  Type &set__obs(const double &_arg) {
    this->obs = _arg;
    return *this;
  }
  Type &set__variance(const double &_arg) {
    this->variance = _arg;
    return *this;
  }
  Type &set__error_model(const uint8_t &_arg) {
    this->error_model = _arg;
    return *this;
  }
  Type &set__num_error_model_params(const uint16_t &_arg) {
    this->num_error_model_params = _arg;
    return *this;
  }
  Type &set__error_model_params(
      const std::vector<double,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<double>> &_arg) {
    this->error_model_params = _arg;
    return *this;
  }
  Type &set__num_integrity(const uint8_t &_arg) {
    this->num_integrity = _arg;
    return *this;
  }
  Type &set__integrity(
      const std::vector<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
          typename std::allocator_traits<ContainerAllocator>::
              template rebind_alloc<aspn23_ros_interfaces::msg::TypeIntegrity_<
                  ContainerAllocator>>> &_arg) {
    this->integrity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING =
      0u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING = 1u;
  static constexpr uint8_t ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE = 0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>
          *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementHeading_<
          ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementHeading_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementHeading
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementHeading_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementHeading
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementHeading_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementHeading_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->obs != other.obs) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->error_model != other.error_model) {
      return false;
    }
    if (this->num_error_model_params != other.num_error_model_params) {
      return false;
    }
    if (this->error_model_params != other.error_model_params) {
      return false;
    }
    if (this->num_integrity != other.num_integrity) {
      return false;
    }
    if (this->integrity != other.integrity) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasurementHeading_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementHeading_

// alias to use template instance with default allocator
using MeasurementHeading =
    aspn23_ros_interfaces::msg::MeasurementHeading_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementHeading_<
    ContainerAllocator>::ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementHeading_<
    ContainerAllocator>::ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementHeading_<
    ContainerAllocator>::ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_HPP_
