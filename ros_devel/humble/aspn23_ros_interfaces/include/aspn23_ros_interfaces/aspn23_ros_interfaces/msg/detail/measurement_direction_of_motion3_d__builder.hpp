// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirectionOfMotion3D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_direction_of_motion3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementDirectionOfMotion3D_integrity {
public:
  explicit Init_MeasurementDirectionOfMotion3D_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D
  integrity(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_num_integrity {
public:
  explicit Init_MeasurementDirectionOfMotion3D_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_error_model_params {
public:
  explicit Init_MeasurementDirectionOfMotion3D_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_num_error_model_params {
public:
  explicit Init_MeasurementDirectionOfMotion3D_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_error_model {
public:
  explicit Init_MeasurementDirectionOfMotion3D_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_covariance {
public:
  explicit Init_MeasurementDirectionOfMotion3D_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_error_model
  covariance(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                 _covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_error_vector {
public:
  explicit Init_MeasurementDirectionOfMotion3D_error_vector(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_covariance
  error_vector(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                   _error_vector_type arg) {
    msg_.error_vector = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_obs {
public:
  explicit Init_MeasurementDirectionOfMotion3D_obs(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_error_vector
  obs(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::_obs_type
          arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_error_vector(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_reference_frame {
public:
  explicit Init_MeasurementDirectionOfMotion3D_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_obs
  reference_frame(::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
                      _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_time_of_validity {
public:
  explicit Init_MeasurementDirectionOfMotion3D_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D &msg)
      : msg_(msg) {}
  Init_MeasurementDirectionOfMotion3D_reference_frame time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

class Init_MeasurementDirectionOfMotion3D_header {
public:
  Init_MeasurementDirectionOfMotion3D_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementDirectionOfMotion3D_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D::_header_type
          arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementDirectionOfMotion3D_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementDirectionOfMotion3D>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementDirectionOfMotion3D_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__BUILDER_HPP_
