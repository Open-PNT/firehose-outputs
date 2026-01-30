// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataGlonassEphemeris &msg,
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

  // member: slot_number
  {
    out << "slot_number: ";
    rosidl_generator_traits::value_to_yaml(msg.slot_number, out);
    out << ", ";
  }

  // member: freq_o
  {
    out << "freq_o: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_o, out);
    out << ", ";
  }

  // member: n_t
  {
    out << "n_t: ";
    rosidl_generator_traits::value_to_yaml(msg.n_t, out);
    out << ", ";
  }

  // member: t_k
  {
    out << "t_k: ";
    rosidl_generator_traits::value_to_yaml(msg.t_k, out);
    out << ", ";
  }

  // member: t_b
  {
    out << "t_b: ";
    rosidl_generator_traits::value_to_yaml(msg.t_b, out);
    out << ", ";
  }

  // member: gamma_n
  {
    out << "gamma_n: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_n, out);
    out << ", ";
  }

  // member: tau_n
  {
    out << "tau_n: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_n, out);
    out << ", ";
  }

  // member: sv_pos_x
  {
    out << "sv_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_x, out);
    out << ", ";
  }

  // member: sv_vel_x
  {
    out << "sv_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_x, out);
    out << ", ";
  }

  // member: sv_accel_x
  {
    out << "sv_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_x, out);
    out << ", ";
  }

  // member: sv_pos_y
  {
    out << "sv_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_y, out);
    out << ", ";
  }

  // member: sv_vel_y
  {
    out << "sv_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_y, out);
    out << ", ";
  }

  // member: sv_accel_y
  {
    out << "sv_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_y, out);
    out << ", ";
  }

  // member: sv_pos_z
  {
    out << "sv_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_z, out);
    out << ", ";
  }

  // member: sv_vel_z
  {
    out << "sv_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_z, out);
    out << ", ";
  }

  // member: sv_accel_z
  {
    out << "sv_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_z, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataGlonassEphemeris &msg,
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

  // member: slot_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slot_number: ";
    rosidl_generator_traits::value_to_yaml(msg.slot_number, out);
    out << "\n";
  }

  // member: freq_o
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_o: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_o, out);
    out << "\n";
  }

  // member: n_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_t: ";
    rosidl_generator_traits::value_to_yaml(msg.n_t, out);
    out << "\n";
  }

  // member: t_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_k: ";
    rosidl_generator_traits::value_to_yaml(msg.t_k, out);
    out << "\n";
  }

  // member: t_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_b: ";
    rosidl_generator_traits::value_to_yaml(msg.t_b, out);
    out << "\n";
  }

  // member: gamma_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma_n: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_n, out);
    out << "\n";
  }

  // member: tau_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_n: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_n, out);
    out << "\n";
  }

  // member: sv_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_x, out);
    out << "\n";
  }

  // member: sv_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_x, out);
    out << "\n";
  }

  // member: sv_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_x, out);
    out << "\n";
  }

  // member: sv_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_y, out);
    out << "\n";
  }

  // member: sv_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_y, out);
    out << "\n";
  }

  // member: sv_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_y, out);
    out << "\n";
  }

  // member: sv_pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_pos_z, out);
    out << "\n";
  }

  // member: sv_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_vel_z, out);
    out << "\n";
  }

  // member: sv_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_accel_z, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataGlonassEphemeris &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>() {
  return "aspn23_ros_interfaces::msg::MetadataGlonassEphemeris";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>() {
  return "aspn23_ros_interfaces/msg/MetadataGlonassEphemeris";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>
    : std::integral_constant<
          bool, has_fixed_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_fixed_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>
    : std::integral_constant<
          bool, has_bounded_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_bounded_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__TRAITS_HPP_
