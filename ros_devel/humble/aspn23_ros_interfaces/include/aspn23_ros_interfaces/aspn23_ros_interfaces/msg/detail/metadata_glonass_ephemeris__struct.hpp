// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
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
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGlonassEphemeris       \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGlonassEphemeris       \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataGlonassEphemeris_ {
  using Type = MetadataGlonassEphemeris_<ContainerAllocator>;

  explicit MetadataGlonassEphemeris_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->slot_number = 0l;
      this->freq_o = 0l;
      this->n_t = 0l;
      this->t_k = 0.0;
      this->t_b = 0.0;
      this->gamma_n = 0.0;
      this->tau_n = 0.0;
      this->sv_pos_x = 0.0;
      this->sv_vel_x = 0.0;
      this->sv_accel_x = 0.0;
      this->sv_pos_y = 0.0;
      this->sv_vel_y = 0.0;
      this->sv_accel_y = 0.0;
      this->sv_pos_z = 0.0;
      this->sv_vel_z = 0.0;
      this->sv_accel_z = 0.0;
    }
  }

  explicit MetadataGlonassEphemeris_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->slot_number = 0l;
      this->freq_o = 0l;
      this->n_t = 0l;
      this->t_k = 0.0;
      this->t_b = 0.0;
      this->gamma_n = 0.0;
      this->tau_n = 0.0;
      this->sv_pos_x = 0.0;
      this->sv_vel_x = 0.0;
      this->sv_accel_x = 0.0;
      this->sv_pos_y = 0.0;
      this->sv_vel_y = 0.0;
      this->sv_accel_y = 0.0;
      this->sv_pos_z = 0.0;
      this->sv_vel_z = 0.0;
      this->sv_accel_z = 0.0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _slot_number_type = int32_t;
  _slot_number_type slot_number;
  using _freq_o_type = int32_t;
  _freq_o_type freq_o;
  using _n_t_type = int32_t;
  _n_t_type n_t;
  using _t_k_type = double;
  _t_k_type t_k;
  using _t_b_type = double;
  _t_b_type t_b;
  using _gamma_n_type = double;
  _gamma_n_type gamma_n;
  using _tau_n_type = double;
  _tau_n_type tau_n;
  using _sv_pos_x_type = double;
  _sv_pos_x_type sv_pos_x;
  using _sv_vel_x_type = double;
  _sv_vel_x_type sv_vel_x;
  using _sv_accel_x_type = double;
  _sv_accel_x_type sv_accel_x;
  using _sv_pos_y_type = double;
  _sv_pos_y_type sv_pos_y;
  using _sv_vel_y_type = double;
  _sv_vel_y_type sv_vel_y;
  using _sv_accel_y_type = double;
  _sv_accel_y_type sv_accel_y;
  using _sv_pos_z_type = double;
  _sv_pos_z_type sv_pos_z;
  using _sv_vel_z_type = double;
  _sv_vel_z_type sv_vel_z;
  using _sv_accel_z_type = double;
  _sv_accel_z_type sv_accel_z;

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
  Type &set__slot_number(const int32_t &_arg) {
    this->slot_number = _arg;
    return *this;
  }
  Type &set__freq_o(const int32_t &_arg) {
    this->freq_o = _arg;
    return *this;
  }
  Type &set__n_t(const int32_t &_arg) {
    this->n_t = _arg;
    return *this;
  }
  Type &set__t_k(const double &_arg) {
    this->t_k = _arg;
    return *this;
  }
  Type &set__t_b(const double &_arg) {
    this->t_b = _arg;
    return *this;
  }
  Type &set__gamma_n(const double &_arg) {
    this->gamma_n = _arg;
    return *this;
  }
  Type &set__tau_n(const double &_arg) {
    this->tau_n = _arg;
    return *this;
  }
  Type &set__sv_pos_x(const double &_arg) {
    this->sv_pos_x = _arg;
    return *this;
  }
  Type &set__sv_vel_x(const double &_arg) {
    this->sv_vel_x = _arg;
    return *this;
  }
  Type &set__sv_accel_x(const double &_arg) {
    this->sv_accel_x = _arg;
    return *this;
  }
  Type &set__sv_pos_y(const double &_arg) {
    this->sv_pos_y = _arg;
    return *this;
  }
  Type &set__sv_vel_y(const double &_arg) {
    this->sv_vel_y = _arg;
    return *this;
  }
  Type &set__sv_accel_y(const double &_arg) {
    this->sv_accel_y = _arg;
    return *this;
  }
  Type &set__sv_pos_z(const double &_arg) {
    this->sv_pos_z = _arg;
    return *this;
  }
  Type &set__sv_vel_z(const double &_arg) {
    this->sv_vel_z = _arg;
    return *this;
  }
  Type &set__sv_accel_z(const double &_arg) {
    this->sv_accel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<ContainerAllocator>
          *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGlonassEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGlonassEphemeris
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataGlonassEphemeris_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->slot_number != other.slot_number) {
      return false;
    }
    if (this->freq_o != other.freq_o) {
      return false;
    }
    if (this->n_t != other.n_t) {
      return false;
    }
    if (this->t_k != other.t_k) {
      return false;
    }
    if (this->t_b != other.t_b) {
      return false;
    }
    if (this->gamma_n != other.gamma_n) {
      return false;
    }
    if (this->tau_n != other.tau_n) {
      return false;
    }
    if (this->sv_pos_x != other.sv_pos_x) {
      return false;
    }
    if (this->sv_vel_x != other.sv_vel_x) {
      return false;
    }
    if (this->sv_accel_x != other.sv_accel_x) {
      return false;
    }
    if (this->sv_pos_y != other.sv_pos_y) {
      return false;
    }
    if (this->sv_vel_y != other.sv_vel_y) {
      return false;
    }
    if (this->sv_accel_y != other.sv_accel_y) {
      return false;
    }
    if (this->sv_pos_z != other.sv_pos_z) {
      return false;
    }
    if (this->sv_vel_z != other.sv_vel_z) {
      return false;
    }
    if (this->sv_accel_z != other.sv_accel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataGlonassEphemeris_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataGlonassEphemeris_

// alias to use template instance with default allocator
using MetadataGlonassEphemeris =
    aspn23_ros_interfaces::msg::MetadataGlonassEphemeris_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_HPP_
