// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_satellite_system.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavSatelliteSystem_satellite_system {
public:
  Init_TypeSatnavSatelliteSystem_satellite_system()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem
  satellite_system(::aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem::
                       _satellite_system_type arg) {
    msg_.satellite_system = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeSatnavSatelliteSystem_satellite_system();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__BUILDER_HPP_
