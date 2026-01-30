// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__struct.hpp"
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

inline void to_flow_style_yaml(const MeasurementPositionVelocityAttitude &msg,
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

  // member: reference_frame
  {
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << ", ";
  }

  // member: p1
  {
    out << "p1: ";
    rosidl_generator_traits::value_to_yaml(msg.p1, out);
    out << ", ";
  }

  // member: p2
  {
    out << "p2: ";
    rosidl_generator_traits::value_to_yaml(msg.p2, out);
    out << ", ";
  }

  // member: p3
  {
    out << "p3: ";
    rosidl_generator_traits::value_to_yaml(msg.p3, out);
    out << ", ";
  }

  // member: v1
  {
    out << "v1: ";
    rosidl_generator_traits::value_to_yaml(msg.v1, out);
    out << ", ";
  }

  // member: v2
  {
    out << "v2: ";
    rosidl_generator_traits::value_to_yaml(msg.v2, out);
    out << ", ";
  }

  // member: v3
  {
    out << "v3: ";
    rosidl_generator_traits::value_to_yaml(msg.v3, out);
    out << ", ";
  }

  // member: quaternion
  {
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []";
    } else {
      out << "quaternion: [";
      size_t pending_items = msg.quaternion.size();
      for (auto item : msg.quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: num_meas
  {
    out << "num_meas: ";
    rosidl_generator_traits::value_to_yaml(msg.num_meas, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

inline void to_block_style_yaml(const MeasurementPositionVelocityAttitude &msg,
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

  // member: reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_frame, out);
    out << "\n";
  }

  // member: p1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p1: ";
    rosidl_generator_traits::value_to_yaml(msg.p1, out);
    out << "\n";
  }

  // member: p2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p2: ";
    rosidl_generator_traits::value_to_yaml(msg.p2, out);
    out << "\n";
  }

  // member: p3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p3: ";
    rosidl_generator_traits::value_to_yaml(msg.p3, out);
    out << "\n";
  }

  // member: v1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1: ";
    rosidl_generator_traits::value_to_yaml(msg.v1, out);
    out << "\n";
  }

  // member: v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2: ";
    rosidl_generator_traits::value_to_yaml(msg.v2, out);
    out << "\n";
  }

  // member: v3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v3: ";
    rosidl_generator_traits::value_to_yaml(msg.v3, out);
    out << "\n";
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []\n";
    } else {
      out << "quaternion:\n";
      for (auto item : msg.quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_meas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_meas: ";
    rosidl_generator_traits::value_to_yaml(msg.num_meas, out);
    out << "\n";
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const MeasurementPositionVelocityAttitude &msg,
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
to_yaml(
    const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude &msg,
    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
            &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>() {
  return "aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>() {
  return "aspn23_ros_interfaces/msg/MeasurementPositionVelocityAttitude";
}

template <>
struct has_fixed_size<
    aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<
    aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<
    aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__TRAITS_HPP_
