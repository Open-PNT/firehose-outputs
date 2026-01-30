// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_imu.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'mounting'
#include "aspn23_ros_interfaces/msg/detail/type_mounting__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataImu &msg, std::ostream &out) {
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

  // member: mounting
  {
    out << "mounting: ";
    to_flow_style_yaml(msg.mounting, out);
    out << ", ";
  }

  // member: error_model
  {
    out << "error_model: ";
    rosidl_generator_traits::value_to_yaml(msg.error_model, out);
    out << ", ";
  }

  // member: num_error_model_params
  {
    out << "num_error_model_params: ";
    rosidl_generator_traits::value_to_yaml(msg.num_error_model_params, out);
    out << ", ";
  }

  // member: error_model_params
  {
    if (msg.error_model_params.size() == 0) {
      out << "error_model_params: []";
    } else {
      out << "error_model_params: [";
      size_t pending_items = msg.error_model_params.size();
      for (auto item : msg.error_model_params) {
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

inline void to_block_style_yaml(const MetadataImu &msg, std::ostream &out,
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

  // member: mounting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting:\n";
    to_block_style_yaml(msg.mounting, out, indentation + 2);
  }

  // member: error_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_model: ";
    rosidl_generator_traits::value_to_yaml(msg.error_model, out);
    out << "\n";
  }

  // member: num_error_model_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_error_model_params: ";
    rosidl_generator_traits::value_to_yaml(msg.num_error_model_params, out);
    out << "\n";
  }

  // member: error_model_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_model_params.size() == 0) {
      out << "error_model_params: []\n";
    } else {
      out << "error_model_params:\n";
      for (auto item : msg.error_model_params) {
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

inline std::string to_yaml(const MetadataImu &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::MetadataImu &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aspn23_ros_interfaces::msg::MetadataImu &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::MetadataImu>() {
  return "aspn23_ros_interfaces::msg::MetadataImu";
}

template <> inline const char *name<aspn23_ros_interfaces::msg::MetadataImu>() {
  return "aspn23_ros_interfaces/msg/MetadataImu";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataImu>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataImu>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataImu> : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__TRAITS_HPP_
