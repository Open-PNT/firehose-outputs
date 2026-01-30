// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_satnav_obs.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataSatnavObs              \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataSatnavObs              \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataSatnavObs_ {
  using Type = MetadataSatnavObs_<ContainerAllocator>;

  explicit MetadataSatnavObs_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->deltarange_interval_start = 0.0f;
      this->deltarange_interval_stop = 0.0f;
    }
  }

  explicit MetadataSatnavObs_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->deltarange_interval_start = 0.0f;
      this->deltarange_interval_stop = 0.0f;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _deltarange_interval_start_type = float;
  _deltarange_interval_start_type deltarange_interval_start;
  using _deltarange_interval_stop_type = float;
  _deltarange_interval_stop_type deltarange_interval_stop;

  // setters for named parameter idiom
  Type &set__info(
      const aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>
          &_arg) {
    this->info = _arg;
    return *this;
  }
  Type &set__time_of_validity(
      const aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>
          &_arg) {
    this->time_of_validity = _arg;
    return *this;
  }
  Type &set__deltarange_interval_start(const float &_arg) {
    this->deltarange_interval_start = _arg;
    return *this;
  }
  Type &set__deltarange_interval_stop(const float &_arg) {
    this->deltarange_interval_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>
          *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataSatnavObs
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MetadataSatnavObs_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataSatnavObs
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataSatnavObs_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataSatnavObs_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->deltarange_interval_start != other.deltarange_interval_start) {
      return false;
    }
    if (this->deltarange_interval_stop != other.deltarange_interval_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataSatnavObs_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataSatnavObs_

// alias to use template instance with default allocator
using MetadataSatnavObs =
    aspn23_ros_interfaces::msg::MetadataSatnavObs_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_HPP_
