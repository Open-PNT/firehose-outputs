// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementTime.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementTime_integrity {
public:
  explicit Init_MeasurementTime_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementTime integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_num_integrity {
public:
  explicit Init_MeasurementTime_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementTime_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_error_model_params {
public:
  explicit Init_MeasurementTime_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_error_model_params_type
          arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementTime_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_num_error_model_params {
public:
  explicit Init_MeasurementTime_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementTime::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementTime_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_error_model {
public:
  explicit Init_MeasurementTime_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementTime_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_covariance {
public:
  explicit Init_MeasurementTime_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_error_model covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_covariance_type arg) {
    msg_.covariance = std::move(arg);
    return Init_MeasurementTime_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_digits_of_precision {
public:
  explicit Init_MeasurementTime_digits_of_precision(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_covariance digits_of_precision(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_digits_of_precision_type
          arg) {
    msg_.digits_of_precision = std::move(arg);
    return Init_MeasurementTime_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_elapsed_attosec {
public:
  explicit Init_MeasurementTime_elapsed_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_digits_of_precision elapsed_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_elapsed_attosec_type
          arg) {
    msg_.elapsed_attosec = std::move(arg);
    return Init_MeasurementTime_digits_of_precision(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_elapsed_nsec {
public:
  explicit Init_MeasurementTime_elapsed_nsec(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_elapsed_attosec elapsed_nsec(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_elapsed_nsec_type arg) {
    msg_.elapsed_nsec = std::move(arg);
    return Init_MeasurementTime_elapsed_attosec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_clock_id {
public:
  explicit Init_MeasurementTime_clock_id(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_elapsed_nsec
  clock_id(::aspn23_ros_interfaces::msg::MeasurementTime::_clock_id_type arg) {
    msg_.clock_id = std::move(arg);
    return Init_MeasurementTime_elapsed_nsec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_num_obs {
public:
  explicit Init_MeasurementTime_num_obs(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_clock_id
  num_obs(::aspn23_ros_interfaces::msg::MeasurementTime::_num_obs_type arg) {
    msg_.num_obs = std::move(arg);
    return Init_MeasurementTime_clock_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_time_of_validity_attosec {
public:
  explicit Init_MeasurementTime_time_of_validity_attosec(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_num_obs
  time_of_validity_attosec(::aspn23_ros_interfaces::msg::MeasurementTime::
                               _time_of_validity_attosec_type arg) {
    msg_.time_of_validity_attosec = std::move(arg);
    return Init_MeasurementTime_num_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_time_of_validity {
public:
  explicit Init_MeasurementTime_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTime &msg)
      : msg_(msg) {}
  Init_MeasurementTime_time_of_validity_attosec time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTime::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementTime_time_of_validity_attosec(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

class Init_MeasurementTime_header {
public:
  Init_MeasurementTime_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementTime_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementTime::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementTime_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTime msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::MeasurementTime>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementTime_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__BUILDER_HPP_
