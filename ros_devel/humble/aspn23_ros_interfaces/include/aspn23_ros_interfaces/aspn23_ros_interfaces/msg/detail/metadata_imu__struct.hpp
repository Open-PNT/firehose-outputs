// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImu.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_HPP_

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
// Member 'mounting'
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataImu                    \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataImu                    \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataImu_ {
  using Type = MetadataImu_<ContainerAllocator>;

  explicit MetadataImu_(rosidl_runtime_cpp::MessageInitialization _init =
                            rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init), mounting(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->error_model = 0;
      this->num_error_model_params = 0;
    }
  }

  explicit MetadataImu_(const ContainerAllocator &_alloc,
                        rosidl_runtime_cpp::MessageInitialization _init =
                            rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init),
        mounting(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->error_model = 0;
      this->num_error_model_params = 0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _mounting_type =
      aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>;
  _mounting_type mounting;
  using _error_model_type = uint8_t;
  _error_model_type error_model;
  using _num_error_model_params_type = uint16_t;
  _num_error_model_params_type num_error_model_params;
  using _error_model_params_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _error_model_params_type error_model_params;

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
  Type &set__mounting(
      const aspn23_ros_interfaces::msg::TypeMounting_<ContainerAllocator>
          &_arg) {
    this->mounting = _arg;
    return *this;
  }
  Type &set__error_model(const uint8_t &_arg) {
    this->error_model = _arg;
    return *this;
  }
  Type &set__num_error_model_params(const uint16_t &_arg) {
    this->num_error_model_params = _arg;
    return *this;
  }
  Type &set__error_model_params(
      const std::vector<double,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<double>> &_arg) {
    this->error_model_params = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ASPN23_METADATA_IMU_ERROR_MODEL_BASIC = 0u;

  // pointer types
  using RawPtr = aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataImu std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator>>
      Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataImu std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataImu_<ContainerAllocator> const>
      ConstPtr;

  // comparison operators
  bool operator==(const MetadataImu_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->mounting != other.mounting) {
      return false;
    }
    if (this->error_model != other.error_model) {
      return false;
    }
    if (this->num_error_model_params != other.num_error_model_params) {
      return false;
    }
    if (this->error_model_params != other.error_model_params) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataImu_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataImu_

// alias to use template instance with default allocator
using MetadataImu =
    aspn23_ros_interfaces::msg::MetadataImu_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t
    MetadataImu_<ContainerAllocator>::ASPN23_METADATA_IMU_ERROR_MODEL_BASIC;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_HPP_
