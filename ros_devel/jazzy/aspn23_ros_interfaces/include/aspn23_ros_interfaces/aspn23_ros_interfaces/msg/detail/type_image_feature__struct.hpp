// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_image_feature.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeImageFeature               \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeImageFeature               \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeImageFeature_ {
  using Type = TypeImageFeature_<ContainerAllocator>;

  explicit TypeImageFeature_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->response = 0.0;
      this->orientation = 0.0;
      this->size = 0.0;
      this->class_id = 0;
      this->octave = 0;
      this->descriptor_size = 0;
    }
  }

  explicit TypeImageFeature_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->response = 0.0;
      this->orientation = 0.0;
      this->size = 0.0;
      this->class_id = 0;
      this->octave = 0;
      this->descriptor_size = 0;
    }
  }

  // field types and members
  using _response_type = double;
  _response_type response;
  using _orientation_type = double;
  _orientation_type orientation;
  using _size_type = double;
  _size_type size;
  using _class_id_type = uint16_t;
  _class_id_type class_id;
  using _octave_type = uint16_t;
  _octave_type octave;
  using _descriptor_size_type = uint16_t;
  _descriptor_size_type descriptor_size;
  using _descriptor_type =
      std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::
                               template rebind_alloc<uint8_t>>;
  _descriptor_type descriptor;

  // setters for named parameter idiom
  Type &set__response(const double &_arg) {
    this->response = _arg;
    return *this;
  }
  Type &set__orientation(const double &_arg) {
    this->orientation = _arg;
    return *this;
  }
  Type &set__size(const double &_arg) {
    this->size = _arg;
    return *this;
  }
  Type &set__class_id(const uint16_t &_arg) {
    this->class_id = _arg;
    return *this;
  }
  Type &set__octave(const uint16_t &_arg) {
    this->octave = _arg;
    return *this;
  }
  Type &set__descriptor_size(const uint16_t &_arg) {
    this->descriptor_size = _arg;
    return *this;
  }
  Type &set__descriptor(
      const std::vector<uint8_t,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<uint8_t>> &_arg) {
    this->descriptor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeImageFeature
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeImageFeature
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeImageFeature_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeImageFeature_ &other) const {
    if (this->response != other.response) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    if (this->octave != other.octave) {
      return false;
    }
    if (this->descriptor_size != other.descriptor_size) {
      return false;
    }
    if (this->descriptor != other.descriptor) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeImageFeature_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeImageFeature_

// alias to use template instance with default allocator
using TypeImageFeature =
    aspn23_ros_interfaces::msg::TypeImageFeature_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_HPP_
