// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__traits.hpp"
// Member 'sv_data_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeSatnavSvData &msg, std::ostream &out) {
  out << "{";
  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: satellite_system
  {
    out << "satellite_system: ";
    to_flow_style_yaml(msg.satellite_system, out);
    out << ", ";
  }

  // member: ephemeris_type
  {
    out << "ephemeris_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ephemeris_type, out);
    out << ", ";
  }

  // member: sv_data_time
  {
    out << "sv_data_time: ";
    to_flow_style_yaml(msg.sv_data_time, out);
    out << ", ";
  }

  // member: coordinate_frame
  {
    out << "coordinate_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_frame, out);
    out << ", ";
  }

  // member: sv_pos
  {
    if (msg.sv_pos.size() == 0) {
      out << "sv_pos: []";
    } else {
      out << "sv_pos: [";
      size_t pending_items = msg.sv_pos.size();
      for (auto item : msg.sv_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sv_vel
  {
    if (msg.sv_vel.size() == 0) {
      out << "sv_vel: []";
    } else {
      out << "sv_vel: [";
      size_t pending_items = msg.sv_vel.size();
      for (auto item : msg.sv_vel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sv_clock_bias
  {
    out << "sv_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_clock_bias, out);
    out << ", ";
  }

  // member: sv_clock_drift
  {
    out << "sv_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_clock_drift, out);
    out << ", ";
  }

  // member: group_delay_enum
  {
    out << "group_delay_enum: ";
    rosidl_generator_traits::value_to_yaml(msg.group_delay_enum, out);
    out << ", ";
  }

  // member: group_delay_vector
  {
    if (msg.group_delay_vector.size() == 0) {
      out << "group_delay_vector: []";
    } else {
      out << "group_delay_vector: [";
      size_t pending_items = msg.group_delay_vector.size();
      for (auto item : msg.group_delay_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeSatnavSvData &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << "\n";
  }

  // member: satellite_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellite_system:\n";
    to_block_style_yaml(msg.satellite_system, out, indentation + 2);
  }

  // member: ephemeris_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ephemeris_type: ";
    rosidl_generator_traits::value_to_yaml(msg.ephemeris_type, out);
    out << "\n";
  }

  // member: sv_data_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_data_time:\n";
    to_block_style_yaml(msg.sv_data_time, out, indentation + 2);
  }

  // member: coordinate_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.coordinate_frame, out);
    out << "\n";
  }

  // member: sv_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sv_pos.size() == 0) {
      out << "sv_pos: []\n";
    } else {
      out << "sv_pos:\n";
      for (auto item : msg.sv_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sv_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sv_vel.size() == 0) {
      out << "sv_vel: []\n";
    } else {
      out << "sv_vel:\n";
      for (auto item : msg.sv_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sv_clock_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_clock_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_clock_bias, out);
    out << "\n";
  }

  // member: sv_clock_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_clock_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_clock_drift, out);
    out << "\n";
  }

  // member: group_delay_enum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_delay_enum: ";
    rosidl_generator_traits::value_to_yaml(msg.group_delay_enum, out);
    out << "\n";
  }

  // member: group_delay_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.group_delay_vector.size() == 0) {
      out << "group_delay_vector: []\n";
    } else {
      out << "group_delay_vector:\n";
      for (auto item : msg.group_delay_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeSatnavSvData &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavSvData &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavSvData &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeSatnavSvData>() {
  return "aspn23_ros_interfaces::msg::TypeSatnavSvData";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeSatnavSvData>() {
  return "aspn23_ros_interfaces/msg/TypeSatnavSvData";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeSatnavSvData>
    : std::integral_constant<
          bool,
          has_fixed_size<
              aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>::value &&
              has_fixed_size<
                  aspn23_ros_interfaces::msg::TypeSatnavTime>::value> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeSatnavSvData>
    : std::integral_constant<
          bool,
          has_bounded_size<
              aspn23_ros_interfaces::msg::TypeSatnavSatelliteSystem>::value &&
              has_bounded_size<
                  aspn23_ros_interfaces::msg::TypeSatnavTime>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeSatnavSvData>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__TRAITS_HPP_
