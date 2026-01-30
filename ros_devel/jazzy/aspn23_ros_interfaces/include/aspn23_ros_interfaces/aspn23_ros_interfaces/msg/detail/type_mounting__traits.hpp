// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_mounting.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeMounting &msg, std::ostream &out) {
  out << "{";
  // member: lever_arm
  {
    if (msg.lever_arm.size() == 0) {
      out << "lever_arm: []";
    } else {
      out << "lever_arm: [";
      size_t pending_items = msg.lever_arm.size();
      for (auto item : msg.lever_arm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lever_arm_sigma
  {
    if (msg.lever_arm_sigma.size() == 0) {
      out << "lever_arm_sigma: []";
    } else {
      out << "lever_arm_sigma: [";
      size_t pending_items = msg.lever_arm_sigma.size();
      for (auto item : msg.lever_arm_sigma) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation_quaternion
  {
    if (msg.orientation_quaternion.size() == 0) {
      out << "orientation_quaternion: []";
    } else {
      out << "orientation_quaternion: [";
      size_t pending_items = msg.orientation_quaternion.size();
      for (auto item : msg.orientation_quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation_tilt_error_covariance
  {
    if (msg.orientation_tilt_error_covariance.size() == 0) {
      out << "orientation_tilt_error_covariance: []";
    } else {
      out << "orientation_tilt_error_covariance: [";
      size_t pending_items = msg.orientation_tilt_error_covariance.size();
      for (auto item : msg.orientation_tilt_error_covariance) {
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

inline void to_block_style_yaml(const TypeMounting &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: lever_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lever_arm.size() == 0) {
      out << "lever_arm: []\n";
    } else {
      out << "lever_arm:\n";
      for (auto item : msg.lever_arm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lever_arm_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lever_arm_sigma.size() == 0) {
      out << "lever_arm_sigma: []\n";
    } else {
      out << "lever_arm_sigma:\n";
      for (auto item : msg.lever_arm_sigma) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation_quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation_quaternion.size() == 0) {
      out << "orientation_quaternion: []\n";
    } else {
      out << "orientation_quaternion:\n";
      for (auto item : msg.orientation_quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation_tilt_error_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation_tilt_error_covariance.size() == 0) {
      out << "orientation_tilt_error_covariance: []\n";
    } else {
      out << "orientation_tilt_error_covariance:\n";
      for (auto item : msg.orientation_tilt_error_covariance) {
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

inline std::string to_yaml(const TypeMounting &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::TypeMounting &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeMounting &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeMounting>() {
  return "aspn23_ros_interfaces::msg::TypeMounting";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeMounting>() {
  return "aspn23_ros_interfaces/msg/TypeMounting";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeMounting>
    : std::integral_constant<bool, true> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeMounting>
    : std::integral_constant<bool, true> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeMounting> : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_MOUNTING__TRAITS_HPP_
