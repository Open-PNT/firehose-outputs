// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_obs.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

// Include directives for member types
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.hpp"
// Member 'signal_descriptor'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__struct.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavObs                  \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavObs                  \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeSatnavObs_ {
  using Type = TypeSatnavObs_<ContainerAllocator>;

  explicit TypeSatnavObs_(rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL)
      : satellite_system(_init), signal_descriptor(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0;
      this->frequency = 0.0;
      this->pseudorange = 0.0;
      this->pseudorange_variance = 0.0f;
      this->pseudorange_rate_type = 0;
      this->pseudorange_rate = 0.0;
      this->pseudorange_rate_variance = 0.0f;
      this->carrier_phase = 0.0;
      this->carrier_phase_variance = 0.0f;
      this->c_n0 = 0.0f;
      this->lock_count = 0l;
      this->iono_correction_source = 0;
      this->iono_correction_applied = false;
      this->tropo_correction_applied = false;
      this->signal_bias_correction_applied = false;
      this->num_integrity = 0;
    }
  }

  explicit TypeSatnavObs_(const ContainerAllocator &_alloc,
                          rosidl_runtime_cpp::MessageInitialization _init =
                              rosidl_runtime_cpp::MessageInitialization::ALL)
      : satellite_system(_alloc, _init), signal_descriptor(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0;
      this->frequency = 0.0;
      this->pseudorange = 0.0;
      this->pseudorange_variance = 0.0f;
      this->pseudorange_rate_type = 0;
      this->pseudorange_rate = 0.0;
      this->pseudorange_rate_variance = 0.0f;
      this->carrier_phase = 0.0;
      this->carrier_phase_variance = 0.0f;
      this->c_n0 = 0.0f;
      this->lock_count = 0l;
      this->iono_correction_source = 0;
      this->iono_correction_applied = false;
      this->tropo_correction_applied = false;
      this->signal_bias_correction_applied = false;
      this->num_integrity = 0;
    }
  }

  // field types and members
  using _satellite_system_type =
      aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>;
  _satellite_system_type satellite_system;
  using _signal_descriptor_type =
      aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor_<
          ContainerAllocator>;
  _signal_descriptor_type signal_descriptor;
  using _prn_type = int16_t;
  _prn_type prn;
  using _frequency_type = double;
  _frequency_type frequency;
  using _pseudorange_type = double;
  _pseudorange_type pseudorange;
  using _pseudorange_variance_type = float;
  _pseudorange_variance_type pseudorange_variance;
  using _pseudorange_rate_type_type = uint8_t;
  _pseudorange_rate_type_type pseudorange_rate_type;
  using _pseudorange_rate_type = double;
  _pseudorange_rate_type pseudorange_rate;
  using _pseudorange_rate_variance_type = float;
  _pseudorange_rate_variance_type pseudorange_rate_variance;
  using _carrier_phase_type = double;
  _carrier_phase_type carrier_phase;
  using _carrier_phase_variance_type = float;
  _carrier_phase_variance_type carrier_phase_variance;
  using _c_n0_type = float;
  _c_n0_type c_n0;
  using _lock_count_type = int32_t;
  _lock_count_type lock_count;
  using _iono_correction_source_type = uint8_t;
  _iono_correction_source_type iono_correction_source;
  using _iono_correction_applied_type = bool;
  _iono_correction_applied_type iono_correction_applied;
  using _tropo_correction_applied_type = bool;
  _tropo_correction_applied_type tropo_correction_applied;
  using _signal_bias_correction_applied_type = bool;
  _signal_bias_correction_applied_type signal_bias_correction_applied;
  using _num_integrity_type = uint8_t;
  _num_integrity_type num_integrity;
  using _integrity_type = std::vector<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>;
  _integrity_type integrity;

  // setters for named parameter idiom
  Type &set__satellite_system(
      const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> &_arg) {
    this->satellite_system = _arg;
    return *this;
  }
  Type &set__signal_descriptor(
      const aspn23_ros_interfaces::msg::TypeSatnavSignalDescriptor_<
          ContainerAllocator> &_arg) {
    this->signal_descriptor = _arg;
    return *this;
  }
  Type &set__prn(const int16_t &_arg) {
    this->prn = _arg;
    return *this;
  }
  Type &set__frequency(const double &_arg) {
    this->frequency = _arg;
    return *this;
  }
  Type &set__pseudorange(const double &_arg) {
    this->pseudorange = _arg;
    return *this;
  }
  Type &set__pseudorange_variance(const float &_arg) {
    this->pseudorange_variance = _arg;
    return *this;
  }
  Type &set__pseudorange_rate_type(const uint8_t &_arg) {
    this->pseudorange_rate_type = _arg;
    return *this;
  }
  Type &set__pseudorange_rate(const double &_arg) {
    this->pseudorange_rate = _arg;
    return *this;
  }
  Type &set__pseudorange_rate_variance(const float &_arg) {
    this->pseudorange_rate_variance = _arg;
    return *this;
  }
  Type &set__carrier_phase(const double &_arg) {
    this->carrier_phase = _arg;
    return *this;
  }
  Type &set__carrier_phase_variance(const float &_arg) {
    this->carrier_phase_variance = _arg;
    return *this;
  }
  Type &set__c_n0(const float &_arg) {
    this->c_n0 = _arg;
    return *this;
  }
  Type &set__lock_count(const int32_t &_arg) {
    this->lock_count = _arg;
    return *this;
  }
  Type &set__iono_correction_source(const uint8_t &_arg) {
    this->iono_correction_source = _arg;
    return *this;
  }
  Type &set__iono_correction_applied(const bool &_arg) {
    this->iono_correction_applied = _arg;
    return *this;
  }
  Type &set__tropo_correction_applied(const bool &_arg) {
    this->tropo_correction_applied = _arg;
    return *this;
  }
  Type &set__signal_bias_correction_applied(const bool &_arg) {
    this->signal_bias_correction_applied = _arg;
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
      ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER = 0u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE = 1u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN = 0u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED = 1u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED = 2u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavObs std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavObs std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const TypeSatnavObs_ &other) const {
    if (this->satellite_system != other.satellite_system) {
      return false;
    }
    if (this->signal_descriptor != other.signal_descriptor) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->pseudorange != other.pseudorange) {
      return false;
    }
    if (this->pseudorange_variance != other.pseudorange_variance) {
      return false;
    }
    if (this->pseudorange_rate_type != other.pseudorange_rate_type) {
      return false;
    }
    if (this->pseudorange_rate != other.pseudorange_rate) {
      return false;
    }
    if (this->pseudorange_rate_variance != other.pseudorange_rate_variance) {
      return false;
    }
    if (this->carrier_phase != other.carrier_phase) {
      return false;
    }
    if (this->carrier_phase_variance != other.carrier_phase_variance) {
      return false;
    }
    if (this->c_n0 != other.c_n0) {
      return false;
    }
    if (this->lock_count != other.lock_count) {
      return false;
    }
    if (this->iono_correction_source != other.iono_correction_source) {
      return false;
    }
    if (this->iono_correction_applied != other.iono_correction_applied) {
      return false;
    }
    if (this->tropo_correction_applied != other.tropo_correction_applied) {
      return false;
    }
    if (this->signal_bias_correction_applied !=
        other.signal_bias_correction_applied) {
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
  bool operator!=(const TypeSatnavObs_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeSatnavObs_

// alias to use template instance with default allocator
using TypeSatnavObs =
    aspn23_ros_interfaces::msg::TypeSatnavObs_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavObs_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavObs_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavObs_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavObs_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavObs_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_HPP_
