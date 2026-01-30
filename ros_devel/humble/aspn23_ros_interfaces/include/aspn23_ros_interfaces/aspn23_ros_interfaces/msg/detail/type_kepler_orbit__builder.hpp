// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeKeplerOrbit_t_oe {
public:
  explicit Init_TypeKeplerOrbit_t_oe(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit
  t_oe(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_t_oe_type arg) {
    msg_.t_oe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_is {
public:
  explicit Init_TypeKeplerOrbit_c_is(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_t_oe
  c_is(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_is_type arg) {
    msg_.c_is = std::move(arg);
    return Init_TypeKeplerOrbit_t_oe(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_ic {
public:
  explicit Init_TypeKeplerOrbit_c_ic(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_is
  c_ic(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_ic_type arg) {
    msg_.c_ic = std::move(arg);
    return Init_TypeKeplerOrbit_c_is(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_rs {
public:
  explicit Init_TypeKeplerOrbit_c_rs(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_ic
  c_rs(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_rs_type arg) {
    msg_.c_rs = std::move(arg);
    return Init_TypeKeplerOrbit_c_ic(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_rc {
public:
  explicit Init_TypeKeplerOrbit_c_rc(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_rs
  c_rc(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_rc_type arg) {
    msg_.c_rc = std::move(arg);
    return Init_TypeKeplerOrbit_c_rs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_us {
public:
  explicit Init_TypeKeplerOrbit_c_us(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_rc
  c_us(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_us_type arg) {
    msg_.c_us = std::move(arg);
    return Init_TypeKeplerOrbit_c_rc(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_c_uc {
public:
  explicit Init_TypeKeplerOrbit_c_uc(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_us
  c_uc(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_c_uc_type arg) {
    msg_.c_uc = std::move(arg);
    return Init_TypeKeplerOrbit_c_us(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_omega_dot {
public:
  explicit Init_TypeKeplerOrbit_omega_dot(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_c_uc omega_dot(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_omega_dot_type arg) {
    msg_.omega_dot = std::move(arg);
    return Init_TypeKeplerOrbit_c_uc(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_omega {
public:
  explicit Init_TypeKeplerOrbit_omega(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_omega_dot
  omega(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_omega_type arg) {
    msg_.omega = std::move(arg);
    return Init_TypeKeplerOrbit_omega_dot(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_i_dot {
public:
  explicit Init_TypeKeplerOrbit_i_dot(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_omega
  i_dot(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_i_dot_type arg) {
    msg_.i_dot = std::move(arg);
    return Init_TypeKeplerOrbit_omega(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_i_0 {
public:
  explicit Init_TypeKeplerOrbit_i_0(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_i_dot
  i_0(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_i_0_type arg) {
    msg_.i_0 = std::move(arg);
    return Init_TypeKeplerOrbit_i_dot(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_omega_0 {
public:
  explicit Init_TypeKeplerOrbit_omega_0(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_i_0
  omega_0(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_omega_0_type arg) {
    msg_.omega_0 = std::move(arg);
    return Init_TypeKeplerOrbit_i_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_sqrt_a {
public:
  explicit Init_TypeKeplerOrbit_sqrt_a(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_omega_0
  sqrt_a(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_sqrt_a_type arg) {
    msg_.sqrt_a = std::move(arg);
    return Init_TypeKeplerOrbit_omega_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_e {
public:
  explicit Init_TypeKeplerOrbit_e(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_sqrt_a
  e(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_e_type arg) {
    msg_.e = std::move(arg);
    return Init_TypeKeplerOrbit_sqrt_a(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_delta_n {
public:
  explicit Init_TypeKeplerOrbit_delta_n(
      ::aspn23_ros_interfaces::msg::TypeKeplerOrbit &msg)
      : msg_(msg) {}
  Init_TypeKeplerOrbit_e
  delta_n(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_delta_n_type arg) {
    msg_.delta_n = std::move(arg);
    return Init_TypeKeplerOrbit_e(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

class Init_TypeKeplerOrbit_m_0 {
public:
  Init_TypeKeplerOrbit_m_0()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeKeplerOrbit_delta_n
  m_0(::aspn23_ros_interfaces::msg::TypeKeplerOrbit::_m_0_type arg) {
    msg_.m_0 = std::move(arg);
    return Init_TypeKeplerOrbit_delta_n(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeKeplerOrbit msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeKeplerOrbit>() {
  return aspn23_ros_interfaces::msg::builder::Init_TypeKeplerOrbit_m_0();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__BUILDER_HPP_
