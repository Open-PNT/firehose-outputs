// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_kepler_orbit.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__TRAITS_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

inline void to_flow_style_yaml(const TypeKeplerOrbit &msg, std::ostream &out) {
  out << "{";
  // member: m_0
  {
    out << "m_0: ";
    rosidl_generator_traits::value_to_yaml(msg.m_0, out);
    out << ", ";
  }

  // member: delta_n
  {
    out << "delta_n: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_n, out);
    out << ", ";
  }

  // member: e
  {
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << ", ";
  }

  // member: sqrt_a
  {
    out << "sqrt_a: ";
    rosidl_generator_traits::value_to_yaml(msg.sqrt_a, out);
    out << ", ";
  }

  // member: omega_0
  {
    out << "omega_0: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_0, out);
    out << ", ";
  }

  // member: i_0
  {
    out << "i_0: ";
    rosidl_generator_traits::value_to_yaml(msg.i_0, out);
    out << ", ";
  }

  // member: i_dot
  {
    out << "i_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.i_dot, out);
    out << ", ";
  }

  // member: omega
  {
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << ", ";
  }

  // member: omega_dot
  {
    out << "omega_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_dot, out);
    out << ", ";
  }

  // member: c_uc
  {
    out << "c_uc: ";
    rosidl_generator_traits::value_to_yaml(msg.c_uc, out);
    out << ", ";
  }

  // member: c_us
  {
    out << "c_us: ";
    rosidl_generator_traits::value_to_yaml(msg.c_us, out);
    out << ", ";
  }

  // member: c_rc
  {
    out << "c_rc: ";
    rosidl_generator_traits::value_to_yaml(msg.c_rc, out);
    out << ", ";
  }

  // member: c_rs
  {
    out << "c_rs: ";
    rosidl_generator_traits::value_to_yaml(msg.c_rs, out);
    out << ", ";
  }

  // member: c_ic
  {
    out << "c_ic: ";
    rosidl_generator_traits::value_to_yaml(msg.c_ic, out);
    out << ", ";
  }

  // member: c_is
  {
    out << "c_is: ";
    rosidl_generator_traits::value_to_yaml(msg.c_is, out);
    out << ", ";
  }

  // member: t_oe
  {
    out << "t_oe: ";
    rosidl_generator_traits::value_to_yaml(msg.t_oe, out);
  }
  out << "}";
} // NOLINT(readability/fn_size)

inline void to_block_style_yaml(const TypeKeplerOrbit &msg, std::ostream &out,
                                size_t indentation = 0) {
  // member: m_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_0: ";
    rosidl_generator_traits::value_to_yaml(msg.m_0, out);
    out << "\n";
  }

  // member: delta_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_n: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_n, out);
    out << "\n";
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << "\n";
  }

  // member: sqrt_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sqrt_a: ";
    rosidl_generator_traits::value_to_yaml(msg.sqrt_a, out);
    out << "\n";
  }

  // member: omega_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_0: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_0, out);
    out << "\n";
  }

  // member: i_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_0: ";
    rosidl_generator_traits::value_to_yaml(msg.i_0, out);
    out << "\n";
  }

  // member: i_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.i_dot, out);
    out << "\n";
  }

  // member: omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega: ";
    rosidl_generator_traits::value_to_yaml(msg.omega, out);
    out << "\n";
  }

  // member: omega_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_dot, out);
    out << "\n";
  }

  // member: c_uc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_uc: ";
    rosidl_generator_traits::value_to_yaml(msg.c_uc, out);
    out << "\n";
  }

  // member: c_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_us: ";
    rosidl_generator_traits::value_to_yaml(msg.c_us, out);
    out << "\n";
  }

  // member: c_rc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_rc: ";
    rosidl_generator_traits::value_to_yaml(msg.c_rc, out);
    out << "\n";
  }

  // member: c_rs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_rs: ";
    rosidl_generator_traits::value_to_yaml(msg.c_rs, out);
    out << "\n";
  }

  // member: c_ic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_ic: ";
    rosidl_generator_traits::value_to_yaml(msg.c_ic, out);
    out << "\n";
  }

  // member: c_is
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_is: ";
    rosidl_generator_traits::value_to_yaml(msg.c_is, out);
    out << "\n";
  }

  // member: t_oe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_oe: ";
    rosidl_generator_traits::value_to_yaml(msg.t_oe, out);
    out << "\n";
  }
} // NOLINT(readability/fn_size)

inline std::string to_yaml(const TypeKeplerOrbit &msg,
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
inline void to_yaml(const aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg,
                    std::ostream &out, size_t indentation = 0) {
  aspn23_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aspn23_ros_interfaces::msg::to_yaml() instead")]]
inline std::string
to_yaml(const aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg) {
  return aspn23_ros_interfaces::msg::to_yaml(msg);
}

template <>
inline const char *data_type<aspn23_ros_interfaces::msg::TypeKeplerOrbit>() {
  return "aspn23_ros_interfaces::msg::TypeKeplerOrbit";
}

template <>
inline const char *name<aspn23_ros_interfaces::msg::TypeKeplerOrbit>() {
  return "aspn23_ros_interfaces/msg/TypeKeplerOrbit";
}

template <>
struct has_fixed_size<aspn23_ros_interfaces::msg::TypeKeplerOrbit>
    : std::integral_constant<bool, true> {};

template <>
struct has_bounded_size<aspn23_ros_interfaces::msg::TypeKeplerOrbit>
    : std::integral_constant<bool, true> {};

template <>
struct is_message<aspn23_ros_interfaces::msg::TypeKeplerOrbit>
    : std::true_type {};

} // namespace rosidl_generator_traits

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__TRAITS_HPP_
