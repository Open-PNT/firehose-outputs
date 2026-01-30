// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeMetadataheader &msg,
                               std::ostream &out) {
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_description
  {
    out << "sensor_description: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_description, out);
    out << ", ";
  }

  // member: delta_t_nom
  {
    out << "delta_t_nom: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_nom, out);
    out << ", ";
  }

  // member: timestamp_clock_id
  {
    out << "timestamp_clock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_clock_id, out);
    out << ", ";
  }

  // member: digits_of_precision
  {
    out << "digits_of_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.digits_of_precision, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeMetadataheader &msg,
                                std::ostream &out, size_t indentation = 0) {
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_description: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_description, out);
    out << "\n";
  }

  // member: delta_t_nom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_t_nom: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_nom, out);
    out << "\n";
  }

  // member: timestamp_clock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_clock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_clock_id, out);
    out << "\n";
  }

  // member: digits_of_precision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digits_of_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.digits_of_precision, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeMetadataheader &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::TypeMetadataheader &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeMetadataheader &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeMetadataheader>() {
  return "aspn23_ros_interfaces::msg::TypeMetadataheader";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeMetadataheader>() {
  return "aspn23_ros_interfaces/msg/TypeMetadataheader";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeMetadataheader>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeMetadataheader>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeMetadataheader>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__TRAITS_HPP_
