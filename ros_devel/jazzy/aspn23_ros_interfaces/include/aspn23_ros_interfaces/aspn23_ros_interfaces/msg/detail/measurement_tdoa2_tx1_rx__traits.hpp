// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementTdoa2Tx1Rx.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_tdoa2_tx1_rx.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa2_tx1_rx__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"
// Member 'tx1_position_and_covariance'
// Member 'tx2_position_and_covariance'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__traits.hpp"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MeasurementTdoa2Tx1Rx &msg,
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

  // member: tx1_position_and_covariance
  {
    out << "tx1_position_and_covariance: ";
    to_flow_style_yaml(msg.tx1_position_and_covariance, out);
    out << ", ";
  }

  // member: tx2_position_and_covariance
  {
    out << "tx2_position_and_covariance: ";
    to_flow_style_yaml(msg.tx2_position_and_covariance, out);
    out << ", ";
  }

  // member: obs
  {
    out << "obs: ";
    rosidl_generator_traits::value_to_yaml(msg.obs, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
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

inline void to_block_style_yaml(const MeasurementTdoa2Tx1Rx &msg,
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

  // member: tx1_position_and_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx1_position_and_covariance:\n";
    to_block_style_yaml(msg.tx1_position_and_covariance, out, indentation + 2);
  }

  // member: tx2_position_and_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx2_position_and_covariance:\n";
    to_block_style_yaml(msg.tx2_position_and_covariance, out, indentation + 2);
  }

  // member: obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs: ";
    rosidl_generator_traits::value_to_yaml(msg.obs, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
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

inline std::string to_yaml(const MeasurementTdoa2Tx1Rx &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>() {
  return "aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>() {
  return "aspn23_ros_interfaces/msg/MeasurementTdoa2Tx1Rx";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>
    : std::integral_constant<bool, false> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>
    : std::integral_constant<bool, false> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MeasurementTdoa2Tx1Rx>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__TRAITS_HPP_
