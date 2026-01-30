// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirection2DToPoints.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_HPP_

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
// Member 'obs'
#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementDirection2DToPoints_ {
  using Type = MeasurementDirection2DToPoints_<ContainerAllocator>;

  explicit MeasurementDirection2DToPoints_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_obs = 0;
    }
  }

  explicit MeasurementDirection2DToPoints_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->num_obs = 0;
    }
  }

  // field types and members
  using _header_type =
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _num_obs_type = uint16_t;
  _num_obs_type num_obs;
  using _obs_type = std::vector<
      aspn23_ros_interfaces::msg::TypeDirection2DToPoint_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeDirection2DToPoint_<
              ContainerAllocator>>>;
  _obs_type obs;

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
  Type &set__num_obs(const uint16_t &_arg) {
    this->num_obs = _arg;
    return *this;
  }
  Type &set__obs(const std::vector<
                 aspn23_ros_interfaces::msg::TypeDirection2DToPoint_<
                     ContainerAllocator>,
                 typename std::allocator_traits<ContainerAllocator>::
                     template rebind_alloc<
                         aspn23_ros_interfaces::msg::TypeDirection2DToPoint_<
                             ContainerAllocator>>> &_arg) {
    this->obs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr = aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
      ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
          ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::
                          MeasurementDirection2DToPoints_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::
                          MeasurementDirection2DToPoints_<ContainerAllocator>,
                      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
          ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
          ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints
      std::shared_ptr<aspn23_ros_interfaces::msg::
                          MeasurementDirection2DToPoints_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
              ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementDirection2DToPoints_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->num_obs != other.num_obs) {
      return false;
    }
    if (this->obs != other.obs) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeasurementDirection2DToPoints_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementDirection2DToPoints_

// alias to use template instance with default allocator
using MeasurementDirection2DToPoints =
    aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints_<
        std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_HPP_
