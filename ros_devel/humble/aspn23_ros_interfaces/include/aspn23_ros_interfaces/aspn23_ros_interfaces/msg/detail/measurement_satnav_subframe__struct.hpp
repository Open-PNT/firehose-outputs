// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_HPP_

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
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavSubframe      \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavSubframe      \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementSatnavSubframe_ {
  using Type = MeasurementSatnavSubframe_<ContainerAllocator>;

  explicit MeasurementSatnavSubframe_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init), satellite_system(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->gnss_message_id = 0ll;
      this->prn = 0l;
      this->freq_slot_id = 0l;
      this->num_bytes = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementSatnavSubframe_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init),
        satellite_system(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->gnss_message_id = 0ll;
      this->prn = 0l;
      this->freq_slot_id = 0l;
      this->num_bytes = 0;
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
  using _gnss_message_id_type = int64_t;
  _gnss_message_id_type gnss_message_id;
  using _prn_type = int32_t;
  _prn_type prn;
  using _satellite_system_type =
      aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>;
  _satellite_system_type satellite_system;
  using _freq_slot_id_type = int32_t;
  _freq_slot_id_type freq_slot_id;
  using _num_bytes_type = uint16_t;
  _num_bytes_type num_bytes;
  using _data_vector_type =
      std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<int8_t>>;
  _data_vector_type data_vector;
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
  Type &set__gnss_message_id(const int64_t &_arg) {
    this->gnss_message_id = _arg;
    return *this;
  }
  Type &set__prn(const int32_t &_arg) {
    this->prn = _arg;
    return *this;
  }
  Type &set__satellite_system(
      const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> &_arg) {
    this->satellite_system = _arg;
    return *this;
  }
  Type &set__freq_slot_id(const int32_t &_arg) {
    this->freq_slot_id = _arg;
    return *this;
  }
  Type &set__num_bytes(const uint16_t &_arg) {
    this->num_bytes = _arg;
    return *this;
  }
  Type &set__data_vector(
      const std::vector<int8_t,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<int8_t>> &_arg) {
    this->data_vector = _arg;
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
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
                          ContainerAllocator>,
                      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavSubframe
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementSatnavSubframe
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementSatnavSubframe_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->gnss_message_id != other.gnss_message_id) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    if (this->satellite_system != other.satellite_system) {
      return false;
    }
    if (this->freq_slot_id != other.freq_slot_id) {
      return false;
    }
    if (this->num_bytes != other.num_bytes) {
      return false;
    }
    if (this->data_vector != other.data_vector) {
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
  bool operator!=(const MeasurementSatnavSubframe_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementSatnavSubframe_

// alias to use template instance with default allocator
using MeasurementSatnavSubframe =
    aspn23_ros_interfaces::msg::MeasurementSatnavSubframe_<
        std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_HPP_
