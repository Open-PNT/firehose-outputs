// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_remote_point.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeRemotePoint &msg, std::ostream &out) {
  out << "{";
  // member: included_terms
  {
    out << "included_terms: ";
    rosidl_generator_traits::value_to_yaml(msg.included_terms, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position_reference_frame
  {
    out << "position_reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reference_frame, out);
    out << ", ";
  }

  // member: position1
  {
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << ", ";
  }

  // member: position2
  {
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << ", ";
  }

  // member: position3
  {
    out << "position3: ";
    rosidl_generator_traits::value_to_yaml(msg.position3, out);
    out << ", ";
  }

  // member: num_position_components
  {
    out << "num_position_components: ";
    rosidl_generator_traits::value_to_yaml(msg.num_position_components, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
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

inline void to_block_style_yaml(const TypeRemotePoint &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: included_terms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "included_terms: ";
    rosidl_generator_traits::value_to_yaml(msg.included_terms, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: position_reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reference_frame, out);
    out << "\n";
  }

  // member: position1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << "\n";
  }

  // member: position2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << "\n";
  }

  // member: position3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position3: ";
    rosidl_generator_traits::value_to_yaml(msg.position3, out);
    out << "\n";
  }

  // member: num_position_components
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_position_components: ";
    rosidl_generator_traits::value_to_yaml(msg.num_position_components, out);
    out << "\n";
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
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

inline std::string to_yaml(const TypeRemotePoint &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::TypeRemotePoint &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeRemotePoint &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeRemotePoint>() {
  return "aspn23_ros_interfaces::msg::TypeRemotePoint";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeRemotePoint>() {
  return "aspn23_ros_interfaces/msg/TypeRemotePoint";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeRemotePoint>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeRemotePoint>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeRemotePoint>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__TRAITS_HPP_
