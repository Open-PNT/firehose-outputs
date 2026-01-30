// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_HPP_

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

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeMetadataheader             \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeMetadataheader             \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeMetadataheader_ {
  using Type = TypeMetadataheader_<ContainerAllocator>;

  explicit TypeMetadataheader_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sensor_description = "";
      this->delta_t_nom = 0.0;
      this->timestamp_clock_id = 0;
      this->digits_of_precision = 0;
    }
  }

  explicit TypeMetadataheader_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), sensor_description(_alloc) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->sensor_description = "";
      this->delta_t_nom = 0.0;
      this->timestamp_clock_id = 0;
      this->digits_of_precision = 0;
    }
  }

  // field types and members
  using _header_type =
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>;
  _header_type header;
  using _sensor_description_type =
      std::basic_string<char, std::char_traits<char>,
                        typename std::allocator_traits<
                            ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_description_type sensor_description;
  using _delta_t_nom_type = double;
  _delta_t_nom_type delta_t_nom;
  using _timestamp_clock_id_type = uint8_t;
  _timestamp_clock_id_type timestamp_clock_id;
  using _digits_of_precision_type = uint8_t;
  _digits_of_precision_type digits_of_precision;

  // setters for named parameter idiom
  Type &set__header(
      const aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator> &_arg) {
    this->header = _arg;
    return *this;
  }
  Type &set__sensor_description(
      const std::basic_string<
          char, std::char_traits<char>,
          typename std::allocator_traits<
              ContainerAllocator>::template rebind_alloc<char>> &_arg) {
    this->sensor_description = _arg;
    return *this;
  }
  Type &set__delta_t_nom(const double &_arg) {
    this->delta_t_nom = _arg;
    return *this;
  }
  Type &set__timestamp_clock_id(const uint8_t &_arg) {
    this->timestamp_clock_id = _arg;
    return *this;
  }
  Type &set__digits_of_precision(const uint8_t &_arg) {
    this->digits_of_precision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>
          *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeMetadataheader_<
          ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::TypeMetadataheader_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeMetadataheader
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeMetadataheader
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeMetadataheader_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeMetadataheader_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_description != other.sensor_description) {
      return false;
    }
    if (this->delta_t_nom != other.delta_t_nom) {
      return false;
    }
    if (this->timestamp_clock_id != other.timestamp_clock_id) {
      return false;
    }
    if (this->digits_of_precision != other.digits_of_precision) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeMetadataheader_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeMetadataheader_

// alias to use template instance with default allocator
using TypeMetadataheader =
    aspn23_ros_interfaces::msg::TypeMetadataheader_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_HPP_
