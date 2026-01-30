// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav_subframe.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__traits.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MeasurementSatnavSubframe &msg,
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

  // member: gnss_message_id
  {
    out << "gnss_message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_message_id, out);
    out << ", ";
  }

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

  // member: freq_slot_id
  {
    out << "freq_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_slot_id, out);
    out << ", ";
  }

  // member: num_bytes
  {
    out << "num_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bytes, out);
    out << ", ";
  }

  // member: data_vector
  {
    if (msg.data_vector.size() == 0) {
      out << "data_vector: []";
    } else {
      out << "data_vector: [";
      size_t pending_items = msg.data_vector.size();
      for (auto item : msg.data_vector) {
        rosidl_generator_traits::value_to_yaml(item, out);
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

inline void to_block_style_yaml(const MeasurementSatnavSubframe &msg,
                                std::ostream &out, size_t indentation = 0) {
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

  // member: gnss_message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_message_id, out);
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

  // member: satellite_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellite_system:\n";
    to_block_style_yaml(msg.satellite_system, out, indentation + 2);
  }

  // member: freq_slot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_slot_id, out);
    out << "\n";
  }

  // member: num_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bytes, out);
    out << "\n";
  }

  // member: data_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_vector.size() == 0) {
      out << "data_vector: []\n";
    } else {
      out << "data_vector:\n";
      for (auto item : msg.data_vector) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

inline std::string to_yaml(const MeasurementSatnavSubframe &msg,
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
inline void
to_yaml(const aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>() {
  return "aspn23_ros_interfaces::msg::MeasurementSatnavSubframe";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>() {
  return "aspn23_ros_interfaces/msg/MeasurementSatnavSubframe";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__TRAITS_HPP_
