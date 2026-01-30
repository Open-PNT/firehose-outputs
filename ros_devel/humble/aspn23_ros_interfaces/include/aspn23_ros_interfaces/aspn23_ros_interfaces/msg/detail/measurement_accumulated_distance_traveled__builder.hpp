// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementAccumulatedDistanceTraveled.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_accumulated_distance_traveled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementAccumulatedDistanceTraveled_integrity {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled
  integrity(::aspn23_ros_interfaces::msg::
                MeasurementAccumulatedDistanceTraveled::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_num_integrity {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_error_model_params {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_num_integrity error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_num_error_model_params {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_error_model_params
  num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_error_model {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_num_error_model_params
  error_model(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_num_error_model_params(
        msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_variance {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_variance(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_error_model
  variance(::aspn23_ros_interfaces::msg::
               MeasurementAccumulatedDistanceTraveled::_variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_obs {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_obs(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_delta_t {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_delta_t(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_obs
  delta_t(::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
              _delta_t_type arg) {
    msg_.delta_t = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_time_of_validity {
public:
  explicit Init_MeasurementAccumulatedDistanceTraveled_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled &msg)
      : msg_(msg) {}
  Init_MeasurementAccumulatedDistanceTraveled_delta_t time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_delta_t(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

class Init_MeasurementAccumulatedDistanceTraveled_header {
public:
  Init_MeasurementAccumulatedDistanceTraveled_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementAccumulatedDistanceTraveled_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled::
             _header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementAccumulatedDistanceTraveled_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementAccumulatedDistanceTraveled>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementAccumulatedDistanceTraveled_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED__BUILDER_HPP_
