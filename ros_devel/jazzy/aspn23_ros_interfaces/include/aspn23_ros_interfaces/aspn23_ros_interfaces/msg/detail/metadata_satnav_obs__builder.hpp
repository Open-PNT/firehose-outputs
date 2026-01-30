// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_satnav_obs.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataSatnavObs_deltarange_interval_stop {
public:
  explicit Init_MetadataSatnavObs_deltarange_interval_stop(
      ::aspn23_ros_interfaces::msg::MetadataSatnavObs &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataSatnavObs
  deltarange_interval_stop(::aspn23_ros_interfaces::msg::MetadataSatnavObs::
                               _deltarange_interval_stop_type arg) {
    msg_.deltarange_interval_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataSatnavObs msg_;
};

class Init_MetadataSatnavObs_deltarange_interval_start {
public:
  explicit Init_MetadataSatnavObs_deltarange_interval_start(
      ::aspn23_ros_interfaces::msg::MetadataSatnavObs &msg)
      : msg_(msg) {}
  Init_MetadataSatnavObs_deltarange_interval_stop
  deltarange_interval_start(::aspn23_ros_interfaces::msg::MetadataSatnavObs::
                                _deltarange_interval_start_type arg) {
    msg_.deltarange_interval_start = std::move(arg);
    return Init_MetadataSatnavObs_deltarange_interval_stop(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataSatnavObs msg_;
};

class Init_MetadataSatnavObs_time_of_validity {
public:
  explicit Init_MetadataSatnavObs_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataSatnavObs &msg)
      : msg_(msg) {}
  Init_MetadataSatnavObs_deltarange_interval_start time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataSatnavObs::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataSatnavObs_deltarange_interval_start(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataSatnavObs msg_;
};

class Init_MetadataSatnavObs_info {
public:
  Init_MetadataSatnavObs_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataSatnavObs_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataSatnavObs::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataSatnavObs_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataSatnavObs msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataSatnavObs>() {
  return aspn23_ros_interfaces::msg::builder::Init_MetadataSatnavObs_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__BUILDER_HPP_
