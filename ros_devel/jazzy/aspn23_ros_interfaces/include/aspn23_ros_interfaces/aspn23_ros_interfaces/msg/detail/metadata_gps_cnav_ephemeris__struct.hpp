// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsCnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_cnav_ephemeris.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris       \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris       \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataGpsCnavEphemeris_ {
  using Type = MetadataGpsCnavEphemeris_<ContainerAllocator>;

  explicit MetadataGpsCnavEphemeris_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init), clock(_init), orbit(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->prn = 0l;
      this->t_gd = 0.0;
      this->iodc = 0;
      this->iode = 0;
      this->isc_l1_ca = 0.0;
      this->isc_l2_c = 0.0;
      this->isc_l5_i5 = 0.0;
      this->isc_l5_q5 = 0.0;
      this->delta_a_0 = 0.0;
      this->a_dot = 0.0;
    }
  }

  explicit MetadataGpsCnavEphemeris_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init),
        clock(_alloc, _init), orbit(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->prn = 0l;
      this->t_gd = 0.0;
      this->iodc = 0;
      this->iode = 0;
      this->isc_l1_ca = 0.0;
      this->isc_l2_c = 0.0;
      this->isc_l5_i5 = 0.0;
      this->isc_l5_q5 = 0.0;
      this->delta_a_0 = 0.0;
      this->a_dot = 0.0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _week_number_type = uint16_t;
  _week_number_type week_number;
  using _prn_type = int32_t;
  _prn_type prn;
  using _clock_type =
      aspn23_ros_interfaces::msg::TypeSatnavClock_<ContainerAllocator>;
  _clock_type clock;
  using _orbit_type =
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>;
  _orbit_type orbit;
  using _t_gd_type = double;
  _t_gd_type t_gd;
  using _iodc_type = uint16_t;
  _iodc_type iodc;
  using _iode_type = uint8_t;
  _iode_type iode;
  using _isc_l1_ca_type = double;
  _isc_l1_ca_type isc_l1_ca;
  using _isc_l2_c_type = double;
  _isc_l2_c_type isc_l2_c;
  using _isc_l5_i5_type = double;
  _isc_l5_i5_type isc_l5_i5;
  using _isc_l5_q5_type = double;
  _isc_l5_q5_type isc_l5_q5;
  using _delta_a_0_type = double;
  _delta_a_0_type delta_a_0;
  using _a_dot_type = double;
  _a_dot_type a_dot;

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
  Type &set__week_number(const uint16_t &_arg) {
    this->week_number = _arg;
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
  Type &set__t_gd(const double &_arg) {
    this->t_gd = _arg;
    return *this;
  }
  Type &set__iodc(const uint16_t &_arg) {
    this->iodc = _arg;
    return *this;
  }
  Type &set__iode(const uint8_t &_arg) {
    this->iode = _arg;
    return *this;
  }
  Type &set__isc_l1_ca(const double &_arg) {
    this->isc_l1_ca = _arg;
    return *this;
  }
  Type &set__isc_l2_c(const double &_arg) {
    this->isc_l2_c = _arg;
    return *this;
  }
  Type &set__isc_l5_i5(const double &_arg) {
    this->isc_l5_i5 = _arg;
    return *this;
  }
  Type &set__isc_l5_q5(const double &_arg) {
    this->isc_l5_q5 = _arg;
    return *this;
  }
  Type &set__delta_a_0(const double &_arg) {
    this->delta_a_0 = _arg;
    return *this;
  }
  Type &set__a_dot(const double &_arg) {
    this->a_dot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataGpsCnavEphemeris_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->week_number != other.week_number) {
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
    if (this->t_gd != other.t_gd) {
      return false;
    }
    if (this->iodc != other.iodc) {
      return false;
    }
    if (this->iode != other.iode) {
      return false;
    }
    if (this->isc_l1_ca != other.isc_l1_ca) {
      return false;
    }
    if (this->isc_l2_c != other.isc_l2_c) {
      return false;
    }
    if (this->isc_l5_i5 != other.isc_l5_i5) {
      return false;
    }
    if (this->isc_l5_q5 != other.isc_l5_q5) {
      return false;
    }
    if (this->delta_a_0 != other.delta_a_0) {
      return false;
    }
    if (this->a_dot != other.a_dot) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataGpsCnavEphemeris_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataGpsCnavEphemeris_

// alias to use template instance with default allocator
using MetadataGpsCnavEphemeris =
    aspn23_ros_interfaces::msg::MetadataGpsCnavEphemeris_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_CNAV_EPHEMERIS__STRUCT_HPP_
