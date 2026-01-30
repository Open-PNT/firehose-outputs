// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_sv_data.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_HPP_

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
// Member 'sv_data_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSvData               \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSvData               \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeSatnavSvData_ {
  using Type = TypeSatnavSvData_<ContainerAllocator>;

  explicit TypeSatnavSvData_(rosidl_runtime_cpp::MessageInitialization _init =
                                 rosidl_runtime_cpp::MessageInitialization::ALL)
      : satellite_system(_init), sv_data_time(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0;
      this->ephemeris_type = 0;
      this->coordinate_frame = 0;
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->sv_pos.begin(), this->sv_pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->sv_vel.begin(), this->sv_vel.end(), 0.0);
      this->sv_clock_bias = 0.0;
      this->sv_clock_drift = 0.0;
      this->group_delay_enum = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(
          this->group_delay_vector.begin(), this->group_delay_vector.end(),
          0.0f);
    }
  }

  explicit TypeSatnavSvData_(const ContainerAllocator &_alloc,
                             rosidl_runtime_cpp::MessageInitialization _init =
                                 rosidl_runtime_cpp::MessageInitialization::ALL)
      : satellite_system(_alloc, _init), sv_data_time(_alloc, _init),
        sv_pos(_alloc), sv_vel(_alloc), group_delay_vector(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->prn = 0;
      this->ephemeris_type = 0;
      this->coordinate_frame = 0;
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->sv_pos.begin(), this->sv_pos.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(
          this->sv_vel.begin(), this->sv_vel.end(), 0.0);
      this->sv_clock_bias = 0.0;
      this->sv_clock_drift = 0.0;
      this->group_delay_enum = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(
          this->group_delay_vector.begin(), this->group_delay_vector.end(),
          0.0f);
    }
  }

  // field types and members
  using _prn_type = int16_t;
  _prn_type prn;
  using _satellite_system_type =
      aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator>;
  _satellite_system_type satellite_system;
  using _ephemeris_type_type = uint8_t;
  _ephemeris_type_type ephemeris_type;
  using _sv_data_time_type =
      aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>;
  _sv_data_time_type sv_data_time;
  using _coordinate_frame_type = uint8_t;
  _coordinate_frame_type coordinate_frame;
  using _sv_pos_type = std::array<double, 3>;
  _sv_pos_type sv_pos;
  using _sv_vel_type = std::array<double, 3>;
  _sv_vel_type sv_vel;
  using _sv_clock_bias_type = double;
  _sv_clock_bias_type sv_clock_bias;
  using _sv_clock_drift_type = double;
  _sv_clock_drift_type sv_clock_drift;
  using _group_delay_enum_type = uint8_t;
  _group_delay_enum_type group_delay_enum;
  using _group_delay_vector_type = std::array<float, 4>;
  _group_delay_vector_type group_delay_vector;

  // setters for named parameter idiom
  Type &set__prn(const int16_t &_arg) {
    this->prn = _arg;
    return *this;
  }
  Type &set__satellite_system(
      const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem_<
          ContainerAllocator> &_arg) {
    this->satellite_system = _arg;
    return *this;
  }
  Type &set__ephemeris_type(const uint8_t &_arg) {
    this->ephemeris_type = _arg;
    return *this;
  }
  Type &set__sv_data_time(
      const aspn23_ros_interfaces::msg::TypeSatnavTime_<ContainerAllocator>
          &_arg) {
    this->sv_data_time = _arg;
    return *this;
  }
  Type &set__coordinate_frame(const uint8_t &_arg) {
    this->coordinate_frame = _arg;
    return *this;
  }
  Type &set__sv_pos(const std::array<double, 3> &_arg) {
    this->sv_pos = _arg;
    return *this;
  }
  Type &set__sv_vel(const std::array<double, 3> &_arg) {
    this->sv_vel = _arg;
    return *this;
  }
  Type &set__sv_clock_bias(const double &_arg) {
    this->sv_clock_bias = _arg;
    return *this;
  }
  Type &set__sv_clock_drift(const double &_arg) {
    this->sv_clock_drift = _arg;
    return *this;
  }
  Type &set__group_delay_enum(const uint8_t &_arg) {
    this->group_delay_enum = _arg;
    return *this;
  }
  Type &set__group_delay_vector(const std::array<float, 4> &_arg) {
    this->group_delay_vector = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM = 0u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV =
      1u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV =
      2u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV =
      3u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF =
      0u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF =
      1u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF =
      2u;
  static constexpr uint8_t ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90 =
      3u;
  static constexpr uint8_t
      ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV = 0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSvData
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeSatnavSvData_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeSatnavSvData
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeSatnavSvData_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeSatnavSvData_ &other) const {
    if (this->prn != other.prn) {
      return false;
    }
    if (this->satellite_system != other.satellite_system) {
      return false;
    }
    if (this->ephemeris_type != other.ephemeris_type) {
      return false;
    }
    if (this->sv_data_time != other.sv_data_time) {
      return false;
    }
    if (this->coordinate_frame != other.coordinate_frame) {
      return false;
    }
    if (this->sv_pos != other.sv_pos) {
      return false;
    }
    if (this->sv_vel != other.sv_vel) {
      return false;
    }
    if (this->sv_clock_bias != other.sv_clock_bias) {
      return false;
    }
    if (this->sv_clock_drift != other.sv_clock_drift) {
      return false;
    }
    if (this->group_delay_enum != other.group_delay_enum) {
      return false;
    }
    if (this->group_delay_vector != other.group_delay_vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeSatnavSvData_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeSatnavSvData_

// alias to use template instance with default allocator
using TypeSatnavSvData =
    aspn23_ros_interfaces::msg::TypeSatnavSvData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<ContainerAllocator>::
    ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeSatnavSvData_<
    ContainerAllocator>::ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_HPP_
