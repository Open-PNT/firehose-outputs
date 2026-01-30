// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSpeed.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementSpeed_integrity {
public:
  explicit Init_MeasurementSpeed_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementSpeed integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_num_integrity {
public:
  explicit Init_MeasurementSpeed_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementSpeed_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_error_model_params {
public:
  explicit Init_MeasurementSpeed_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_error_model_params_type
          arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementSpeed_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_num_error_model_params {
public:
  explicit Init_MeasurementSpeed_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementSpeed::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementSpeed_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_error_model {
public:
  explicit Init_MeasurementSpeed_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementSpeed_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_variance {
public:
  explicit Init_MeasurementSpeed_variance(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementSpeed::_variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementSpeed_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_speed {
public:
  explicit Init_MeasurementSpeed_speed(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_variance
  speed(::aspn23_ros_interfaces::msg::MeasurementSpeed::_speed_type arg) {
    msg_.speed = std::move(arg);
    return Init_MeasurementSpeed_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_reference {
public:
  explicit Init_MeasurementSpeed_reference(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_speed reference(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_reference_type arg) {
    msg_.reference = std::move(arg);
    return Init_MeasurementSpeed_speed(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_time_of_validity {
public:
  explicit Init_MeasurementSpeed_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed &msg)
      : msg_(msg) {}
  Init_MeasurementSpeed_reference time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementSpeed::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementSpeed_reference(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

class Init_MeasurementSpeed_header {
public:
  Init_MeasurementSpeed_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementSpeed_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementSpeed::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementSpeed_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpeed msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementSpeed>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementSpeed_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__BUILDER_HPP_
