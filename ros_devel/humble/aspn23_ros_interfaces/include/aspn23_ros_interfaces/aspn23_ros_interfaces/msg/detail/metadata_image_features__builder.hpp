// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataImageFeatures_descriptor_number_of_elements {
public:
  explicit Init_MetadataImageFeatures_descriptor_number_of_elements(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures
  descriptor_number_of_elements(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures::
          _descriptor_number_of_elements_type arg) {
    msg_.descriptor_number_of_elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_descriptor_type {
public:
  explicit Init_MetadataImageFeatures_descriptor_type(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_descriptor_number_of_elements descriptor_type(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures::_descriptor_type_type
          arg) {
    msg_.descriptor_type = std::move(arg);
    return Init_MetadataImageFeatures_descriptor_number_of_elements(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_is_bigendian {
public:
  explicit Init_MetadataImageFeatures_is_bigendian(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_descriptor_type is_bigendian(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures::_is_bigendian_type
          arg) {
    msg_.is_bigendian = std::move(arg);
    return Init_MetadataImageFeatures_descriptor_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_descriptor_extractor {
public:
  explicit Init_MetadataImageFeatures_descriptor_extractor(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_is_bigendian
  descriptor_extractor(::aspn23_ros_interfaces::msg::MetadataImageFeatures::
                           _descriptor_extractor_type arg) {
    msg_.descriptor_extractor = std::move(arg);
    return Init_MetadataImageFeatures_is_bigendian(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_orientation_calculated {
public:
  explicit Init_MetadataImageFeatures_orientation_calculated(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_descriptor_extractor
  orientation_calculated(::aspn23_ros_interfaces::msg::MetadataImageFeatures::
                             _orientation_calculated_type arg) {
    msg_.orientation_calculated = std::move(arg);
    return Init_MetadataImageFeatures_descriptor_extractor(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_keypoint_detector {
public:
  explicit Init_MetadataImageFeatures_keypoint_detector(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_orientation_calculated
  keypoint_detector(::aspn23_ros_interfaces::msg::MetadataImageFeatures::
                        _keypoint_detector_type arg) {
    msg_.keypoint_detector = std::move(arg);
    return Init_MetadataImageFeatures_orientation_calculated(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_time_of_validity {
public:
  explicit Init_MetadataImageFeatures_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataImageFeatures &msg)
      : msg_(msg) {}
  Init_MetadataImageFeatures_keypoint_detector
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataImageFeatures::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataImageFeatures_keypoint_detector(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

class Init_MetadataImageFeatures_info {
public:
  Init_MetadataImageFeatures_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataImageFeatures_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataImageFeatures::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataImageFeatures_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImageFeatures msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataImageFeatures>() {
  return aspn23_ros_interfaces::msg::builder::Init_MetadataImageFeatures_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__BUILDER_HPP_
