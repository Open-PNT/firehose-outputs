// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementTimeFrequencyDifference.idl generated
// code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_time_frequency_difference.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__struct.hpp"
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

inline void to_flow_style_yaml(const MeasurementTimeFrequencyDifference &msg,
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

  // member: time_of_validity_attosec
  {
    out << "time_of_validity_attosec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_validity_attosec, out);
    out << ", ";
  }

  // member: clock_id1
  {
    out << "clock_id1: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_id1, out);
    out << ", ";
  }

  // member: clock_id2
  {
    out << "clock_id2: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_id2, out);
    out << ", ";
  }

  // member: time_diff_nsec
  {
    out << "time_diff_nsec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_diff_nsec, out);
    out << ", ";
  }

  // member: time_diff_attosec
  {
    out << "time_diff_attosec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_diff_attosec, out);
    out << ", ";
  }

  // member: digits_of_precision
  {
    out << "digits_of_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.digits_of_precision, out);
    out << ", ";
  }

  // member: freq_diff
  {
    out << "freq_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_diff, out);
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

inline void to_block_style_yaml(const MeasurementTimeFrequencyDifference &msg,
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

  // member: time_of_validity_attosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_validity_attosec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_validity_attosec, out);
    out << "\n";
  }

  // member: clock_id1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_id1: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_id1, out);
    out << "\n";
  }

  // member: clock_id2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_id2: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_id2, out);
    out << "\n";
  }

  // member: time_diff_nsec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_diff_nsec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_diff_nsec, out);
    out << "\n";
  }

  // member: time_diff_attosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_diff_attosec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_diff_attosec, out);
    out << "\n";
  }

  // member: digits_of_precision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "digits_of_precision: ";
    rosidl_generator_traits::value_to_yaml(msg.digits_of_precision, out);
    out << "\n";
  }

  // member: freq_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_diff, out);
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

inline std::string to_yaml(const MeasurementTimeFrequencyDifference &msg,
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
inline void to_yaml(
    const aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg,
    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(
    const aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>() {
  return "aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>() {
  return "aspn23_ros_interfaces/msg/MeasurementTimeFrequencyDifference";
}

template <>
struct has_fixed_size<
    aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<
    aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<
    aspn23_ros_interfaces::msg::MeasurementTimeFrequencyDifference>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME_FREQUENCY_DIFFERENCE__TRAITS_HPP_
