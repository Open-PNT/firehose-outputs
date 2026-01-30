// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementTimeFrequencyDifference.idl generated
// code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_time_frequency_difference.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementTimeFrequencyDifference_integrity {
public:
  explicit Init_MeasurementTimeFrequencyDifference_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference
  integrity(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_num_integrity {
public:
  explicit Init_MeasurementTimeFrequencyDifference_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_error_model_params {
public:
  explicit Init_MeasurementTimeFrequencyDifference_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_num_error_model_params {
public:
  explicit Init_MeasurementTimeFrequencyDifference_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_error_model_params
  num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_error_model {
public:
  explicit Init_MeasurementTimeFrequencyDifference_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_covariance {
public:
  explicit Init_MeasurementTimeFrequencyDifference_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_error_model
  covariance(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                 _covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_freq_diff {
public:
  explicit Init_MeasurementTimeFrequencyDifference_freq_diff(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_covariance
  freq_diff(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                _freq_diff_type arg) {
    msg_.freq_diff = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_digits_of_precision {
public:
  explicit Init_MeasurementTimeFrequencyDifference_digits_of_precision(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_freq_diff digits_of_precision(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _digits_of_precision_type arg) {
    msg_.digits_of_precision = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_freq_diff(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_time_diff_attosec {
public:
  explicit Init_MeasurementTimeFrequencyDifference_time_diff_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_digits_of_precision time_diff_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _time_diff_attosec_type arg) {
    msg_.time_diff_attosec = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_digits_of_precision(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_time_diff_nsec {
public:
  explicit Init_MeasurementTimeFrequencyDifference_time_diff_nsec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_time_diff_attosec time_diff_nsec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _time_diff_nsec_type arg) {
    msg_.time_diff_nsec = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_time_diff_attosec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_clock_id2 {
public:
  explicit Init_MeasurementTimeFrequencyDifference_clock_id2(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_time_diff_nsec
  clock_id2(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                _clock_id2_type arg) {
    msg_.clock_id2 = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_time_diff_nsec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_clock_id1 {
public:
  explicit Init_MeasurementTimeFrequencyDifference_clock_id1(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_clock_id2
  clock_id1(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
                _clock_id1_type arg) {
    msg_.clock_id1 = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_clock_id2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_time_of_validity_attosec {
public:
  explicit Init_MeasurementTimeFrequencyDifference_time_of_validity_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_clock_id1 time_of_validity_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _time_of_validity_attosec_type arg) {
    msg_.time_of_validity_attosec = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_clock_id1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_time_of_validity {
public:
  explicit Init_MeasurementTimeFrequencyDifference_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementTimeFrequencyDifference_time_of_validity_attosec
  time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_time_of_validity_attosec(
        msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

class Init_MeasurementTimeFrequencyDifference_header {
public:
  Init_MeasurementTimeFrequencyDifference_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementTimeFrequencyDifference_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference::
             _header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementTimeFrequencyDifference_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementTimeFrequencyDifference_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__BUILDER_HPP_
