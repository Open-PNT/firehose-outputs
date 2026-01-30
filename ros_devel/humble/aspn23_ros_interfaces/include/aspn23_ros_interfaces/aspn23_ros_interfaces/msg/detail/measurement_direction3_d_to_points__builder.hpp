// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirection3DToPoints.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION3_D_TO_POINTS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION3_D_TO_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementDirection3DToPoints_obs {
public:
  explicit Init_MeasurementDirection3DToPoints_obs(
      ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints
  obs(::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints::_obs_type
          arg) {
    msg_.obs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints msg_;
};

class Init_MeasurementDirection3DToPoints_num_obs {
public:
  explicit Init_MeasurementDirection3DToPoints_num_obs(
      ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints &msg)
      : msg_(msg) {}
  Init_MeasurementDirection3DToPoints_obs
  num_obs(::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints::
              _num_obs_type arg) {
    msg_.num_obs = std::move(arg);
    return Init_MeasurementDirection3DToPoints_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints msg_;
};

class Init_MeasurementDirection3DToPoints_time_of_validity {
public:
  explicit Init_MeasurementDirection3DToPoints_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints &msg)
      : msg_(msg) {}
  Init_MeasurementDirection3DToPoints_num_obs time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints::
          _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementDirection3DToPoints_num_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints msg_;
};

class Init_MeasurementDirection3DToPoints_header {
public:
  Init_MeasurementDirection3DToPoints_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementDirection3DToPoints_time_of_validity header(
      ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints::_header_type
          arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementDirection3DToPoints_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MeasurementDirection3DToPoints>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementDirection3DToPoints_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION3_D_TO_POINTS__BUILDER_HPP_
