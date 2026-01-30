// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementAttitude2D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_attitude2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementAttitude2D_integrity {
public:
  explicit Init_MeasurementAttitude2D_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D
  integrity(::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_integrity_type
                arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_num_integrity {
public:
  explicit Init_MeasurementAttitude2D_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementAttitude2D_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_error_model_params {
public:
  explicit Init_MeasurementAttitude2D_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementAttitude2D::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementAttitude2D_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_num_error_model_params {
public:
  explicit Init_MeasurementAttitude2D_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementAttitude2D::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementAttitude2D_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_error_model {
public:
  explicit Init_MeasurementAttitude2D_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementAttitude2D_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_covariance {
public:
  explicit Init_MeasurementAttitude2D_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_covariance_type
          arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementAttitude2D_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_attitude2d {
public:
  explicit Init_MeasurementAttitude2D_attitude2d(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_covariance attitude2d(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_attitude2d_type
          arg) {
    msg_.attitude2d = std::move(arg);
    return Init_MeasurementAttitude2D_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_reference_frame {
public:
  explicit Init_MeasurementAttitude2D_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_attitude2d reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_reference_frame_type
          arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementAttitude2D_attitude2d(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_time_of_validity {
public:
  explicit Init_MeasurementAttitude2D_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D &msg)
      : msg_(msg) {}
  Init_MeasurementAttitude2D_reference_frame
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementAttitude2D::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementAttitude2D_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

class Init_MeasurementAttitude2D_header {
public:
  Init_MeasurementAttitude2D_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementAttitude2D_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementAttitude2D::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementAttitude2D_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAttitude2D msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementAttitude2D>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementAttitude2D_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE2_D__BUILDER_HPP_
