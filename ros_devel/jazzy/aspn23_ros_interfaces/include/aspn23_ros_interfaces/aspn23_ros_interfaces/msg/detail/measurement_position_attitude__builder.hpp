// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementPositionAttitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_position_attitude.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_position_attitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementPositionAttitude_integrity {
public:
  explicit Init_MeasurementPositionAttitude_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_num_integrity {
public:
  explicit Init_MeasurementPositionAttitude_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementPositionAttitude_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_error_model_params {
public:
  explicit Init_MeasurementPositionAttitude_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementPositionAttitude_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_num_error_model_params {
public:
  explicit Init_MeasurementPositionAttitude_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementPositionAttitude_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_error_model {
public:
  explicit Init_MeasurementPositionAttitude_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementPositionAttitude_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_covariance {
public:
  explicit Init_MeasurementPositionAttitude_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_error_model
  covariance(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                 _covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementPositionAttitude_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_quaternion {
public:
  explicit Init_MeasurementPositionAttitude_quaternion(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_covariance
  quaternion(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                 _quaternion_type arg) {
    msg_.quaternion = std::move(arg);
    return Init_MeasurementPositionAttitude_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_p3 {
public:
  explicit Init_MeasurementPositionAttitude_p3(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_quaternion
  p3(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::_p3_type arg) {
    msg_.p3 = std::move(arg);
    return Init_MeasurementPositionAttitude_quaternion(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_p2 {
public:
  explicit Init_MeasurementPositionAttitude_p2(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_p3
  p2(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::_p2_type arg) {
    msg_.p2 = std::move(arg);
    return Init_MeasurementPositionAttitude_p3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_p1 {
public:
  explicit Init_MeasurementPositionAttitude_p1(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_p2
  p1(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::_p1_type arg) {
    msg_.p1 = std::move(arg);
    return Init_MeasurementPositionAttitude_p2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_reference_frame {
public:
  explicit Init_MeasurementPositionAttitude_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_p1
  reference_frame(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                      _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementPositionAttitude_p1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_time_of_validity {
public:
  explicit Init_MeasurementPositionAttitude_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude &msg)
      : msg_(msg) {}
  Init_MeasurementPositionAttitude_reference_frame
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementPositionAttitude_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

class Init_MeasurementPositionAttitude_header {
public:
  Init_MeasurementPositionAttitude_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementPositionAttitude_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementPositionAttitude::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementPositionAttitude_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPositionAttitude msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementPositionAttitude>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementPositionAttitude_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__BUILDER_HPP_
