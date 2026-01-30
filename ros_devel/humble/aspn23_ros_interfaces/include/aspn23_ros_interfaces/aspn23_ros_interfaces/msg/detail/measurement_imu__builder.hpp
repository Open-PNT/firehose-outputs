// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementImu.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementImu_integrity {
public:
  explicit Init_MeasurementImu_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementImu
  integrity(::aspn23_ros_interfaces::msg::MeasurementImu::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_num_integrity {
public:
  explicit Init_MeasurementImu_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  Init_MeasurementImu_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImu::_num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementImu_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_meas_gyro {
public:
  explicit Init_MeasurementImu_meas_gyro(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  Init_MeasurementImu_num_integrity
  meas_gyro(::aspn23_ros_interfaces::msg::MeasurementImu::_meas_gyro_type arg) {
    msg_.meas_gyro = std::move(arg);
    return Init_MeasurementImu_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_meas_accel {
public:
  explicit Init_MeasurementImu_meas_accel(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  Init_MeasurementImu_meas_gyro meas_accel(
      ::aspn23_ros_interfaces::msg::MeasurementImu::_meas_accel_type arg) {
    msg_.meas_accel = std::move(arg);
    return Init_MeasurementImu_meas_gyro(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_imu_type {
public:
  explicit Init_MeasurementImu_imu_type(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  Init_MeasurementImu_meas_accel
  imu_type(::aspn23_ros_interfaces::msg::MeasurementImu::_imu_type_type arg) {
    msg_.imu_type = std::move(arg);
    return Init_MeasurementImu_meas_accel(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_time_of_validity {
public:
  explicit Init_MeasurementImu_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementImu &msg)
      : msg_(msg) {}
  Init_MeasurementImu_imu_type time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementImu::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementImu_imu_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

class Init_MeasurementImu_header {
public:
  Init_MeasurementImu_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementImu_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementImu::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementImu_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImu msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::MeasurementImu>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementImu_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__BUILDER_HPP_
