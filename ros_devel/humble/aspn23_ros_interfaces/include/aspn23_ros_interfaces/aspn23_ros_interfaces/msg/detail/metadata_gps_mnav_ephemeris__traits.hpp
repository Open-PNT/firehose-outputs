// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__struct.hpp"
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

inline void to_flow_style_yaml(const MetadataGpsMnavEphemeris &msg,
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

  // member: week_number
  {
    out << "week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.week_number, out);
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

  // member: a_dot
  {
    out << "a_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.a_dot, out);
    out << ", ";
  }

  // member: delta_af_0
  {
    out << "delta_af_0: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_af_0, out);
    out << ", ";
  }

  // member: delta_af_1
  {
    out << "delta_af_1: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_af_1, out);
    out << ", ";
  }

  // member: delta_gamma
  {
    out << "delta_gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_gamma, out);
    out << ", ";
  }

  // member: delta_i
  {
    out << "delta_i: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_i, out);
    out << ", ";
  }

  // member: delta_omega
  {
    out << "delta_omega: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_omega, out);
    out << ", ";
  }

  // member: delta_a
  {
    out << "delta_a: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_a, out);
    out << ", ";
  }

  // member: isc_l1_m_e
  {
    out << "isc_l1_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l1_m_e, out);
    out << ", ";
  }

  // member: isc_l2_m_e
  {
    out << "isc_l2_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l2_m_e, out);
    out << ", ";
  }

  // member: isc_l1_m_s
  {
    out << "isc_l1_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l1_m_s, out);
    out << ", ";
  }

  // member: isc_l2_m_s
  {
    out << "isc_l2_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l2_m_s, out);
    out << ", ";
  }

  // member: isa_l2_py
  {
    out << "isa_l2_py: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_py, out);
    out << ", ";
  }

  // member: isa_l1_m_e
  {
    out << "isa_l1_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l1_m_e, out);
    out << ", ";
  }

  // member: isa_l2_m_e
  {
    out << "isa_l2_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_m_e, out);
    out << ", ";
  }

  // member: isa_l1_m_s
  {
    out << "isa_l1_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l1_m_s, out);
    out << ", ";
  }

  // member: isa_l2_m_s
  {
    out << "isa_l2_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_m_s, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataGpsMnavEphemeris &msg,
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

  // member: week_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.week_number, out);
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

  // member: a_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.a_dot, out);
    out << "\n";
  }

  // member: delta_af_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_af_0: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_af_0, out);
    out << "\n";
  }

  // member: delta_af_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_af_1: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_af_1, out);
    out << "\n";
  }

  // member: delta_gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_gamma, out);
    out << "\n";
  }

  // member: delta_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_i: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_i, out);
    out << "\n";
  }

  // member: delta_omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_omega: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_omega, out);
    out << "\n";
  }

  // member: delta_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_a: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_a, out);
    out << "\n";
  }

  // member: isc_l1_m_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isc_l1_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l1_m_e, out);
    out << "\n";
  }

  // member: isc_l2_m_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isc_l2_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l2_m_e, out);
    out << "\n";
  }

  // member: isc_l1_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isc_l1_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l1_m_s, out);
    out << "\n";
  }

  // member: isc_l2_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isc_l2_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isc_l2_m_s, out);
    out << "\n";
  }

  // member: isa_l2_py
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isa_l2_py: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_py, out);
    out << "\n";
  }

  // member: isa_l1_m_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isa_l1_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l1_m_e, out);
    out << "\n";
  }

  // member: isa_l2_m_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isa_l2_m_e: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_m_e, out);
    out << "\n";
  }

  // member: isa_l1_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isa_l1_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l1_m_s, out);
    out << "\n";
  }

  // member: isa_l2_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isa_l2_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.isa_l2_m_s, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataGpsMnavEphemeris &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>() {
  return "aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>() {
  return "aspn23_ros_interfaces/msg/MetadataGpsMnavEphemeris";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>
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
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>
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
struct is_message<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__TRAITS_HPP_
