// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_beidou_ephemeris.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_HPP_

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
// Member 'clock'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.hpp"
// Member 'orbit'
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataBeidouEphemeris        \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataBeidouEphemeris        \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataBeidouEphemeris_ {
  using Type = MetadataBeidouEphemeris_<ContainerAllocator>;

  explicit MetadataBeidouEphemeris_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init), clock(_init), orbit(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0l;
      this->t_gd1 = 0.0;
      this->t_gd2 = 0.0;
      this->aodc = 0;
      this->aode = 0;
    }
  }

  explicit MetadataBeidouEphemeris_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init),
        clock(_alloc, _init), orbit(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0l;
      this->t_gd1 = 0.0;
      this->t_gd2 = 0.0;
      this->aodc = 0;
      this->aode = 0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _prn_type = int32_t;
  _prn_type prn;
  using _clock_type =
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>;
  _clock_type clock;
  using _orbit_type =
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>;
  _orbit_type orbit;
  using _t_gd1_type = double;
  _t_gd1_type t_gd1;
  using _t_gd2_type = double;
  _t_gd2_type t_gd2;
  using _aodc_type = int16_t;
  _aodc_type aodc;
  using _aode_type = int16_t;
  _aode_type aode;

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
  Type &set__prn(const int32_t &_arg) {
    this->prn = _arg;
    return *this;
  }
  Type &set__clock(
      const aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>
          &_arg) {
    this->clock = _arg;
    return *this;
  }
  Type &set__orbit(
      const aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>
          &_arg) {
    this->orbit = _arg;
    return *this;
  }
  Type &set__t_gd1(const double &_arg) {
    this->t_gd1 = _arg;
    return *this;
  }
  Type &set__t_gd2(const double &_arg) {
    this->t_gd2 = _arg;
    return *this;
  }
  Type &set__aodc(const int16_t &_arg) {
    this->aodc = _arg;
    return *this;
  }
  Type &set__aode(const int16_t &_arg) {
    this->aode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
          ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataBeidouEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataBeidouEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataBeidouEphemeris_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->prn != other.prn) {
      return false;
    }
    if (this->clock != other.clock) {
      return false;
    }
    if (this->orbit != other.orbit) {
      return false;
    }
    if (this->t_gd1 != other.t_gd1) {
      return false;
    }
    if (this->t_gd2 != other.t_gd2) {
      return false;
    }
    if (this->aodc != other.aodc) {
      return false;
    }
    if (this->aode != other.aode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataBeidouEphemeris_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataBeidouEphemeris_

// alias to use template instance with default allocator
using MetadataBeidouEphemeris =
    aspn23_ros_interfaces::msg::MetadataBeidouEphemeris_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_HPP_
