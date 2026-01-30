// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementAngularVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_angular_velocity.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_angular_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementAngularVelocity_integrity {
public:
  explicit Init_MeasurementAngularVelocity_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_num_integrity {
public:
  explicit Init_MeasurementAngularVelocity_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementAngularVelocity_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_error_model_params {
public:
  explicit Init_MeasurementAngularVelocity_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementAngularVelocity_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_num_error_model_params {
public:
  explicit Init_MeasurementAngularVelocity_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementAngularVelocity_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_error_model {
public:
  explicit Init_MeasurementAngularVelocity_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementAngularVelocity_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_covariance {
public:
  explicit Init_MeasurementAngularVelocity_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::_covariance_type
          arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementAngularVelocity_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_meas {
public:
  explicit Init_MeasurementAngularVelocity_meas(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_covariance
  meas(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::_meas_type
           arg) {
    msg_.meas = std::move(arg);
    return Init_MeasurementAngularVelocity_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_imu_type {
public:
  explicit Init_MeasurementAngularVelocity_imu_type(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_meas imu_type(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::_imu_type_type
          arg) {
    msg_.imu_type = std::move(arg);
    return Init_MeasurementAngularVelocity_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_reference_frame {
public:
  explicit Init_MeasurementAngularVelocity_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_imu_type
  reference_frame(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
                      _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementAngularVelocity_imu_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_time_of_validity {
public:
  explicit Init_MeasurementAngularVelocity_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity &msg)
      : msg_(msg) {}
  Init_MeasurementAngularVelocity_reference_frame
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementAngularVelocity_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

class Init_MeasurementAngularVelocity_header {
public:
  Init_MeasurementAngularVelocity_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementAngularVelocity_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementAngularVelocity::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementAngularVelocity_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAngularVelocity msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementAngularVelocity>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementAngularVelocity_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY__BUILDER_HPP_
