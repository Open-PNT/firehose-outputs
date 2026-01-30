// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDeltaPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_delta_position.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
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
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDeltaPosition       \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDeltaPosition       \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementDeltaPosition_ {
  using Type = MeasurementDeltaPosition_<ContainerAllocator>;

  explicit MeasurementDeltaPosition_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      this->delta_t = 0.0;
      this->num_meas = 0;
      this->term1 = 0.0;
      this->term2 = 0.0;
      this->term3 = 0.0;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementDeltaPosition_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      this->delta_t = 0.0;
      this->num_meas = 0;
      this->term1 = 0.0;
      this->term2 = 0.0;
      this->term3 = 0.0;
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
  using _reference_frame_type = uint8_t;
  _reference_frame_type reference_frame;
  using _delta_t_type = double;
  _delta_t_type delta_t;
  using _num_meas_type = uint8_t;
  _num_meas_type num_meas;
  using _term1_type = double;
  _term1_type term1;
  using _term2_type = double;
  _term2_type term2;
  using _term3_type = double;
  _term3_type term3;
  using _covariance_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _covariance_type covariance;
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
  Type &set__reference_frame(const uint8_t &_arg) {
    this->reference_frame = _arg;
    return *this;
  }
  Type &set__delta_t(const double &_arg) {
    this->delta_t = _arg;
    return *this;
  }
  Type &set__num_meas(const uint8_t &_arg) {
    this->num_meas = _arg;
    return *this;
  }
  Type &set__term1(const double &_arg) {
    this->term1 = _arg;
    return *this;
  }
  Type &set__term2(const double &_arg) {
    this->term2 = _arg;
    return *this;
  }
  Type &set__term3(const double &_arg) {
    this->term3 = _arg;
    return *this;
  }
  Type &set__covariance(
      const std::vector<double,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<double>> &_arg) {
    this->covariance = _arg;
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
  static constexpr uint8_t
      ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED = 0u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START = 1u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END = 2u;
  static constexpr uint8_t ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE =
      0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDeltaPosition
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDeltaPosition
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementDeltaPosition_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->delta_t != other.delta_t) {
      return false;
    }
    if (this->num_meas != other.num_meas) {
      return false;
    }
    if (this->term1 != other.term1) {
      return false;
    }
    if (this->term2 != other.term2) {
      return false;
    }
    if (this->term3 != other.term3) {
      return false;
    }
    if (this->covariance != other.covariance) {
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
  bool operator!=(const MeasurementDeltaPosition_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementDeltaPosition_

// alias to use template instance with default allocator
using MeasurementDeltaPosition =
    aspn23_ros_interfaces::msg::MeasurementDeltaPosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementDeltaPosition_<
    ContainerAllocator>::ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementDeltaPosition_<ContainerAllocator>::
    ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementDeltaPosition_<ContainerAllocator>::
    ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementDeltaPosition_<
    ContainerAllocator>::ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_HPP_
