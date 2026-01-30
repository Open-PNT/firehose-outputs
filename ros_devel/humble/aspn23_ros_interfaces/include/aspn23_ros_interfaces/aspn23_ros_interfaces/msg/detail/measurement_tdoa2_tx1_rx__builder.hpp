// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementTdoa2Tx1Rx.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa2_tx1_rx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementTdoa2Tx1Rx_integrity {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx
  integrity(::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_integrity_type
                arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_num_integrity {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_error_model_params {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_num_error_model_params {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_error_model {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_variance {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_variance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_error_model variance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_variance_type arg) {
    msg_.variance = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_obs {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_obs(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_variance
  obs(::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_tx2_position_and_covariance {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_tx2_position_and_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_obs tx2_position_and_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::
          _tx2_position_and_covariance_type arg) {
    msg_.tx2_position_and_covariance = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_tx1_position_and_covariance {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_tx1_position_and_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_tx2_position_and_covariance
  tx1_position_and_covariance(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::
          _tx1_position_and_covariance_type arg) {
    msg_.tx1_position_and_covariance = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_tx2_position_and_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_time_of_validity {
public:
  explicit Init_MeasurementTdoa2Tx1Rx_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg)
      : msg_(msg) {}
  Init_MeasurementTdoa2Tx1Rx_tx1_position_and_covariance
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_tx1_position_and_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

class Init_MeasurementTdoa2Tx1Rx_header {
public:
  Init_MeasurementTdoa2Tx1Rx_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementTdoa2Tx1Rx_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementTdoa2Tx1Rx_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementTdoa2Tx1Rx_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__BUILDER_HPP_
