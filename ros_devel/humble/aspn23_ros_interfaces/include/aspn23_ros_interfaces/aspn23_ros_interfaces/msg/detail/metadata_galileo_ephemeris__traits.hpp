// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'clock'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__traits.hpp"
// Member 'orbit'
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataGalileoEphemeris &msg,
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

  // member: nav_msg_type
  {
    out << "nav_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_msg_type, out);
    out << ", ";
  }

  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: clock
  {
    out << "clock: ";
    to_flow_style_yaml(msg.clock, out);
    out << ", ";
  }

  // member: orbit
  {
    out << "orbit: ";
    to_flow_style_yaml(msg.orbit, out);
    out << ", ";
  }

  // member: bgd
  {
    out << "bgd: ";
    rosidl_generator_traits::value_to_yaml(msg.bgd, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataGalileoEphemeris &msg,
                                std::ostream &out, size_t indentation = 0) {
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

  // member: nav_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_msg_type, out);
    out << "\n";
  }

  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: clock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock:\n";
    to_block_style_yaml(msg.clock, out, indentation + 2);
  }

  // member: orbit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orbit:\n";
    to_block_style_yaml(msg.orbit, out, indentation + 2);
  }

  // member: bgd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bgd: ";
    rosidl_generator_traits::value_to_yaml(msg.bgd, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataGalileoEphemeris &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataGalileoEphemeris &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>() {
  return "aspn23_ros_interfaces::msg::MetadataGalileoEphemeris";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>() {
  return "aspn23_ros_interfaces/msg/MetadataGalileoEphemeris";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>
    : std::integral_constant<
          bool,
          has_fixed_size<aspn23_ros_interfaces::msg::TypeKeplerOrbit>::value &&
              has_fixed_size<
                  aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
              has_fixed_size<
                  aspn23_ros_interfaces::msg::TypeSatnavClock>::value &&
              has_fixed_size<
                  aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>
    : std::integral_constant<
          bool,
          has_bounded_size<
              aspn23_ros_interfaces::msg::TypeKeplerOrbit>::value &&
              has_bounded_size<
                  aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
              has_bounded_size<
                  aspn23_ros_interfaces::msg::TypeSatnavClock>::value &&
              has_bounded_size<
                  aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__TRAITS_HPP_
