// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_mnav_ephemeris.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris       \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris       \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataGpsMnavEphemeris_ {
  using Type = MetadataGpsMnavEphemeris_<ContainerAllocator>;

  explicit MetadataGpsMnavEphemeris_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init), clock(_init), orbit(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->prn = 0l;
      this->a_dot = 0.0;
      this->delta_af_0 = 0.0;
      this->delta_af_1 = 0.0;
      this->delta_gamma = 0.0;
      this->delta_i = 0.0;
      this->delta_omega = 0.0;
      this->delta_a = 0.0;
      this->isc_l1_m_e = 0.0;
      this->isc_l2_m_e = 0.0;
      this->isc_l1_m_s = 0.0;
      this->isc_l2_m_s = 0.0;
      this->isa_l2_py = 0.0;
      this->isa_l1_m_e = 0.0;
      this->isa_l2_m_e = 0.0;
      this->isa_l1_m_s = 0.0;
      this->isa_l2_m_s = 0.0;
    }
  }

  explicit MetadataGpsMnavEphemeris_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init),
        clock(_alloc, _init), orbit(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->week_number = 0;
      this->prn = 0l;
      this->a_dot = 0.0;
      this->delta_af_0 = 0.0;
      this->delta_af_1 = 0.0;
      this->delta_gamma = 0.0;
      this->delta_i = 0.0;
      this->delta_omega = 0.0;
      this->delta_a = 0.0;
      this->isc_l1_m_e = 0.0;
      this->isc_l2_m_e = 0.0;
      this->isc_l1_m_s = 0.0;
      this->isc_l2_m_s = 0.0;
      this->isa_l2_py = 0.0;
      this->isa_l1_m_e = 0.0;
      this->isa_l2_m_e = 0.0;
      this->isa_l1_m_s = 0.0;
      this->isa_l2_m_s = 0.0;
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
  using _a_dot_type = double;
  _a_dot_type a_dot;
  using _delta_af_0_type = double;
  _delta_af_0_type delta_af_0;
  using _delta_af_1_type = double;
  _delta_af_1_type delta_af_1;
  using _delta_gamma_type = double;
  _delta_gamma_type delta_gamma;
  using _delta_i_type = double;
  _delta_i_type delta_i;
  using _delta_omega_type = double;
  _delta_omega_type delta_omega;
  using _delta_a_type = double;
  _delta_a_type delta_a;
  using _isc_l1_m_e_type = double;
  _isc_l1_m_e_type isc_l1_m_e;
  using _isc_l2_m_e_type = double;
  _isc_l2_m_e_type isc_l2_m_e;
  using _isc_l1_m_s_type = double;
  _isc_l1_m_s_type isc_l1_m_s;
  using _isc_l2_m_s_type = double;
  _isc_l2_m_s_type isc_l2_m_s;
  using _isa_l2_py_type = double;
  _isa_l2_py_type isa_l2_py;
  using _isa_l1_m_e_type = double;
  _isa_l1_m_e_type isa_l1_m_e;
  using _isa_l2_m_e_type = double;
  _isa_l2_m_e_type isa_l2_m_e;
  using _isa_l1_m_s_type = double;
  _isa_l1_m_s_type isa_l1_m_s;
  using _isa_l2_m_s_type = double;
  _isa_l2_m_s_type isa_l2_m_s;

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
  Type &set__a_dot(const double &_arg) {
    this->a_dot = _arg;
    return *this;
  }
  Type &set__delta_af_0(const double &_arg) {
    this->delta_af_0 = _arg;
    return *this;
  }
  Type &set__delta_af_1(const double &_arg) {
    this->delta_af_1 = _arg;
    return *this;
  }
  Type &set__delta_gamma(const double &_arg) {
    this->delta_gamma = _arg;
    return *this;
  }
  Type &set__delta_i(const double &_arg) {
    this->delta_i = _arg;
    return *this;
  }
  Type &set__delta_omega(const double &_arg) {
    this->delta_omega = _arg;
    return *this;
  }
  Type &set__delta_a(const double &_arg) {
    this->delta_a = _arg;
    return *this;
  }
  Type &set__isc_l1_m_e(const double &_arg) {
    this->isc_l1_m_e = _arg;
    return *this;
  }
  Type &set__isc_l2_m_e(const double &_arg) {
    this->isc_l2_m_e = _arg;
    return *this;
  }
  Type &set__isc_l1_m_s(const double &_arg) {
    this->isc_l1_m_s = _arg;
    return *this;
  }
  Type &set__isc_l2_m_s(const double &_arg) {
    this->isc_l2_m_s = _arg;
    return *this;
  }
  Type &set__isa_l2_py(const double &_arg) {
    this->isa_l2_py = _arg;
    return *this;
  }
  Type &set__isa_l1_m_e(const double &_arg) {
    this->isa_l1_m_e = _arg;
    return *this;
  }
  Type &set__isa_l2_m_e(const double &_arg) {
    this->isa_l2_m_e = _arg;
    return *this;
  }
  Type &set__isa_l1_m_s(const double &_arg) {
    this->isa_l1_m_s = _arg;
    return *this;
  }
  Type &set__isa_l2_m_s(const double &_arg) {
    this->isa_l2_m_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataGpsMnavEphemeris_ &other) const {
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
    if (this->a_dot != other.a_dot) {
      return false;
    }
    if (this->delta_af_0 != other.delta_af_0) {
      return false;
    }
    if (this->delta_af_1 != other.delta_af_1) {
      return false;
    }
    if (this->delta_gamma != other.delta_gamma) {
      return false;
    }
    if (this->delta_i != other.delta_i) {
      return false;
    }
    if (this->delta_omega != other.delta_omega) {
      return false;
    }
    if (this->delta_a != other.delta_a) {
      return false;
    }
    if (this->isc_l1_m_e != other.isc_l1_m_e) {
      return false;
    }
    if (this->isc_l2_m_e != other.isc_l2_m_e) {
      return false;
    }
    if (this->isc_l1_m_s != other.isc_l1_m_s) {
      return false;
    }
    if (this->isc_l2_m_s != other.isc_l2_m_s) {
      return false;
    }
    if (this->isa_l2_py != other.isa_l2_py) {
      return false;
    }
    if (this->isa_l1_m_e != other.isa_l1_m_e) {
      return false;
    }
    if (this->isa_l2_m_e != other.isa_l2_m_e) {
      return false;
    }
    if (this->isa_l1_m_s != other.isa_l1_m_s) {
      return false;
    }
    if (this->isa_l2_m_s != other.isa_l2_m_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataGpsMnavEphemeris_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataGpsMnavEphemeris_

// alias to use template instance with default allocator
using MetadataGpsMnavEphemeris =
    aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_HPP_
