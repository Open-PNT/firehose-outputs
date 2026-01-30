// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementTimeFrequencyDifference.idl generated
// code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_time_frequency_difference.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementTimeFrequencyDifference_ {
  using Type = MeasurementTimeFrequencyDifference_<ContainerAllocator>;

  explicit MeasurementTimeFrequencyDifference_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->time_of_validity_attosec = 0l;
      this->clock_id1 = 0;
      this->clock_id2 = 0;
      this->time_diff_nsec = 0ll;
      this->time_diff_attosec = 0l;
      this->digits_of_precision = 0;
      this->freq_diff = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->covariance.begin(), this->covariance.end(), 0.0);
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementTimeFrequencyDifference_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init),
        covariance(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->time_of_validity_attosec = 0l;
      this->clock_id1 = 0;
      this->clock_id2 = 0;
      this->time_diff_nsec = 0ll;
      this->time_diff_attosec = 0l;
      this->digits_of_precision = 0;
      this->freq_diff = 0.0;
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
  using _time_of_validity_attosec_type = int32_t;
  _time_of_validity_attosec_type time_of_validity_attosec;
  using _clock_id1_type = uint8_t;
  _clock_id1_type clock_id1;
  using _clock_id2_type = uint8_t;
  _clock_id2_type clock_id2;
  using _time_diff_nsec_type = int64_t;
  _time_diff_nsec_type time_diff_nsec;
  using _time_diff_attosec_type = int32_t;
  _time_diff_attosec_type time_diff_attosec;
  using _digits_of_precision_type = uint8_t;
  _digits_of_precision_type digits_of_precision;
  using _freq_diff_type = double;
  _freq_diff_type freq_diff;
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
  Type &set__time_of_validity_attosec(const int32_t &_arg) {
    this->time_of_validity_attosec = _arg;
    return *this;
  }
  Type &set__clock_id1(const uint8_t &_arg) {
    this->clock_id1 = _arg;
    return *this;
  }
  Type &set__clock_id2(const uint8_t &_arg) {
    this->clock_id2 = _arg;
    return *this;
  }
  Type &set__time_diff_nsec(const int64_t &_arg) {
    this->time_diff_nsec = _arg;
    return *this;
  }
  Type &set__time_diff_attosec(const int32_t &_arg) {
    this->time_diff_attosec = _arg;
    return *this;
  }
  Type &set__digits_of_precision(const uint8_t &_arg) {
    this->digits_of_precision = _arg;
    return *this;
  }
  Type &set__freq_diff(const double &_arg) {
    this->freq_diff = _arg;
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
  static constexpr uint8_t
      ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE = 0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
              ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
              ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementTimeFrequencyDifference_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->time_of_validity_attosec != other.time_of_validity_attosec) {
      return false;
    }
    if (this->clock_id1 != other.clock_id1) {
      return false;
    }
    if (this->clock_id2 != other.clock_id2) {
      return false;
    }
    if (this->time_diff_nsec != other.time_diff_nsec) {
      return false;
    }
    if (this->time_diff_attosec != other.time_diff_attosec) {
      return false;
    }
    if (this->digits_of_precision != other.digits_of_precision) {
      return false;
    }
    if (this->freq_diff != other.freq_diff) {
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
  bool operator!=(const MeasurementTimeFrequencyDifference_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementTimeFrequencyDifference_

// alias to use template instance with default allocator
using MeasurementTimeFrequencyDifference =
    aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference_<
        std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementTimeFrequencyDifference_<ContainerAllocator>::
    ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__STRUCT_HPP_
