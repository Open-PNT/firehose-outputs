// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataSatnavObs &msg,
                               std::ostream &out) {
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: time_of_validity
  {
    out << "time_of_validity: ";
    to_flow_style_yaml(msg.time_of_validity, out);
    out << ", ";
  }

  // member: deltarange_interval_start
  {
    out << "deltarange_interval_start: ";
    rosidl_generator_traits::value_to_yaml(msg.deltarange_interval_start, out);
    out << ", ";
  }

  // member: deltarange_interval_stop
  {
    out << "deltarange_interval_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.deltarange_interval_stop, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataSatnavObs &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: time_of_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_validity:\n";
    to_block_style_yaml(msg.time_of_validity, out, indentation + 2);
  }

  // member: deltarange_interval_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltarange_interval_start: ";
    rosidl_generator_traits::value_to_yaml(msg.deltarange_interval_start, out);
    out << "\n";
  }

  // member: deltarange_interval_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltarange_interval_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.deltarange_interval_stop, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataSatnavObs &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataSatnavObs &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataSatnavObs &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::MetadataSatnavObs>() {
  return "aspn23_ros_interfaces::msg::MetadataSatnavObs";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::MetadataSatnavObs>() {
  return "aspn23_ros_interfaces/msg/MetadataSatnavObs";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataSatnavObs>
    : std::integral_constant<
          bool, has_fixed_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_fixed_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataSatnavObs>
    : std::integral_constant<
          bool, has_bounded_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_bounded_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataSatnavObs>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__TRAITS_HPP_
