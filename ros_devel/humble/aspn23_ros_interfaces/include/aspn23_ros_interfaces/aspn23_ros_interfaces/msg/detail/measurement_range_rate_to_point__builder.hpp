// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementRangeRateToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_range_rate_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementRangeRateToPoint_integrity {
public:
  explicit Init_MeasurementRangeRateToPoint_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_num_integrity {
public:
  explicit Init_MeasurementRangeRateToPoint_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementRangeRateToPoint_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_error_model_params {
public:
  explicit Init_MeasurementRangeRateToPoint_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementRangeRateToPoint_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_num_error_model_params {
public:
  explicit Init_MeasurementRangeRateToPoint_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
          _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementRangeRateToPoint_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_error_model {
public:
  explicit Init_MeasurementRangeRateToPoint_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_num_error_model_params
  error_model(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
                  _error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementRangeRateToPoint_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_variance {
public:
  explicit Init_MeasurementRangeRateToPoint_variance(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_error_model variance(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::_variance_type
          arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementRangeRateToPoint_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_obs {
public:
  explicit Init_MeasurementRangeRateToPoint_obs(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::_obs_type
          arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementRangeRateToPoint_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_remote_point {
public:
  explicit Init_MeasurementRangeRateToPoint_remote_point(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_obs
  remote_point(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
                   _remote_point_type arg) {
    msg_.remote_point = std::move(arg);
    return Init_MeasurementRangeRateToPoint_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_time_of_validity {
public:
  explicit Init_MeasurementRangeRateToPoint_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint &msg)
      : msg_(msg) {}
  Init_MeasurementRangeRateToPoint_remote_point
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementRangeRateToPoint_remote_point(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

class Init_MeasurementRangeRateToPoint_header {
public:
  Init_MeasurementRangeRateToPoint_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementRangeRateToPoint_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementRangeRateToPoint_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementRangeRateToPoint>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementRangeRateToPoint_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__BUILDER_HPP_
