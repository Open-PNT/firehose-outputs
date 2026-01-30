// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataMagneticField.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_magnetic_field.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataMagneticField_b {
public:
  explicit Init_MetadataMagneticField_b(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataMagneticField
  b(::aspn23_ros_interfaces::msg::MetadataMagneticField::_b_type arg) {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

class Init_MetadataMagneticField_k {
public:
  explicit Init_MetadataMagneticField_k(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField &msg)
      : msg_(msg) {}
  Init_MetadataMagneticField_b
  k(::aspn23_ros_interfaces::msg::MetadataMagneticField::_k_type arg) {
    msg_.k = std::move(arg);
    return Init_MetadataMagneticField_b(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

class Init_MetadataMagneticField_num_meas {
public:
  explicit Init_MetadataMagneticField_num_meas(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField &msg)
      : msg_(msg) {}
  Init_MetadataMagneticField_k num_meas(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField::_num_meas_type arg) {
    msg_.num_meas = std::move(arg);
    return Init_MetadataMagneticField_k(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

class Init_MetadataMagneticField_mounting {
public:
  explicit Init_MetadataMagneticField_mounting(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField &msg)
      : msg_(msg) {}
  Init_MetadataMagneticField_num_meas mounting(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField::_mounting_type arg) {
    msg_.mounting = std::move(arg);
    return Init_MetadataMagneticField_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

class Init_MetadataMagneticField_time_of_validity {
public:
  explicit Init_MetadataMagneticField_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataMagneticField &msg)
      : msg_(msg) {}
  Init_MetadataMagneticField_mounting
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataMagneticField::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataMagneticField_mounting(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

class Init_MetadataMagneticField_info {
public:
  Init_MetadataMagneticField_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataMagneticField_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataMagneticField::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataMagneticField_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataMagneticField msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataMagneticField>() {
  return aspn23_ros_interfaces::msg::builder::Init_MetadataMagneticField_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__BUILDER_HPP_
