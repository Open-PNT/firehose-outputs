// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeSatnavSatelliteSystem &msg,
                               std::ostream &out) {
  out << "{";
  // member: satellite_system
  {
    out << "satellite_system: ";
    rosidl_generator_traits::value_to_yaml(msg.satellite_system, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeSatnavSatelliteSystem &msg,
                                std::ostream &out, size_t indentation = 0) {
  // member: satellite_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellite_system: ";
    rosidl_generator_traits::value_to_yaml(msg.satellite_system, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeSatnavSatelliteSystem &msg,
                           bool use_flow_style = false) {
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_generator_traits {

[[deprecated("use aspn23_ros_interfaces::msg::to_block_style_yaml() "
             "instead")]] inline void
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>() {
  return "aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>() {
  return "aspn23_ros_interfaces/msg/TypeSatnavSatelliteSystem";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>
    : std::integral_constant<bool, true> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>
    : std::integral_constant<bool, true> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__TRAITS_HPP_
