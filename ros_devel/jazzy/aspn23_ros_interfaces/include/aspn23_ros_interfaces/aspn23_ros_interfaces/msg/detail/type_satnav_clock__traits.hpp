// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_clock.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeSatnavClock &msg, std::ostream &out) {
  out << "{";
  // member: t_oc
  {
    out << "t_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.t_oc, out);
    out << ", ";
  }

  // member: af_0
  {
    out << "af_0: ";
    rosidl_generator_traits::value_to_yaml(msg.af_0, out);
    out << ", ";
  }

  // member: af_1
  {
    out << "af_1: ";
    rosidl_generator_traits::value_to_yaml(msg.af_1, out);
    out << ", ";
  }

  // member: af_2
  {
    out << "af_2: ";
    rosidl_generator_traits::value_to_yaml(msg.af_2, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeSatnavClock &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: t_oc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.t_oc, out);
    out << "\n";
  }

  // member: af_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "af_0: ";
    rosidl_generator_traits::value_to_yaml(msg.af_0, out);
    out << "\n";
  }

  // member: af_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "af_1: ";
    rosidl_generator_traits::value_to_yaml(msg.af_1, out);
    out << "\n";
  }

  // member: af_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "af_2: ";
    rosidl_generator_traits::value_to_yaml(msg.af_2, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeSatnavClock &msg,
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

[[deprecated("use aspn23_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavClock &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavClock &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeSatnavClock>() {
  return "aspn23_ros_interfaces::msg::TypeSatnavClock";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeSatnavClock>() {
  return "aspn23_ros_interfaces/msg/TypeSatnavClock";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeSatnavClock>
    : std::integral_constant<bool, true> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeSatnavClock>
    : std::integral_constant<bool, true> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeSatnavClock>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__TRAITS_HPP_
