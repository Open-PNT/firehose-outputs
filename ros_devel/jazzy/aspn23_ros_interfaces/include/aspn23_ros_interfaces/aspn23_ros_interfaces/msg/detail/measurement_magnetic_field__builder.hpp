// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementMagneticField.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_magnetic_field.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementMagneticField_integrity {
public:
  explicit Init_MeasurementMagneticField_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_num_integrity {
public:
  explicit Init_MeasurementMagneticField_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementMagneticField_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_error_model_params {
public:
  explicit Init_MeasurementMagneticField_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementMagneticField_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_num_error_model_params {
public:
  explicit Init_MeasurementMagneticField_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementMagneticField_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_error_model {
public:
  explicit Init_MeasurementMagneticField_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementMagneticField_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_covariance {
public:
  explicit Init_MeasurementMagneticField_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField::_covariance_type
          arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementMagneticField_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_z_field_strength {
public:
  explicit Init_MeasurementMagneticField_z_field_strength(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_covariance
  z_field_strength(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                       _z_field_strength_type arg) {
    msg_.z_field_strength = std::move(arg);
    return Init_MeasurementMagneticField_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_y_field_strength {
public:
  explicit Init_MeasurementMagneticField_y_field_strength(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_z_field_strength
  y_field_strength(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                       _y_field_strength_type arg) {
    msg_.y_field_strength = std::move(arg);
    return Init_MeasurementMagneticField_z_field_strength(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_x_field_strength {
public:
  explicit Init_MeasurementMagneticField_x_field_strength(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_y_field_strength
  x_field_strength(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                       _x_field_strength_type arg) {
    msg_.x_field_strength = std::move(arg);
    return Init_MeasurementMagneticField_y_field_strength(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_num_meas {
public:
  explicit Init_MeasurementMagneticField_num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_x_field_strength num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField::_num_meas_type
          arg) {
    msg_.num_meas = std::move(arg);
    return Init_MeasurementMagneticField_x_field_strength(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_time_of_validity {
public:
  explicit Init_MeasurementMagneticField_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementMagneticField &msg)
      : msg_(msg) {}
  Init_MeasurementMagneticField_num_meas
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementMagneticField::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementMagneticField_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

class Init_MeasurementMagneticField_header {
public:
  Init_MeasurementMagneticField_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementMagneticField_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementMagneticField::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementMagneticField_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementMagneticField msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementMagneticField>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementMagneticField_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__BUILDER_HPP_
