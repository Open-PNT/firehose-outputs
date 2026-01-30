// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav_with_sv_data.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementSatnavWithSvData_integrity {
public:
  explicit Init_MeasurementSatnavWithSvData_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_num_integrity {
public:
  explicit Init_MeasurementSatnavWithSvData_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementSatnavWithSvData_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_sv_data {
public:
  explicit Init_MeasurementSatnavWithSvData_sv_data(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_num_integrity sv_data(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::_sv_data_type
          arg) {
    msg_.sv_data = std::move(arg);
    return Init_MeasurementSatnavWithSvData_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_obs {
public:
  explicit Init_MeasurementSatnavWithSvData_obs(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_sv_data
  obs(::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::_obs_type
          arg) {
    msg_.obs = std::move(arg);
    return Init_MeasurementSatnavWithSvData_sv_data(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_num_signals_tracked {
public:
  explicit Init_MeasurementSatnavWithSvData_num_signals_tracked(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_obs num_signals_tracked(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::
          _num_signals_tracked_type arg) {
    msg_.num_signals_tracked = std::move(arg);
    return Init_MeasurementSatnavWithSvData_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_num_signal_types {
public:
  explicit Init_MeasurementSatnavWithSvData_num_signal_types(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_num_signals_tracked
  num_signal_types(::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::
                       _num_signal_types_type arg) {
    msg_.num_signal_types = std::move(arg);
    return Init_MeasurementSatnavWithSvData_num_signals_tracked(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_receiver_clock_time {
public:
  explicit Init_MeasurementSatnavWithSvData_receiver_clock_time(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_num_signal_types receiver_clock_time(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::
          _receiver_clock_time_type arg) {
    msg_.receiver_clock_time = std::move(arg);
    return Init_MeasurementSatnavWithSvData_num_signal_types(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_time_of_validity {
public:
  explicit Init_MeasurementSatnavWithSvData_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavWithSvData_receiver_clock_time
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementSatnavWithSvData_receiver_clock_time(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

class Init_MeasurementSatnavWithSvData_header {
public:
  Init_MeasurementSatnavWithSvData_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementSatnavWithSvData_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementSatnavWithSvData_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementSatnavWithSvData_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_WITH_SV_DATA__BUILDER_HPP_
