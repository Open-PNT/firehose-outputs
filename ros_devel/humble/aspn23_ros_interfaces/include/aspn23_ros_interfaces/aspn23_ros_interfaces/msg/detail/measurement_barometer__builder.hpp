// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementBarometer.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_BAROMETER__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_BAROMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_barometer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementBarometer_integrity {
public:
  explicit Init_MeasurementBarometer_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementBarometer integrity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_num_integrity {
public:
  explicit Init_MeasurementBarometer_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementBarometer_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_error_model_params {
public:
  explicit Init_MeasurementBarometer_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementBarometer::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementBarometer_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_num_error_model_params {
public:
  explicit Init_MeasurementBarometer_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementBarometer::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementBarometer_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_error_model {
public:
  explicit Init_MeasurementBarometer_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementBarometer_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_variance {
public:
  explicit Init_MeasurementBarometer_variance(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_error_model variance(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementBarometer_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_pressure {
public:
  explicit Init_MeasurementBarometer_pressure(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_variance pressure(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_pressure_type arg) {
    msg_.pressure = std::move(arg);
    return Init_MeasurementBarometer_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_time_of_validity {
public:
  explicit Init_MeasurementBarometer_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer &msg)
      : msg_(msg) {}
  Init_MeasurementBarometer_pressure time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementBarometer::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementBarometer_pressure(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

class Init_MeasurementBarometer_header {
public:
  Init_MeasurementBarometer_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementBarometer_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementBarometer::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementBarometer_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementBarometer msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementBarometer>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementBarometer_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_BAROMETER__BUILDER_HPP_
