// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementRangeToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_range_to_point.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_TO_POINT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_range_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementRangeToPoint_integrity {
public:
  explicit Init_MeasurementRangeToPoint_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_num_integrity {
public:
  explicit Init_MeasurementRangeToPoint_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementRangeToPoint_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_error_model_params {
public:
  explicit Init_MeasurementRangeToPoint_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementRangeToPoint_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_num_error_model_params {
public:
  explicit Init_MeasurementRangeToPoint_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementRangeToPoint_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_error_model {
public:
  explicit Init_MeasurementRangeToPoint_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementRangeToPoint_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_variance {
public:
  explicit Init_MeasurementRangeToPoint_variance(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_error_model
  variance(::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_variance_type
               arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementRangeToPoint_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_obs {
public:
  explicit Init_MeasurementRangeToPoint_obs(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementRangeToPoint_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_remote_point {
public:
  explicit Init_MeasurementRangeToPoint_remote_point(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_obs remote_point(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_remote_point_type
          arg) {
    msg_.remote_point = std::move(arg);
    return Init_MeasurementRangeToPoint_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_time_of_validity {
public:
  explicit Init_MeasurementRangeToPoint_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeToPoint_remote_point
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementRangeToPoint_remote_point(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

class Init_MeasurementRangeToPoint_header {
public:
  Init_MeasurementRangeToPoint_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementRangeToPoint_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementRangeToPoint_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeToPoint msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementRangeToPoint>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementRangeToPoint_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_TO_POINT__BUILDER_HPP_
