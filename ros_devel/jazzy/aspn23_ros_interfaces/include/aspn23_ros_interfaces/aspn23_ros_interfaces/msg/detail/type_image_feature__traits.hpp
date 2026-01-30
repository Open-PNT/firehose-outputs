// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_image_feature.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeImageFeature &msg, std::ostream &out) {
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << ", ";
  }

  // member: octave
  {
    out << "octave: ";
    rosidl_generator_traits::value_to_yaml(msg.octave, out);
    out << ", ";
  }

  // member: descriptor_size
  {
    out << "descriptor_size: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_size, out);
    out << ", ";
  }

  // member: descriptor
  {
    if (msg.descriptor.size() == 0) {
      out << "descriptor: []";
    } else {
      out << "descriptor: [";
      size_t pending_items = msg.descriptor.size();
      for (auto item : msg.descriptor) {
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

inline void to_block_style_yaml(const TypeImageFeature &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }

  // member: octave
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octave: ";
    rosidl_generator_traits::value_to_yaml(msg.octave, out);
    out << "\n";
  }

  // member: descriptor_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_size: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_size, out);
    out << "\n";
  }

  // member: descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.descriptor.size() == 0) {
      out << "descriptor: []\n";
    } else {
      out << "descriptor:\n";
      for (auto item : msg.descriptor) {
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

inline std::string to_yaml(const TypeImageFeature &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::TypeImageFeature &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeImageFeature &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeImageFeature>() {
  return "aspn23_ros_interfaces::msg::TypeImageFeature";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeImageFeature>() {
  return "aspn23_ros_interfaces/msg/TypeImageFeature";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeImageFeature>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeImageFeature>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeImageFeature>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__TRAITS_HPP_
