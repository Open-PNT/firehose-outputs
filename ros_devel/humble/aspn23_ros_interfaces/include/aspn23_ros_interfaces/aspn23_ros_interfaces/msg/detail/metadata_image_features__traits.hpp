// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataImageFeatures &msg,
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

  // member: keypoint_detector
  {
    out << "keypoint_detector: ";
    rosidl_generator_traits::value_to_yaml(msg.keypoint_detector, out);
    out << ", ";
  }

  // member: orientation_calculated
  {
    out << "orientation_calculated: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_calculated, out);
    out << ", ";
  }

  // member: descriptor_extractor
  {
    out << "descriptor_extractor: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_extractor, out);
    out << ", ";
  }

  // member: is_bigendian
  {
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << ", ";
  }

  // member: descriptor_type
  {
    out << "descriptor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_type, out);
    out << ", ";
  }

  // member: descriptor_number_of_elements
  {
    out << "descriptor_number_of_elements: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_number_of_elements,
                                           out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataImageFeatures &msg,
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

  // member: keypoint_detector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keypoint_detector: ";
    rosidl_generator_traits::value_to_yaml(msg.keypoint_detector, out);
    out << "\n";
  }

  // member: orientation_calculated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_calculated: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_calculated, out);
    out << "\n";
  }

  // member: descriptor_extractor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_extractor: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_extractor, out);
    out << "\n";
  }

  // member: is_bigendian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << "\n";
  }

  // member: descriptor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_type, out);
    out << "\n";
  }

  // member: descriptor_number_of_elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptor_number_of_elements: ";
    rosidl_generator_traits::value_to_yaml(msg.descriptor_number_of_elements,
                                           out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataImageFeatures &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataImageFeatures &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataImageFeatures &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MetadataImageFeatures>() {
  return "aspn23_ros_interfaces::msg::MetadataImageFeatures";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::MetadataImageFeatures>() {
  return "aspn23_ros_interfaces/msg/MetadataImageFeatures";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataImageFeatures>
    : std::integral_constant<
          bool, has_fixed_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_fixed_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MetadataImageFeatures>
    : std::integral_constant<
          bool, has_bounded_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_bounded_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataImageFeatures>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__TRAITS_HPP_
