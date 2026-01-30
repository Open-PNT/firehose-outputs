// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementMagneticFieldMagnitude.idl generated
// code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_magnetic_field_magnitude.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field_magnitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementMagneticFieldMagnitude_integrity {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude
  integrity(::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_num_integrity {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
          _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_error_model_params {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_num_error_model_params {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_error_model_params
  num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_error_model {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_variance {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_variance(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
               _variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_field_strength {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_field_strength(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_variance field_strength(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
          _field_strength_type arg) {
    msg_.field_strength = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_time_of_validity {
public:
  explicit Init_MeasurementMagneticFieldMagnitude_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticFieldMagnitude_field_strength time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_field_strength(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

class Init_MeasurementMagneticFieldMagnitude_header {
public:
  Init_MeasurementMagneticFieldMagnitude_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementMagneticFieldMagnitude_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude::
             _header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementMagneticFieldMagnitude_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementMagneticFieldMagnitude>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementMagneticFieldMagnitude_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE__BUILDER_HPP_
