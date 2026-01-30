// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_image.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MeasurementImage &msg, std::ostream &out) {
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

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: is_bigendian
  {
    out << "is_bigendian: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bigendian, out);
    out << ", ";
  }

  // member: image_type
  {
    out << "image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.image_type, out);
    out << ", ";
  }

  // member: image_data_length
  {
    out << "image_data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.image_data_length, out);
    out << ", ";
  }

  // member: image_data
  {
    if (msg.image_data.size() == 0) {
      out << "image_data: []";
    } else {
      out << "image_data: [";
      size_t pending_items = msg.image_data.size();
      for (auto item : msg.image_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: camera_model
  {
    out << "camera_model: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_model, out);
    out << ", ";
  }

  // member: num_model_coefficients
  {
    out << "num_model_coefficients: ";
    rosidl_generator_traits::value_to_yaml(msg.num_model_coefficients, out);
    out << ", ";
  }

  // member: model_coefficients
  {
    if (msg.model_coefficients.size() == 0) {
      out << "model_coefficients: []";
    } else {
      out << "model_coefficients: [";
      size_t pending_items = msg.model_coefficients.size();
      for (auto item : msg.model_coefficients) {
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

inline void to_block_style_yaml(const MeasurementImage &msg, std::ostream &out,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
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

  // member: image_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.image_type, out);
    out << "\n";
  }

  // member: image_data_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_data_length: ";
    rosidl_generator_traits::value_to_yaml(msg.image_data_length, out);
    out << "\n";
  }

  // member: image_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_data.size() == 0) {
      out << "image_data: []\n";
    } else {
      out << "image_data:\n";
      for (auto item : msg.image_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_model: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_model, out);
    out << "\n";
  }

  // member: num_model_coefficients
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_model_coefficients: ";
    rosidl_generator_traits::value_to_yaml(msg.num_model_coefficients, out);
    out << "\n";
  }

  // member: model_coefficients
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.model_coefficients.size() == 0) {
      out << "model_coefficients: []\n";
    } else {
      out << "model_coefficients:\n";
      for (auto item : msg.model_coefficients) {
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

inline std::string to_yaml(const MeasurementImage &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::MeasurementImage &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MeasurementImage &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::MeasurementImage>() {
  return "aspn23_ros_interfaces::msg::MeasurementImage";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::MeasurementImage>() {
  return "aspn23_ros_interfaces/msg/MeasurementImage";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MeasurementImage>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MeasurementImage>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MeasurementImage>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__TRAITS_HPP_
