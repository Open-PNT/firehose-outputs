// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementFrequencyDifference.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_frequency_difference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementFrequencyDifference_integrity {
public:
  explicit Init_MeasurementFrequencyDifference_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference
  integrity(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                _integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_num_integrity {
public:
  explicit Init_MeasurementFrequencyDifference_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementFrequencyDifference_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_error_model_params {
public:
  explicit Init_MeasurementFrequencyDifference_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementFrequencyDifference_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_num_error_model_params {
public:
  explicit Init_MeasurementFrequencyDifference_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementFrequencyDifference_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_error_model {
public:
  explicit Init_MeasurementFrequencyDifference_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementFrequencyDifference_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_variance {
public:
  explicit Init_MeasurementFrequencyDifference_variance(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
               _variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementFrequencyDifference_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_freq_diff {
public:
  explicit Init_MeasurementFrequencyDifference_freq_diff(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_variance
  freq_diff(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                _freq_diff_type arg) {
    msg_.freq_diff = std::move(arg);
    return Init_MeasurementFrequencyDifference_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_clock_id2 {
public:
  explicit Init_MeasurementFrequencyDifference_clock_id2(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_freq_diff
  clock_id2(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                _clock_id2_type arg) {
    msg_.clock_id2 = std::move(arg);
    return Init_MeasurementFrequencyDifference_freq_diff(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_clock_id1 {
public:
  explicit Init_MeasurementFrequencyDifference_clock_id1(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_clock_id2
  clock_id1(::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
                _clock_id1_type arg) {
    msg_.clock_id1 = std::move(arg);
    return Init_MeasurementFrequencyDifference_clock_id2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_time_of_validity_attosec {
public:
  explicit Init_MeasurementFrequencyDifference_time_of_validity_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_clock_id1 time_of_validity_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
          _time_of_validity_attosec_type arg) {
    msg_.time_of_validity_attosec = std::move(arg);
    return Init_MeasurementFrequencyDifference_clock_id1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_time_of_validity {
public:
  explicit Init_MeasurementFrequencyDifference_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference &msg)
      : msg_(msg) {}
  Init_MeasurementFrequencyDifference_time_of_validity_attosec time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementFrequencyDifference_time_of_validity_attosec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

class Init_MeasurementFrequencyDifference_header {
public:
  Init_MeasurementFrequencyDifference_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementFrequencyDifference_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference::_header_type
          arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementFrequencyDifference_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementFrequencyDifference>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementFrequencyDifference_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__BUILDER_HPP_
