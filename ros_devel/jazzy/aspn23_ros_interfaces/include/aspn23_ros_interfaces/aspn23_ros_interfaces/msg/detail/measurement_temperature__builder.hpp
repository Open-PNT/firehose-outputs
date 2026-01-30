// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementTemperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_temperature.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TEMPERATURE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementTemperature_integrity {
public:
  explicit Init_MeasurementTemperature_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementTemperature integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_num_integrity {
public:
  explicit Init_MeasurementTemperature_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementTemperature_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_error_model_params {
public:
  explicit Init_MeasurementTemperature_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementTemperature::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementTemperature_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_num_error_model_params {
public:
  explicit Init_MeasurementTemperature_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementTemperature::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementTemperature_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_error_model {
public:
  explicit Init_MeasurementTemperature_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementTemperature_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_variance {
public:
  explicit Init_MeasurementTemperature_variance(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementTemperature::_variance_type
               arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementTemperature_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_temperature {
public:
  explicit Init_MeasurementTemperature_temperature(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_variance temperature(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature::_temperature_type
          arg) {
    msg_.temperature = std::move(arg);
    return Init_MeasurementTemperature_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_time_of_validity {
public:
  explicit Init_MeasurementTemperature_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature &msg)
      : msg_(msg) {}
  Init_MeasurementTemperature_temperature
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementTemperature::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementTemperature_temperature(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

class Init_MeasurementTemperature_header {
public:
  Init_MeasurementTemperature_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementTemperature_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementTemperature::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementTemperature_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTemperature msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementTemperature>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementTemperature_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TEMPERATURE__BUILDER_HPP_
