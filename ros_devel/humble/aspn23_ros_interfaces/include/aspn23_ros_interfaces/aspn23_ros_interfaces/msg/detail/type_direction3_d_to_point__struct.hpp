// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

// Include directives for member types
// Member 'remote_point'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.hpp"
// Member 'observation_characteristics'
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeDirection3DToPoint         \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeDirection3DToPoint         \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeDirection3DToPoint_ {
  using Type = TypeDirection3DToPoint_<ContainerAllocator>;

  explicit TypeDirection3DToPoint_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : remote_point(_init), observation_characteristics(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(
          this->obs.begin(), this->obs.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->covariance.begin(), this->covariance.end(), 0.0);
      this->has_observation_characteristics = false;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  explicit TypeDirection3DToPoint_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : remote_point(_alloc, _init), obs(_alloc), covariance(_alloc),
        observation_characteristics(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->reference_frame = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(
          this->obs.begin(), this->obs.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(
          this->covariance.begin(), this->covariance.end(), 0.0);
      this->has_observation_characteristics = false;
      this->error_model = 0;
      this->num_error_model_params = 0;
      this->num_integrity = 0;
    }
  }

  // field types and members
  using _remote_point_type =
      aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>;
  _remote_point_type remote_point;
  using _reference_frame_type = uint8_t;
  _reference_frame_type reference_frame;
  using _obs_type = std::array<double, 2>;
  _obs_type obs;
  using _covariance_type = std::array<double, 4>;
  _covariance_type covariance;
  using _has_observation_characteristics_type = bool;
  _has_observation_characteristics_type has_observation_characteristics;
  using _observation_characteristics_type =
      aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>;
  _observation_characteristics_type observation_characteristics;
  using _error_model_type = uint8_t;
  _error_model_type error_model;
  using _num_error_model_params_type = uint16_t;
  _num_error_model_params_type num_error_model_params;
  using _error_model_params_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _error_model_params_type error_model_params;
  using _num_integrity_type = uint8_t;
  _num_integrity_type num_integrity;
  using _integrity_type = std::vector<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>;
  _integrity_type integrity;

  // setters for named parameter idiom
  Type &set__remote_point(
      const aspn23_ros_interfaces::msg::TypeRemotePoint_<ContainerAllocator>
          &_arg) {
    this->remote_point = _arg;
    return *this;
  }
  Type &set__reference_frame(const uint8_t &_arg) {
    this->reference_frame = _arg;
    return *this;
  }
  Type &set__obs(const std::array<double, 2> &_arg) {
    this->obs = _arg;
    return *this;
  }
  Type &set__covariance(const std::array<double, 4> &_arg) {
    this->covariance = _arg;
    return *this;
  }
  Type &set__has_observation_characteristics(const bool &_arg) {
    this->has_observation_characteristics = _arg;
    return *this;
  }
  Type &set__observation_characteristics(
      const aspn23_ros_interfaces::msg::TypeImageFeature_<ContainerAllocator>
          &_arg) {
    this->observation_characteristics = _arg;
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
  Type &set__num_integrity(const uint8_t &_arg) {
    this->num_integrity = _arg;
    return *this;
  }
  Type &set__integrity(
      const std::vector<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
          typename std::allocator_traits<ContainerAllocator>::
              template rebind_alloc<aspn23_ros_interfaces::msg::TypeIntegrity_<
                  ContainerAllocator>>> &_arg) {
    this->integrity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL = 0u;
  static constexpr uint8_t
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL = 1u;
  static constexpr uint8_t
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE = 2u;
  static constexpr uint8_t
      ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE = 3u;
  static constexpr uint8_t ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE =
      0u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<ContainerAllocator> *;
  using ConstRawPtr = const aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
      ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeDirection3DToPoint
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeDirection3DToPoint
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeDirection3DToPoint_ &other) const {
    if (this->remote_point != other.remote_point) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    if (this->obs != other.obs) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    if (this->has_observation_characteristics !=
        other.has_observation_characteristics) {
      return false;
    }
    if (this->observation_characteristics !=
        other.observation_characteristics) {
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
    if (this->num_integrity != other.num_integrity) {
      return false;
    }
    if (this->integrity != other.integrity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeDirection3DToPoint_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeDirection3DToPoint_

// alias to use template instance with default allocator
using TypeDirection3DToPoint =
    aspn23_ros_interfaces::msg::TypeDirection3DToPoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeDirection3DToPoint_<ContainerAllocator>::
    ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeDirection3DToPoint_<ContainerAllocator>::
    ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeDirection3DToPoint_<ContainerAllocator>::
    ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeDirection3DToPoint_<ContainerAllocator>::
    ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t TypeDirection3DToPoint_<
    ContainerAllocator>::ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_HPP_
