// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_HPP_

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
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataImageFeatures          \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__MetadataImageFeatures          \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct MetadataImageFeatures_ {
  using Type = MetadataImageFeatures_<ContainerAllocator>;

  explicit MetadataImageFeatures_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_init), time_of_validity(_init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->keypoint_detector = 0;
      this->orientation_calculated = false;
      this->descriptor_extractor = 0;
      this->is_bigendian = false;
      this->descriptor_type = 0;
      this->descriptor_number_of_elements = 0;
    }
  }

  explicit MetadataImageFeatures_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL)
      : info(_alloc, _init), time_of_validity(_alloc, _init) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->keypoint_detector = 0;
      this->orientation_calculated = false;
      this->descriptor_extractor = 0;
      this->is_bigendian = false;
      this->descriptor_type = 0;
      this->descriptor_number_of_elements = 0;
    }
  }

  // field types and members
  using _info_type =
      aspn23_ros_interfaces::msg::TypeMetadataheader_<ContainerAllocator>;
  _info_type info;
  using _time_of_validity_type =
      aspn23_ros_interfaces::msg::TypeTimestamp_<ContainerAllocator>;
  _time_of_validity_type time_of_validity;
  using _keypoint_detector_type = uint8_t;
  _keypoint_detector_type keypoint_detector;
  using _orientation_calculated_type = bool;
  _orientation_calculated_type orientation_calculated;
  using _descriptor_extractor_type = uint8_t;
  _descriptor_extractor_type descriptor_extractor;
  using _is_bigendian_type = bool;
  _is_bigendian_type is_bigendian;
  using _descriptor_type_type = uint8_t;
  _descriptor_type_type descriptor_type;
  using _descriptor_number_of_elements_type = uint16_t;
  _descriptor_number_of_elements_type descriptor_number_of_elements;

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
  Type &set__keypoint_detector(const uint8_t &_arg) {
    this->keypoint_detector = _arg;
    return *this;
  }
  Type &set__orientation_calculated(const bool &_arg) {
    this->orientation_calculated = _arg;
    return *this;
  }
  Type &set__descriptor_extractor(const uint8_t &_arg) {
    this->descriptor_extractor = _arg;
    return *this;
  }
  Type &set__is_bigendian(const bool &_arg) {
    this->is_bigendian = _arg;
    return *this;
  }
  Type &set__descriptor_type(const uint8_t &_arg) {
    this->descriptor_type = _arg;
    return *this;
  }
  Type &set__descriptor_number_of_elements(const uint16_t &_arg) {
    this->descriptor_number_of_elements = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST = 0u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE = 1u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK = 2u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST = 3u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT = 4u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE = 5u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER = 6u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB = 7u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT = 8u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF = 9u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS = 10u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI = 11u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER = 12u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE = 0u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK = 1u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE = 2u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB = 3u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT = 4u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF = 5u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER = 6u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8 = 0u;
  static constexpr uint8_t
      ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32 = 1u;

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::MetadataImageFeatures_<ContainerAllocator> *;
  using ConstRawPtr = const aspn23_ros_interfaces::msg::MetadataImageFeatures_<
      ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::MetadataImageFeatures_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataImageFeatures_<
          ContainerAllocator> const>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataImageFeatures_<
                    ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::MetadataImageFeatures_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <typename Deleter = std::default_delete<
                aspn23_ros_interfaces::msg::MetadataImageFeatures_<
                    ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<aspn23_ros_interfaces::msg::MetadataImageFeatures_<
                          ContainerAllocator> const,
                      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::MetadataImageFeatures_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<aspn23_ros_interfaces::msg::MetadataImageFeatures_<
          ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataImageFeatures
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataImageFeatures_<
          ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__MetadataImageFeatures
      std::shared_ptr<aspn23_ros_interfaces::msg::MetadataImageFeatures_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const MetadataImageFeatures_ &other) const {
    if (this->info != other.info) {
      return false;
    }
    if (this->time_of_validity != other.time_of_validity) {
      return false;
    }
    if (this->keypoint_detector != other.keypoint_detector) {
      return false;
    }
    if (this->orientation_calculated != other.orientation_calculated) {
      return false;
    }
    if (this->descriptor_extractor != other.descriptor_extractor) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->descriptor_type != other.descriptor_type) {
      return false;
    }
    if (this->descriptor_number_of_elements !=
        other.descriptor_number_of_elements) {
      return false;
    }
    return true;
  }
  bool operator!=(const MetadataImageFeatures_ &other) const {
    return !this->operator==(other);
  }
}; // struct MetadataImageFeatures_

// alias to use template instance with default allocator
using MetadataImageFeatures =
    aspn23_ros_interfaces::msg::MetadataImageFeatures_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<ContainerAllocator>::
    ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<
    ContainerAllocator>::ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8;
#endif // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and
// below, deprecated in C++17
template <typename ContainerAllocator>
constexpr uint8_t MetadataImageFeatures_<
    ContainerAllocator>::ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32;
#endif // __cplusplus < 201703L

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_HPP_
