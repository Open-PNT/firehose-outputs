// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav_with_sv_data.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__STRUCT_HPP_

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
// Member 'receiver_clock_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.hpp"
// Member 'obs'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.hpp"
// Member 'sv_data'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData    \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData    \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementSatnavWithSvData_ {
  using Type = MeasurementSatnavWithSvData_<ContainerAllocator>;

  explicit MeasurementSatnavWithSvData_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init), receiver_clock_time(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_signal_types = 0;
      this->num_signals_tracked = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementSatnavWithSvData_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init),
        receiver_clock_time(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_signal_types = 0;
      this->num_signals_tracked = 0;
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
  using _receiver_clock_time_type =
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>;
  _receiver_clock_time_type receiver_clock_time;
  using _num_signal_types_type = uint16_t;
  _num_signal_types_type num_signal_types;
  using _num_signals_tracked_type = uint16_t;
  _num_signals_tracked_type num_signals_tracked;
  using _obs_type = std::vector<
      aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>>>;
  _obs_type obs;
  using _sv_data_type = std::vector<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>>;
  _sv_data_type sv_data;
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
  Type &set__receiver_clock_time(
      const aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>
          &_arg) {
    this->receiver_clock_time = _arg;
    return *this;
  }
  Type &set__num_signal_types(const uint16_t &_arg) {
    this->num_signal_types = _arg;
    return *this;
  }
  Type &set__num_signals_tracked(const uint16_t &_arg) {
    this->num_signals_tracked = _arg;
    return *this;
  }
  Type &
  set__obs(const std::vector<
           aspn23_ros_interfaces::msg::TypeSatnavObs_<ContainerAllocator>,
           typename std::allocator_traits<ContainerAllocator>::
               template rebind_alloc<aspn23_ros_interfaces::msg::TypeSatnavObs_<
                   ContainerAllocator>>> &_arg) {
    this->obs = _arg;
    return *this;
  }
  Type &set__sv_data(
      const std::vector<
          aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>,
          typename std::allocator_traits<ContainerAllocator>::
              template rebind_alloc<aspn23_ros_interfaces::msg::
                                        TypeSatnavSvData_<ContainerAllocator>>>
          &_arg) {
    this->sv_data = _arg;
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

  // pointer types
  using RawPtr = aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
      ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
                          ContainerAllocator>,
                      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementSatnavWithSvData_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->receiver_clock_time != other.receiver_clock_time) {
      return false;
    }
    if (this->num_signal_types != other.num_signal_types) {
      return false;
    }
    if (this->num_signals_tracked != other.num_signals_tracked) {
      return false;
    }
    if (this->obs != other.obs) {
      return false;
    }
    if (this->sv_data != other.sv_data) {
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
  bool operator!=(const MeasurementSatnavWithSvData_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementSatnavWithSvData_

// alias to use template instance with default allocator
using MeasurementSatnavWithSvData =
    aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData_<
        std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__STRUCT_HPP_
