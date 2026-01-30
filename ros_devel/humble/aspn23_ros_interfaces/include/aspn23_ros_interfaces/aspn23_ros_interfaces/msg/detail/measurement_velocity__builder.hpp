// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementVelocity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementVelocity_integrity {
public:
  explicit Init_MeasurementVelocity_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementVelocity integrity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_num_integrity {
public:
  explicit Init_MeasurementVelocity_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementVelocity_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_error_model_params {
public:
  explicit Init_MeasurementVelocity_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementVelocity::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementVelocity_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_num_error_model_params {
public:
  explicit Init_MeasurementVelocity_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementVelocity::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementVelocity_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_error_model {
public:
  explicit Init_MeasurementVelocity_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementVelocity_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_covariance {
public:
  explicit Init_MeasurementVelocity_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementVelocity_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_num_meas {
public:
  explicit Init_MeasurementVelocity_num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_covariance num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_num_meas_type arg) {
    msg_.num_meas = std::move(arg);
    return Init_MeasurementVelocity_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_z {
public:
  explicit Init_MeasurementVelocity_z(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_num_meas
  z(::aspn23_ros_interfaces::msg::MeasurementVelocity::_z_type arg) {
    msg_.z = std::move(arg);
    return Init_MeasurementVelocity_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_y {
public:
  explicit Init_MeasurementVelocity_y(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_z
  y(::aspn23_ros_interfaces::msg::MeasurementVelocity::_y_type arg) {
    msg_.y = std::move(arg);
    return Init_MeasurementVelocity_z(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_x {
public:
  explicit Init_MeasurementVelocity_x(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_y
  x(::aspn23_ros_interfaces::msg::MeasurementVelocity::_x_type arg) {
    msg_.x = std::move(arg);
    return Init_MeasurementVelocity_y(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_reference_frame {
public:
  explicit Init_MeasurementVelocity_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_x reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_reference_frame_type
          arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementVelocity_x(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_time_of_validity {
public:
  explicit Init_MeasurementVelocity_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementVelocity_reference_frame time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementVelocity::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementVelocity_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

class Init_MeasurementVelocity_header {
public:
  Init_MeasurementVelocity_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementVelocity_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementVelocity::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementVelocity_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementVelocity msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementVelocity>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementVelocity_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__BUILDER_HPP_
