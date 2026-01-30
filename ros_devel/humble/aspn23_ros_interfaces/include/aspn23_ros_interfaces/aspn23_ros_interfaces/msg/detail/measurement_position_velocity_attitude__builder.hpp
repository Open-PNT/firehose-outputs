// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementPositionVelocityAttitude_integrity {
public:
  explicit Init_MeasurementPositionVelocityAttitude_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
  integrity(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_num_integrity {
public:
  explicit Init_MeasurementPositionVelocityAttitude_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
          _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_error_model_params {
public:
  explicit Init_MeasurementPositionVelocityAttitude_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_num_error_model_params {
public:
  explicit Init_MeasurementPositionVelocityAttitude_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_error_model_params
  num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_error_model {
public:
  explicit Init_MeasurementPositionVelocityAttitude_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::
                  MeasurementPositionVelocityAttitude::_error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_num_error_model_params(
        msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_covariance {
public:
  explicit Init_MeasurementPositionVelocityAttitude_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_error_model
  covariance(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
                 _covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_num_meas {
public:
  explicit Init_MeasurementPositionVelocityAttitude_num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_covariance
  num_meas(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
               _num_meas_type arg) {
    msg_.num_meas = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_quaternion {
public:
  explicit Init_MeasurementPositionVelocityAttitude_quaternion(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_num_meas
  quaternion(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
                 _quaternion_type arg) {
    msg_.quaternion = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_v3 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_v3(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_quaternion
  v3(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_v3_type
         arg) {
    msg_.v3 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_quaternion(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_v2 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_v2(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_v3
  v2(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_v2_type
         arg) {
    msg_.v2 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_v3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_v1 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_v1(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_v2
  v1(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_v1_type
         arg) {
    msg_.v1 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_v2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_p3 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_p3(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_v1
  p3(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_p3_type
         arg) {
    msg_.p3 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_v1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_p2 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_p2(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_p3
  p2(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_p2_type
         arg) {
    msg_.p2 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_p3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_p1 {
public:
  explicit Init_MeasurementPositionVelocityAttitude_p1(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_p2
  p1(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::_p1_type
         arg) {
    msg_.p1 = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_p2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_reference_frame {
public:
  explicit Init_MeasurementPositionVelocityAttitude_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_p1 reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
          _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_p1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_time_of_validity {
public:
  explicit Init_MeasurementPositionVelocityAttitude_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionVelocityAttitude_reference_frame time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

class Init_MeasurementPositionVelocityAttitude_header {
public:
  Init_MeasurementPositionVelocityAttitude_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementPositionVelocityAttitude_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude::
             _header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementPositionVelocityAttitude_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementPositionVelocityAttitude_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__BUILDER_HPP_
