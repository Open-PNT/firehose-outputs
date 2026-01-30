// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__traits.hpp"
// Member 'signal_descriptor'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__traits.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeSatnavObs &msg, std::ostream &out) {
  out << "{";
  // member: satellite_system
  {
    out << "satellite_system: ";
    to_flow_style_yaml(msg.satellite_system, out);
    out << ", ";
  }

  // member: signal_descriptor
  {
    out << "signal_descriptor: ";
    to_flow_style_yaml(msg.signal_descriptor, out);
    out << ", ";
  }

  // member: prn
  {
    out << "prn: ";
    rosidl_generator_traits::value_to_yaml(msg.prn, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: pseudorange
  {
    out << "pseudorange: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange, out);
    out << ", ";
  }

  // member: pseudorange_variance
  {
    out << "pseudorange_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_variance, out);
    out << ", ";
  }

  // member: pseudorange_rate_type
  {
    out << "pseudorange_rate_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate_type, out);
    out << ", ";
  }

  // member: pseudorange_rate
  {
    out << "pseudorange_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate, out);
    out << ", ";
  }

  // member: pseudorange_rate_variance
  {
    out << "pseudorange_rate_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate_variance, out);
    out << ", ";
  }

  // member: carrier_phase
  {
    out << "carrier_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_phase, out);
    out << ", ";
  }

  // member: carrier_phase_variance
  {
    out << "carrier_phase_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_phase_variance, out);
    out << ", ";
  }

  // member: c_n0
  {
    out << "c_n0: ";
    rosidl_generator_traits::value_to_yaml(msg.c_n0, out);
    out << ", ";
  }

  // member: lock_count
  {
    out << "lock_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_count, out);
    out << ", ";
  }

  // member: iono_correction_source
  {
    out << "iono_correction_source: ";
    rosidl_generator_traits::value_to_yaml(msg.iono_correction_source, out);
    out << ", ";
  }

  // member: iono_correction_applied
  {
    out << "iono_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.iono_correction_applied, out);
    out << ", ";
  }

  // member: tropo_correction_applied
  {
    out << "tropo_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.tropo_correction_applied, out);
    out << ", ";
  }

  // member: signal_bias_correction_applied
  {
    out << "signal_bias_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_bias_correction_applied,
                                           out);
    out << ", ";
  }

  // member: num_integrity
  {
    out << "num_integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.num_integrity, out);
    out << ", ";
  }

  // member: integrity
  {
    if (msg.integrity.size() == 0) {
      out << "integrity: []";
    } else {
      out << "integrity: [";
      size_t pending_items = msg.integrity.size();
      for (auto item : msg.integrity) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeSatnavObs &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: satellite_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellite_system:\n";
    to_block_style_yaml(msg.satellite_system, out, indentation + 2);
  }

  // member: signal_descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_descriptor:\n";
    to_block_style_yaml(msg.signal_descriptor, out, indentation + 2);
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

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: pseudorange
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pseudorange: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange, out);
    out << "\n";
  }

  // member: pseudorange_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pseudorange_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_variance, out);
    out << "\n";
  }

  // member: pseudorange_rate_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pseudorange_rate_type: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate_type, out);
    out << "\n";
  }

  // member: pseudorange_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pseudorange_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate, out);
    out << "\n";
  }

  // member: pseudorange_rate_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pseudorange_rate_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.pseudorange_rate_variance, out);
    out << "\n";
  }

  // member: carrier_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_phase, out);
    out << "\n";
  }

  // member: carrier_phase_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_phase_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_phase_variance, out);
    out << "\n";
  }

  // member: c_n0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_n0: ";
    rosidl_generator_traits::value_to_yaml(msg.c_n0, out);
    out << "\n";
  }

  // member: lock_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_count, out);
    out << "\n";
  }

  // member: iono_correction_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iono_correction_source: ";
    rosidl_generator_traits::value_to_yaml(msg.iono_correction_source, out);
    out << "\n";
  }

  // member: iono_correction_applied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iono_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.iono_correction_applied, out);
    out << "\n";
  }

  // member: tropo_correction_applied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tropo_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.tropo_correction_applied, out);
    out << "\n";
  }

  // member: signal_bias_correction_applied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_bias_correction_applied: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_bias_correction_applied,
                                           out);
    out << "\n";
  }

  // member: num_integrity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_integrity: ";
    rosidl_generator_traits::value_to_yaml(msg.num_integrity, out);
    out << "\n";
  }

  // member: integrity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.integrity.size() == 0) {
      out << "integrity: []\n";
    } else {
      out << "integrity:\n";
      for (auto item : msg.integrity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeSatnavObs &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavObs &msg, std::ostream &out,
        size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeSatnavObs &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeSatnavObs>() {
  return "aspn23_ros_interfaces::msg::TypeSatnavObs";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeSatnavObs>() {
  return "aspn23_ros_interfaces/msg/TypeSatnavObs";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeSatnavObs>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeSatnavObs>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeSatnavObs> : std::true_type {
};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__TRAITS_HPP_
