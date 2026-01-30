// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__traits.hpp"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const MetadataGpsIonoUtcParameters &msg,
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

  // member: a_0
  {
    out << "a_0: ";
    rosidl_generator_traits::value_to_yaml(msg.a_0, out);
    out << ", ";
  }

  // member: a_1
  {
    out << "a_1: ";
    rosidl_generator_traits::value_to_yaml(msg.a_1, out);
    out << ", ";
  }

  // member: delta_t_ls
  {
    out << "delta_t_ls: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_ls, out);
    out << ", ";
  }

  // member: tot
  {
    out << "tot: ";
    rosidl_generator_traits::value_to_yaml(msg.tot, out);
    out << ", ";
  }

  // member: wn_t
  {
    out << "wn_t: ";
    rosidl_generator_traits::value_to_yaml(msg.wn_t, out);
    out << ", ";
  }

  // member: wn_lsf
  {
    out << "wn_lsf: ";
    rosidl_generator_traits::value_to_yaml(msg.wn_lsf, out);
    out << ", ";
  }

  // member: dn
  {
    out << "dn: ";
    rosidl_generator_traits::value_to_yaml(msg.dn, out);
    out << ", ";
  }

  // member: delta_t_lsf
  {
    out << "delta_t_lsf: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_lsf, out);
    out << ", ";
  }

  // member: alpha_0
  {
    out << "alpha_0: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_0, out);
    out << ", ";
  }

  // member: alpha_1
  {
    out << "alpha_1: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_1, out);
    out << ", ";
  }

  // member: alpha_2
  {
    out << "alpha_2: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_2, out);
    out << ", ";
  }

  // member: alpha_3
  {
    out << "alpha_3: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_3, out);
    out << ", ";
  }

  // member: beta_0
  {
    out << "beta_0: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_0, out);
    out << ", ";
  }

  // member: beta_1
  {
    out << "beta_1: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_1, out);
    out << ", ";
  }

  // member: beta_2
  {
    out << "beta_2: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_2, out);
    out << ", ";
  }

  // member: beta_3
  {
    out << "beta_3: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_3, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const MetadataGpsIonoUtcParameters &msg,
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

  // member: a_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_0: ";
    rosidl_generator_traits::value_to_yaml(msg.a_0, out);
    out << "\n";
  }

  // member: a_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_1: ";
    rosidl_generator_traits::value_to_yaml(msg.a_1, out);
    out << "\n";
  }

  // member: delta_t_ls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_t_ls: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_ls, out);
    out << "\n";
  }

  // member: tot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tot: ";
    rosidl_generator_traits::value_to_yaml(msg.tot, out);
    out << "\n";
  }

  // member: wn_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wn_t: ";
    rosidl_generator_traits::value_to_yaml(msg.wn_t, out);
    out << "\n";
  }

  // member: wn_lsf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wn_lsf: ";
    rosidl_generator_traits::value_to_yaml(msg.wn_lsf, out);
    out << "\n";
  }

  // member: dn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dn: ";
    rosidl_generator_traits::value_to_yaml(msg.dn, out);
    out << "\n";
  }

  // member: delta_t_lsf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_t_lsf: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_t_lsf, out);
    out << "\n";
  }

  // member: alpha_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_0: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_0, out);
    out << "\n";
  }

  // member: alpha_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_1: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_1, out);
    out << "\n";
  }

  // member: alpha_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_2: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_2, out);
    out << "\n";
  }

  // member: alpha_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha_3: ";
    rosidl_generator_traits::value_to_yaml(msg.alpha_3, out);
    out << "\n";
  }

  // member: beta_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_0: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_0, out);
    out << "\n";
  }

  // member: beta_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_1: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_1, out);
    out << "\n";
  }

  // member: beta_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_2: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_2, out);
    out << "\n";
  }

  // member: beta_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_3: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_3, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetadataGpsIonoUtcParameters &msg,
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
to_yaml(const aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg,
        std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated(
    "use aspn23_ros_interfaces::msg::to_yaml() instead")]] inline std::string
to_yaml(const aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *
data_type<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>() {
  return "aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters";
}

template <>
inline const char *
name<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>() {
  return "aspn23_ros_interfaces/msg/MetadataGpsIonoUtcParameters";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>
    : std::integral_constant<
          bool, has_fixed_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_fixed_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct has_bounded_size<
    aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>
    : std::integral_constant<
          bool, has_bounded_size<
                    aspn23_ros_interfaces::msg::TypeMetadataheader>::value &&
                    has_bounded_size<
                        aspn23_ros_interfaces::msg::TypeTimestamp>::value> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__TRAITS_HPP_
