// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_HPP_

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
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementImage               \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MeasurementImage               \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MeasurementImage_ {
  using Type = MeasurementImage_<ContainerAllocator>;

  explicit MeasurementImage_(rosidl_runtime_cpp::MessageInitialization _init =
                                 rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->height = 0ul;
      this->width = 0ul;
      this->is_bigendian = false;
      this->image_type = 0;
      this->image_data_length = 0ull;
      this->camera_model = 0;
      this->num_model_coefficients = 0;
      this->num_integrity = 0;
    }
  }

  explicit MeasurementImage_(const ContainerAllocator &_alloc,
                             rosidl_runtime_cpp::MessageInitialization _init =
                                 rosidl_runtime_cpp::MessageInitialization::ALL)
      : header(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->height = 0ul;
      this->width = 0ul;
      this->is_bigendian = false;
      this->image_type = 0;
      this->image_data_length = 0ull;
      this->camera_model = 0;
      this->num_model_coefficients = 0;
      this->num_integrity = 0;
    }
  }

  // field types and members
  using _header_type =
      aspn23_ros_interfaces::msg::TypeHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _height_type = uint32_t;
  _height_type height;
  using _width_type = uint32_t;
  _width_type width;
  using _is_bigendian_type = bool;
  _is_bigendian_type is_bigendian;
  using _image_type_type = uint8_t;
  _image_type_type image_type;
  using _image_data_length_type = uint64_t;
  _image_data_length_type image_data_length;
  using _image_data_type =
      std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::
                               template rebind_alloc<uint8_t>>;
  _image_data_type image_data;
  using _camera_model_type = uint8_t;
  _camera_model_type camera_model;
  using _num_model_coefficients_type = uint8_t;
  _num_model_coefficients_type num_model_coefficients;
  using _model_coefficients_type =
      std::vector<double, typename std::allocator_traits<ContainerAllocator>::
                              template rebind_alloc<double>>;
  _model_coefficients_type model_coefficients;
  using _num_integrity_type = uint8_t;
  _num_integrity_type num_integrity;
  using _integrity_type = std::vector<
      aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>,
      typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<
          aspn23_ros_interfaces::msg::TypeIntegrity_<ContainerAllocator>>>;
  _integrity_type integrity;

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
  Type &set__height(const uint32_t &_arg) {
    this->height = _arg;
    return *this;
  }
  Type &set__width(const uint32_t &_arg) {
    this->width = _arg;
    return *this;
  }
  Type &set__is_bigendian(const bool &_arg) {
    this->is_bigendian = _arg;
    return *this;
  }
  Type &set__image_type(const uint8_t &_arg) {
    this->image_type = _arg;
    return *this;
  }
  Type &set__image_data_length(const uint64_t &_arg) {
    this->image_data_length = _arg;
    return *this;
  }
  Type &set__image_data(
      const std::vector<uint8_t,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<uint8_t>> &_arg) {
    this->image_data = _arg;
    return *this;
  }
  Type &set__camera_model(const uint8_t &_arg) {
    this->camera_model = _arg;
    return *this;
  }
  Type &set__num_model_coefficients(const uint8_t &_arg) {
    this->num_model_coefficients = _arg;
    return *this;
  }
  Type &set__model_coefficients(
      const std::vector<double,
                        typename std::allocator_traits<ContainerAllocator>::
                            template rebind_alloc<double>> &_arg) {
    this->model_coefficients = _arg;
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
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP = 0u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG = 1u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG = 2u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF = 3u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8 = 4u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8 = 5u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8 = 6u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8 = 7u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8 = 8u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16 = 9u;
  static constexpr uint8_t ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64 =
      10u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB = 0u;
  static constexpr uint8_t
      ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL = 1u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementImage
      std::shared_ptr<
          aspn23_ros_interfaces::msg::MeasurementImage_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MeasurementImage
      std::shared_ptr<aspn23_ros_interfaces::msg::MeasurementImage_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MeasurementImage_ &other) const {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->image_type != other.image_type) {
      return false;
    }
    if (this->image_data_length != other.image_data_length) {
      return false;
    }
    if (this->image_data != other.image_data) {
      return false;
    }
    if (this->camera_model != other.camera_model) {
      return false;
    }
    if (this->num_model_coefficients != other.num_model_coefficients) {
      return false;
    }
    if (this->model_coefficients != other.model_coefficients) {
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
  bool operator!=(const MeasurementImage_ &other) const {
    return !this->operator==(other);
  }
}; // struct MeasurementImage_

// alias to use template instance with default allocator
using MeasurementImage =
    aspn23_ros_interfaces::msg::MeasurementImage_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<
    ContainerAllocator>::ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<ContainerAllocator>::
    ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MeasurementImage_<ContainerAllocator>::
    ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_HPP_
