// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementAltitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_altitude.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_altitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementAltitude_integrity {
public:
  explicit Init_MeasurementAltitude_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementAltitude integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_num_integrity {
public:
  explicit Init_MeasurementAltitude_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementAltitude_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_error_model_params {
public:
  explicit Init_MeasurementAltitude_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementAltitude::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementAltitude_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_num_error_model_params {
public:
  explicit Init_MeasurementAltitude_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementAltitude::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementAltitude_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_error_model {
public:
  explicit Init_MeasurementAltitude_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementAltitude_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_variance {
public:
  explicit Init_MeasurementAltitude_variance(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_error_model variance(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementAltitude_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_altitude {
public:
  explicit Init_MeasurementAltitude_altitude(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_variance altitude(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_altitude_type arg) {
    msg_.altitude = std::move(arg);
    return Init_MeasurementAltitude_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_reference {
public:
  explicit Init_MeasurementAltitude_reference(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_altitude reference(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_reference_type arg) {
    msg_.reference = std::move(arg);
    return Init_MeasurementAltitude_altitude(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_time_of_validity {
public:
  explicit Init_MeasurementAltitude_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude &msg)
      : msg_(msg) {}
  Init_MeasurementAltitude_reference time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAltitude::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementAltitude_reference(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

class Init_MeasurementAltitude_header {
public:
  Init_MeasurementAltitude_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementAltitude_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementAltitude::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementAltitude_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAltitude msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementAltitude>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementAltitude_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__BUILDER_HPP_
