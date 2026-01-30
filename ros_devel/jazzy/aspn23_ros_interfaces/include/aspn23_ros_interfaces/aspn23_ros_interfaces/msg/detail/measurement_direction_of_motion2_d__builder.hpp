// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirectionOfMotion2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_direction_of_motion2_d.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementDirectionOfMotion2D_integrity {
public:
  explicit Init_MeasurementDirectionOfMotion2D_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D
  integrity(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_num_integrity {
public:
  explicit Init_MeasurementDirectionOfMotion2D_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_error_model_params {
public:
  explicit Init_MeasurementDirectionOfMotion2D_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_num_error_model_params {
public:
  explicit Init_MeasurementDirectionOfMotion2D_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_error_model {
public:
  explicit Init_MeasurementDirectionOfMotion2D_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_variance {
public:
  explicit Init_MeasurementDirectionOfMotion2D_variance(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
               _variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_obs {
public:
  explicit Init_MeasurementDirectionOfMotion2D_obs(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::_obs_type
          arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_reference {
public:
  explicit Init_MeasurementDirectionOfMotion2D_reference(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_obs
  reference(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
                _reference_type arg) {
    msg_.reference = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_time_of_validity {
public:
  explicit Init_MeasurementDirectionOfMotion2D_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion2D_reference time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_reference(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

class Init_MeasurementDirectionOfMotion2D_header {
public:
  Init_MeasurementDirectionOfMotion2D_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementDirectionOfMotion2D_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D::_header_type
          arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementDirectionOfMotion2D_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion2D>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementDirectionOfMotion2D_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__BUILDER_HPP_
