// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_imu.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataImu_error_model_params {
public:
  explicit Init_MetadataImu_error_model_params(
      ::aspn23_ros_interfaces::msg::MetadataImu &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataImu error_model_params(
      ::aspn23_ros_interfaces::msg::MetadataImu::_error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

class Init_MetadataImu_num_error_model_params {
public:
  explicit Init_MetadataImu_num_error_model_params(
      ::aspn23_ros_interfaces::msg::MetadataImu &msg)
      : msg_(msg) {}
  Init_MetadataImu_error_model_params num_error_model_params(
      ::aspn23_ros_interfaces::msg::MetadataImu::_num_error_model_params_type
          arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_MetadataImu_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

class Init_MetadataImu_error_model {
public:
  explicit Init_MetadataImu_error_model(
      ::aspn23_ros_interfaces::msg::MetadataImu &msg)
      : msg_(msg) {}
  Init_MetadataImu_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::MetadataImu::_error_model_type arg) {
    msg_.error_model = std::move(arg);
    return Init_MetadataImu_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

class Init_MetadataImu_mounting {
public:
  explicit Init_MetadataImu_mounting(
      ::aspn23_ros_interfaces::msg::MetadataImu &msg)
      : msg_(msg) {}
  Init_MetadataImu_error_model
  mounting(::aspn23_ros_interfaces::msg::MetadataImu::_mounting_type arg) {
    msg_.mounting = std::move(arg);
    return Init_MetadataImu_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

class Init_MetadataImu_time_of_validity {
public:
  explicit Init_MetadataImu_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataImu &msg)
      : msg_(msg) {}
  Init_MetadataImu_mounting time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataImu::_time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataImu_mounting(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

class Init_MetadataImu_info {
public:
  Init_MetadataImu_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataImu_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataImu::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataImu_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataImu msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::MetadataImu>() {
  return aspn23_ros_interfaces::msg::builder::Init_MetadataImu_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__BUILDER_HPP_
