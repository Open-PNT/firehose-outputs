// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_iono_utc_parameters.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters   \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters   \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataGpsIonoUtcParameters_ {
  using Type = MetadataGpsIonoUtcParameters_<ContainerAllocator>;

  explicit MetadataGpsIonoUtcParameters_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->a_0 = 0.0;
      this->a_1 = 0.0;
      this->delta_t_ls = 0;
      this->tot = 0ul;
      this->wn_t = 0;
      this->wn_lsf = 0;
      this->dn = 0;
      this->delta_t_lsf = 0;
      this->alpha_0 = 0.0;
      this->alpha_1 = 0.0;
      this->alpha_2 = 0.0;
      this->alpha_3 = 0.0;
      this->beta_0 = 0.0;
      this->beta_1 = 0.0;
      this->beta_2 = 0.0;
      this->beta_3 = 0.0;
    }
  }

  explicit MetadataGpsIonoUtcParameters_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->a_0 = 0.0;
      this->a_1 = 0.0;
      this->delta_t_ls = 0;
      this->tot = 0ul;
      this->wn_t = 0;
      this->wn_lsf = 0;
      this->dn = 0;
      this->delta_t_lsf = 0;
      this->alpha_0 = 0.0;
      this->alpha_1 = 0.0;
      this->alpha_2 = 0.0;
      this->alpha_3 = 0.0;
      this->beta_0 = 0.0;
      this->beta_1 = 0.0;
      this->beta_2 = 0.0;
      this->beta_3 = 0.0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _a_0_type = double;
  _a_0_type a_0;
  using _a_1_type = double;
  _a_1_type a_1;
  using _delta_t_ls_type = int8_t;
  _delta_t_ls_type delta_t_ls;
  using _tot_type = uint32_t;
  _tot_type tot;
  using _wn_t_type = uint8_t;
  _wn_t_type wn_t;
  using _wn_lsf_type = uint8_t;
  _wn_lsf_type wn_lsf;
  using _dn_type = uint8_t;
  _dn_type dn;
  using _delta_t_lsf_type = int8_t;
  _delta_t_lsf_type delta_t_lsf;
  using _alpha_0_type = double;
  _alpha_0_type alpha_0;
  using _alpha_1_type = double;
  _alpha_1_type alpha_1;
  using _alpha_2_type = double;
  _alpha_2_type alpha_2;
  using _alpha_3_type = double;
  _alpha_3_type alpha_3;
  using _beta_0_type = double;
  _beta_0_type beta_0;
  using _beta_1_type = double;
  _beta_1_type beta_1;
  using _beta_2_type = double;
  _beta_2_type beta_2;
  using _beta_3_type = double;
  _beta_3_type beta_3;

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
  Type &set__a_0(const double &_arg) {
    this->a_0 = _arg;
    return *this;
  }
  Type &set__a_1(const double &_arg) {
    this->a_1 = _arg;
    return *this;
  }
  Type &set__delta_t_ls(const int8_t &_arg) {
    this->delta_t_ls = _arg;
    return *this;
  }
  Type &set__tot(const uint32_t &_arg) {
    this->tot = _arg;
    return *this;
  }
  Type &set__wn_t(const uint8_t &_arg) {
    this->wn_t = _arg;
    return *this;
  }
  Type &set__wn_lsf(const uint8_t &_arg) {
    this->wn_lsf = _arg;
    return *this;
  }
  Type &set__dn(const uint8_t &_arg) {
    this->dn = _arg;
    return *this;
  }
  Type &set__delta_t_lsf(const int8_t &_arg) {
    this->delta_t_lsf = _arg;
    return *this;
  }
  Type &set__alpha_0(const double &_arg) {
    this->alpha_0 = _arg;
    return *this;
  }
  Type &set__alpha_1(const double &_arg) {
    this->alpha_1 = _arg;
    return *this;
  }
  Type &set__alpha_2(const double &_arg) {
    this->alpha_2 = _arg;
    return *this;
  }
  Type &set__alpha_3(const double &_arg) {
    this->alpha_3 = _arg;
    return *this;
  }
  Type &set__beta_0(const double &_arg) {
    this->beta_0 = _arg;
    return *this;
  }
  Type &set__beta_1(const double &_arg) {
    this->beta_1 = _arg;
    return *this;
  }
  Type &set__beta_2(const double &_arg) {
    this->beta_2 = _arg;
    return *this;
  }
  Type &set__beta_3(const double &_arg) {
    this->beta_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr = aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
      ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
                          ContainerAllocator>,
                      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataGpsIonoUtcParameters_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->a_0 != other.a_0) {
      return false;
    }
    if (this->a_1 != other.a_1) {
      return false;
    }
    if (this->delta_t_ls != other.delta_t_ls) {
      return false;
    }
    if (this->tot != other.tot) {
      return false;
    }
    if (this->wn_t != other.wn_t) {
      return false;
    }
    if (this->wn_lsf != other.wn_lsf) {
      return false;
    }
    if (this->dn != other.dn) {
      return false;
    }
    if (this->delta_t_lsf != other.delta_t_lsf) {
      return false;
    }
    if (this->alpha_0 != other.alpha_0) {
      return false;
    }
    if (this->alpha_1 != other.alpha_1) {
      return false;
    }
    if (this->alpha_2 != other.alpha_2) {
      return false;
    }
    if (this->alpha_3 != other.alpha_3) {
      return false;
    }
    if (this->beta_0 != other.beta_0) {
      return false;
    }
    if (this->beta_1 != other.beta_1) {
      return false;
    }
    if (this->beta_2 != other.beta_2) {
      return false;
    }
    if (this->beta_3 != other.beta_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataGpsIonoUtcParameters_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataGpsIonoUtcParameters_

// alias to use template instance with default allocator
using MetadataGpsIonoUtcParameters =
    aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters_<
        std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_HPP_
