// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementPosition.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementPosition_integrity {
public:
  explicit Init_MeasurementPosition_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementPosition integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_num_integrity {
public:
  explicit Init_MeasurementPosition_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementPosition_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_error_model_params {
public:
  explicit Init_MeasurementPosition_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementPosition::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementPosition_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_num_error_model_params {
public:
  explicit Init_MeasurementPosition_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementPosition::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementPosition_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_error_model {
public:
  explicit Init_MeasurementPosition_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementPosition_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_covariance {
public:
  explicit Init_MeasurementPosition_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementPosition_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_num_meas {
public:
  explicit Init_MeasurementPosition_num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_covariance num_meas(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_num_meas_type arg) {
    msg_.num_meas = std::move(arg);
    return Init_MeasurementPosition_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_term3 {
public:
  explicit Init_MeasurementPosition_term3(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_num_meas
  term3(::aspn23_ros_interfaces::msg::MeasurementPosition::_term3_type arg) {
    msg_.term3 = std::move(arg);
    return Init_MeasurementPosition_num_meas(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_term2 {
public:
  explicit Init_MeasurementPosition_term2(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_term3
  term2(::aspn23_ros_interfaces::msg::MeasurementPosition::_term2_type arg) {
    msg_.term2 = std::move(arg);
    return Init_MeasurementPosition_term3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_term1 {
public:
  explicit Init_MeasurementPosition_term1(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_term2
  term1(::aspn23_ros_interfaces::msg::MeasurementPosition::_term1_type arg) {
    msg_.term1 = std::move(arg);
    return Init_MeasurementPosition_term2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_reference_frame {
public:
  explicit Init_MeasurementPosition_reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_term1 reference_frame(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_reference_frame_type
          arg) {
    msg_.reference_frame = std::move(arg);
    return Init_MeasurementPosition_term1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_time_of_validity {
public:
  explicit Init_MeasurementPosition_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition &msg)
      : msg_(msg) {}
  Init_MeasurementPosition_reference_frame time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementPosition::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementPosition_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

class Init_MeasurementPosition_header {
public:
  Init_MeasurementPosition_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementPosition_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementPosition::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementPosition_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementPosition msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementPosition>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementPosition_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__BUILDER_HPP_
