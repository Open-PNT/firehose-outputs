// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_metadataheader.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeMetadataheader_digits_of_precision {
public:
  explicit Init_TypeMetadataheader_digits_of_precision(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeMetadataheader
  digits_of_precision(::aspn23_ros_interfaces::msg::TypeMetadataheader::
                          _digits_of_precision_type arg) {
    msg_.digits_of_precision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMetadataheader msg_;
};

class Init_TypeMetadataheader_timestamp_clock_id {
public:
  explicit Init_TypeMetadataheader_timestamp_clock_id(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader &msg)
      : msg_(msg) {}
  Init_TypeMetadataheader_digits_of_precision timestamp_clock_id(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader::_timestamp_clock_id_type
          arg) {
    msg_.timestamp_clock_id = std::move(arg);
    return Init_TypeMetadataheader_digits_of_precision(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMetadataheader msg_;
};

class Init_TypeMetadataheader_delta_t_nom {
public:
  explicit Init_TypeMetadataheader_delta_t_nom(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader &msg)
      : msg_(msg) {}
  Init_TypeMetadataheader_timestamp_clock_id delta_t_nom(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader::_delta_t_nom_type arg) {
    msg_.delta_t_nom = std::move(arg);
    return Init_TypeMetadataheader_timestamp_clock_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMetadataheader msg_;
};

class Init_TypeMetadataheader_sensor_description {
public:
  explicit Init_TypeMetadataheader_sensor_description(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader &msg)
      : msg_(msg) {}
  Init_TypeMetadataheader_delta_t_nom sensor_description(
      ::aspn23_ros_interfaces::msg::TypeMetadataheader::_sensor_description_type
          arg) {
    msg_.sensor_description = std::move(arg);
    return Init_TypeMetadataheader_delta_t_nom(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMetadataheader msg_;
};

class Init_TypeMetadataheader_header {
public:
  Init_TypeMetadataheader_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeMetadataheader_sensor_description
  header(::aspn23_ros_interfaces::msg::TypeMetadataheader::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_TypeMetadataheader_sensor_description(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeMetadataheader msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeMetadataheader>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeMetadataheader_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__BUILDER_HPP_
