// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementAttitude2D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementAttitude2D          \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementAttitude2D          \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementAttitude2D_ {
  using Type = MeasurementAttitude2D_<ContainerAllocator>;

  explicit MeasurementAttitude2D_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(
          this->attitude2d.begin(), this->attitude2d.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->covariance.begin(), this->covariance.end(), 0.0);
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementAttitude2D_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init),
        attitude2d(_alloc), covariance(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(
          this->attitude2d.begin(), this->attitude2d.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->covariance.begin(), this->covariance.end(), 0.0);
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
  using _attitude2d_type = std::array<double, 2>;
  _attitude2d_type attitude2d;
  using _covariance_type = std::array<double, 4>;
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
  Type &set__attitude2d(const std::array<double, 2> &_arg) {
    this->attitude2d = _arg;
    return *this;
  }
  Type &set__covariance(const std::array<double, 4> &_arg) {
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
  static constexpr uint8_t ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE =
      0u;
  static constexpr uint8_t ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND =
      1u;
  static constexpr uint8_t ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED =
      2u;
  static constexpr uint8_t ASPN23_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE = 0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementAttitude2D_<ContainerAllocator> *;
  using ConstRawPtr = const aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
      ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementAttitude2D_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementAttitude2D_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementAttitude2D_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementAttitude2D
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementAttitude2D
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementAttitude2D_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementAttitude2D_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->attitude2d != other.attitude2d) {
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
  bool operator!=(const MeasurementAttitude2D_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementAttitude2D_

// alias to use template instance with default allocator
using MeasurementAttitude2D =
    aspn23_ros_interfaces::msg::MeasurementAttitude2D_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementAttitude2D_<
    ContainerAllocator>::ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementAttitude2D_<
    ContainerAllocator>::ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementAttitude2D_<
    ContainerAllocator>::ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementAttitude2D_<
    ContainerAllocator>::ASPN23_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__STRUCT_HPP_
