// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSpecificForce1D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPECIFIC_FORCE1_D__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPECIFIC_FORCE1_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_specific_force1_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementSpecificForce1D_integrity {
public:
  explicit Init_MeasurementSpecificForce1D_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_num_integrity {
public:
  explicit Init_MeasurementSpecificForce1D_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementSpecificForce1D_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_error_model_params {
public:
  explicit Init_MeasurementSpecificForce1D_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementSpecificForce1D_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_num_error_model_params {
public:
  explicit Init_MeasurementSpecificForce1D_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementSpecificForce1D_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_error_model {
public:
  explicit Init_MeasurementSpecificForce1D_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementSpecificForce1D_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_variance {
public:
  explicit Init_MeasurementSpecificForce1D_variance(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_error_model variance(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::_variance_type
          arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementSpecificForce1D_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_obs {
public:
  explicit Init_MeasurementSpecificForce1D_obs(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::_obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementSpecificForce1D_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_sensor_type {
public:
  explicit Init_MeasurementSpecificForce1D_sensor_type(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_obs
  sensor_type(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
                  _sensor_type_type arg) {
    msg_.sensor_type = std::move(arg);
    return Init_MeasurementSpecificForce1D_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_time_of_validity {
public:
  explicit Init_MeasurementSpecificForce1D_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D &msg)
      : msg_(msg) {}
  Init_MeasurementSpecificForce1D_sensor_type
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementSpecificForce1D_sensor_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

class Init_MeasurementSpecificForce1D_header {
public:
  Init_MeasurementSpecificForce1D_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementSpecificForce1D_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementSpecificForce1D_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementSpecificForce1D>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementSpecificForce1D_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPECIFIC_FORCE1_D__BUILDER_HPP_
