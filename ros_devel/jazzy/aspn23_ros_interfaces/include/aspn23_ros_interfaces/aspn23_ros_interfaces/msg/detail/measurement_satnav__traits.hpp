// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'receiver_clock_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__traits.hpp"
// Member 'obs'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__traits.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MeasurementSatnav &msg,
                               std::ostream &out) {
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_of_validity
  {
    out << "time_of_validity: ";
    to_flow_style_yaml(msg.time_of_validity, out);
    out << ", ";
  }

  // member: receiver_clock_time
  {
    out << "receiver_clock_time: ";
    to_flow_style_yaml(msg.receiver_clock_time, out);
    out << ", ";
  }

  // member: num_signal_types
  {
    out << "num_signal_types: ";
    rosidl_generator_traits::value_to_yaml(msg.num_signal_types, out);
    out << ", ";
  }

  // member: num_signals_tracked
  {
    out << "num_signals_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_signals_tracked, out);
    out << ", ";
  }

  // member: obs
  {
    if (msg.obs.size() == 0) {
      out << "obs: []";
    } else {
      out << "obs: [";
      size_t pending_items = msg.obs.size();
      for (auto item : msg.obs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

inline void to_block_style_yaml(const MeasurementSatnav &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: time_of_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_validity:\n";
    to_block_style_yaml(msg.time_of_validity, out, indentation + 2);
  }

  // member: receiver_clock_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_clock_time:\n";
    to_block_style_yaml(msg.receiver_clock_time, out, indentation + 2);
  }

  // member: num_signal_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_signal_types: ";
    rosidl_generator_traits::value_to_yaml(msg.num_signal_types, out);
    out << "\n";
  }

  // member: num_signals_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_signals_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_signals_tracked, out);
    out << "\n";
  }

  // member: obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obs.size() == 0) {
      out << "obs: []\n";
    } else {
      out << "obs:\n";
      for (auto item : msg.obs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const MeasurementSatnav &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::MeasurementSatnav &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MeasurementSatnav &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::MeasurementSatnav>() {
  return "aspn23_ros_interfaces::msg::MeasurementSatnav";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::MeasurementSatnav>() {
  return "aspn23_ros_interfaces/msg/MeasurementSatnav";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MeasurementSatnav>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MeasurementSatnav>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MeasurementSatnav>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__TRAITS_HPP_
