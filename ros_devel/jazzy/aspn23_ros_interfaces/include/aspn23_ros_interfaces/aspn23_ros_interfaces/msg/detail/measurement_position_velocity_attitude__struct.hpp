// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_position_velocity_attitude.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator>
struct MeasurementPositionVelocityAttitude_ {
  using Type = MeasurementPositionVelocityAttitude_<ContainerAllocator>;

  explicit MeasurementPositionVelocityAttitude_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      this->p1 = 0.0;
      this->p2 = 0.0;
      this->p3 = 0.0;
      this->v1 = 0.0;
      this->v2 = 0.0;
      this->v3 = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->quaternion.begin(), this->quaternion.end(), 0.0);
      this->num_meas = 0;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementPositionVelocityAttitude_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init),
        quaternion(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      this->p1 = 0.0;
      this->p2 = 0.0;
      this->p3 = 0.0;
      this->v1 = 0.0;
      this->v2 = 0.0;
      this->v3 = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->quaternion.begin(), this->quaternion.end(), 0.0);
      this->num_meas = 0;
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
  using _p1_type = double;
  _p1_type p1;
  using _p2_type = double;
  _p2_type p2;
  using _p3_type = double;
  _p3_type p3;
  using _v1_type = double;
  _v1_type v1;
  using _v2_type = double;
  _v2_type v2;
  using _v3_type = double;
  _v3_type v3;
  using _quaternion_type = std::array<double, 4>;
  _quaternion_type quaternion;
  using _num_meas_type = uint8_t;
  _num_meas_type num_meas;
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
  Type &set__p1(const double &_arg) {
    this->p1 = _arg;
    return *this;
  }
  Type &set__p2(const double &_arg) {
    this->p2 = _arg;
    return *this;
  }
  Type &set__p3(const double &_arg) {
    this->p3 = _arg;
    return *this;
  }
  Type &set__v1(const double &_arg) {
    this->v1 = _arg;
    return *this;
  }
  Type &set__v2(const double &_arg) {
    this->v2 = _arg;
    return *this;
  }
  Type &set__v3(const double &_arg) {
    this->v3 = _arg;
    return *this;
  }
  Type &set__quaternion(const std::array<double, 4> &_arg) {
    this->quaternion = _arg;
    return *this;
  }
  Type &set__num_meas(const uint8_t &_arg) {
    this->num_meas = _arg;
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
      ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI = 0u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC =
          1u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE = 0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::
                    MeasurementPositionVelocityAttitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::
                    MeasurementPositionVelocityAttitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
              ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
              ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementPositionVelocityAttitude_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->p1 != other.p1) {
      return false;
    }
    if (this->p2 != other.p2) {
      return false;
    }
    if (this->p3 != other.p3) {
      return false;
    }
    if (this->v1 != other.v1) {
      return false;
    }
    if (this->v2 != other.v2) {
      return false;
    }
    if (this->v3 != other.v3) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->num_meas != other.num_meas) {
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
  bool operator!=(const MeasurementPositionVelocityAttitude_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementPositionVelocityAttitude_

// alias to use template instance with default allocator
using MeasurementPositionVelocityAttitude =
    aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude_<
        std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementPositionVelocityAttitude_<ContainerAllocator>::
    ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementPositionVelocityAttitude_<ContainerAllocator>::
    ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementPositionVelocityAttitude_<ContainerAllocator>::
    ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__STRUCT_HPP_
