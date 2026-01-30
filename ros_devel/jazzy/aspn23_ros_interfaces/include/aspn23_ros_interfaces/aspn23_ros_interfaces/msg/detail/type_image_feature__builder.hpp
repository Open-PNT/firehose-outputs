// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_image_feature.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeImageFeature_descriptor {
public:
  explicit Init_TypeImageFeature_descriptor(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeImageFeature descriptor(
      ::aspn23_ros_interfaces::msg::TypeImageFeature::_descriptor_type arg) {
    msg_.descriptor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_descriptor_size {
public:
  explicit Init_TypeImageFeature_descriptor_size(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  Init_TypeImageFeature_descriptor descriptor_size(
      ::aspn23_ros_interfaces::msg::TypeImageFeature::_descriptor_size_type
          arg) {
    msg_.descriptor_size = std::move(arg);
    return Init_TypeImageFeature_descriptor(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_octave {
public:
  explicit Init_TypeImageFeature_octave(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  Init_TypeImageFeature_descriptor_size
  octave(::aspn23_ros_interfaces::msg::TypeImageFeature::_octave_type arg) {
    msg_.octave = std::move(arg);
    return Init_TypeImageFeature_descriptor_size(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_class_id {
public:
  explicit Init_TypeImageFeature_class_id(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  Init_TypeImageFeature_octave
  class_id(::aspn23_ros_interfaces::msg::TypeImageFeature::_class_id_type arg) {
    msg_.class_id = std::move(arg);
    return Init_TypeImageFeature_octave(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_size {
public:
  explicit Init_TypeImageFeature_size(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  Init_TypeImageFeature_class_id
  size(::aspn23_ros_interfaces::msg::TypeImageFeature::_size_type arg) {
    msg_.size = std::move(arg);
    return Init_TypeImageFeature_class_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_orientation {
public:
  explicit Init_TypeImageFeature_orientation(
      ::aspn23_ros_interfaces::msg::TypeImageFeature &msg)
      : msg_(msg) {}
  Init_TypeImageFeature_size orientation(
      ::aspn23_ros_interfaces::msg::TypeImageFeature::_orientation_type arg) {
    msg_.orientation = std::move(arg);
    return Init_TypeImageFeature_size(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

class Init_TypeImageFeature_response {
public:
  Init_TypeImageFeature_response()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeImageFeature_orientation
  response(::aspn23_ros_interfaces::msg::TypeImageFeature::_response_type arg) {
    msg_.response = std::move(arg);
    return Init_TypeImageFeature_orientation(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeImageFeature msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeImageFeature>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeImageFeature_response();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__BUILDER_HPP_
