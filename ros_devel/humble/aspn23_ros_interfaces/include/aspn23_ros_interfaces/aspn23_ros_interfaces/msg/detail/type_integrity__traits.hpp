// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeIntegrity &msg, std::ostream &out) {
  out << "{";
  // member: integrity_method
  {
    out << "integrity_method: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_method, out);
    out << ", ";
  }

  // member: integrity_value
  {
    out << "integrity_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_value, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeIntegrity &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: integrity_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity_method: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_method, out);
    out << "\n";
  }

  // member: integrity_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_value, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeIntegrity &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::TypeIntegrity &msg, std::ostream &out,
        size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeIntegrity &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeIntegrity>() {
  return "aspn23_ros_interfaces::msg::TypeIntegrity";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeIntegrity>() {
  return "aspn23_ros_interfaces/msg/TypeIntegrity";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeIntegrity>
    : std::integral_constant<bool, true> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeIntegrity>
    : std::integral_constant<bool, true> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeIntegrity> : std::true_type {
};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__TRAITS_HPP_
