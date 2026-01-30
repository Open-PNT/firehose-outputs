// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDeltaPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_delta_position.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_delta_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementDeltaPosition_integrity {
public:
  explicit Init_MeasurementDeltaPosition_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_num_integrity {
public:
  explicit Init_MeasurementDeltaPosition_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementDeltaPosition_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_error_model_params {
public:
  explicit Init_MeasurementDeltaPosition_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementDeltaPosition_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_num_error_model_params {
public:
  explicit Init_MeasurementDeltaPosition_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementDeltaPosition_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_error_model {
public:
  explicit Init_MeasurementDeltaPosition_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementDeltaPosition_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_covariance {
public:
  explicit Init_MeasurementDeltaPosition_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_covariance_type
          arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementDeltaPosition_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_term3 {
public:
  explicit Init_MeasurementDeltaPosition_term3(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_covariance term3(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_term3_type arg) {
    msg_.term3 = std::move(arg);
    return Init_MeasurementDeltaPosition_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_term2 {
public:
  explicit Init_MeasurementDeltaPosition_term2(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_term3 term2(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_term2_type arg) {
    msg_.term2 = std::move(arg);
    return Init_MeasurementDeltaPosition_term3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_term1 {
public:
  explicit Init_MeasurementDeltaPosition_term1(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_term2 term1(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_term1_type arg) {
    msg_.term1 = std::move(arg);
    return Init_MeasurementDeltaPosition_term2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_num_meas {
public:
  explicit Init_MeasurementDeltaPosition_num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_term1 num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_num_meas_type
          arg) {
    msg_.num_meas = std::move(arg);
    return Init_MeasurementDeltaPosition_term1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_delta_t {
public:
  explicit Init_MeasurementDeltaPosition_delta_t(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_num_meas
  delta_t(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_delta_t_type
              arg) {
    msg_.delta_t = std::move(arg);
    return Init_MeasurementDeltaPosition_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_reference_frame {
public:
  explicit Init_MeasurementDeltaPosition_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_delta_t
  reference_frame(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::
                      _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementDeltaPosition_delta_t(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_time_of_validity {
public:
  explicit Init_MeasurementDeltaPosition_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition &msg)
      : msg_(msg) {}
  Init_MeasurementDeltaPosition_reference_frame
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementDeltaPosition_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

class Init_MeasurementDeltaPosition_header {
public:
  Init_MeasurementDeltaPosition_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementDeltaPosition_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementDeltaPosition::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementDeltaPosition_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDeltaPosition msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementDeltaPosition>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementDeltaPosition_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__BUILDER_HPP_
