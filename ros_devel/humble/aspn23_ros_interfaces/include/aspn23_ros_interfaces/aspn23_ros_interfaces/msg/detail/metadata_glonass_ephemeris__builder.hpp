// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGlonassEphemeris_sv_accel_z {
public:
  explicit Init_MetadataGlonassEphemeris_sv_accel_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris sv_accel_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_accel_z_type
          arg) {
    msg_.sv_accel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_vel_z {
public:
  explicit Init_MetadataGlonassEphemeris_sv_vel_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_accel_z sv_vel_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_vel_z_type
          arg) {
    msg_.sv_vel_z = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_accel_z(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_pos_z {
public:
  explicit Init_MetadataGlonassEphemeris_sv_pos_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_vel_z sv_pos_z(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_pos_z_type
          arg) {
    msg_.sv_pos_z = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_vel_z(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_accel_y {
public:
  explicit Init_MetadataGlonassEphemeris_sv_accel_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_pos_z sv_accel_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_accel_y_type
          arg) {
    msg_.sv_accel_y = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_pos_z(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_vel_y {
public:
  explicit Init_MetadataGlonassEphemeris_sv_vel_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_accel_y sv_vel_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_vel_y_type
          arg) {
    msg_.sv_vel_y = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_accel_y(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_pos_y {
public:
  explicit Init_MetadataGlonassEphemeris_sv_pos_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_vel_y sv_pos_y(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_pos_y_type
          arg) {
    msg_.sv_pos_y = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_vel_y(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_accel_x {
public:
  explicit Init_MetadataGlonassEphemeris_sv_accel_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_pos_y sv_accel_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_accel_x_type
          arg) {
    msg_.sv_accel_x = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_pos_y(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_vel_x {
public:
  explicit Init_MetadataGlonassEphemeris_sv_vel_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_accel_x sv_vel_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_vel_x_type
          arg) {
    msg_.sv_vel_x = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_accel_x(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_sv_pos_x {
public:
  explicit Init_MetadataGlonassEphemeris_sv_pos_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_vel_x sv_pos_x(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_sv_pos_x_type
          arg) {
    msg_.sv_pos_x = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_vel_x(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_tau_n {
public:
  explicit Init_MetadataGlonassEphemeris_tau_n(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_sv_pos_x tau_n(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_tau_n_type arg) {
    msg_.tau_n = std::move(arg);
    return Init_MetadataGlonassEphemeris_sv_pos_x(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_gamma_n {
public:
  explicit Init_MetadataGlonassEphemeris_gamma_n(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_tau_n
  gamma_n(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_gamma_n_type
              arg) {
    msg_.gamma_n = std::move(arg);
    return Init_MetadataGlonassEphemeris_tau_n(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_t_b {
public:
  explicit Init_MetadataGlonassEphemeris_t_b(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_gamma_n
  t_b(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_t_b_type arg) {
    msg_.t_b = std::move(arg);
    return Init_MetadataGlonassEphemeris_gamma_n(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_t_k {
public:
  explicit Init_MetadataGlonassEphemeris_t_k(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_t_b
  t_k(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_t_k_type arg) {
    msg_.t_k = std::move(arg);
    return Init_MetadataGlonassEphemeris_t_b(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_n_t {
public:
  explicit Init_MetadataGlonassEphemeris_n_t(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_t_k
  n_t(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_n_t_type arg) {
    msg_.n_t = std::move(arg);
    return Init_MetadataGlonassEphemeris_t_k(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_freq_o {
public:
  explicit Init_MetadataGlonassEphemeris_freq_o(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_n_t
  freq_o(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_freq_o_type
             arg) {
    msg_.freq_o = std::move(arg);
    return Init_MetadataGlonassEphemeris_n_t(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_slot_number {
public:
  explicit Init_MetadataGlonassEphemeris_slot_number(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_freq_o slot_number(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_slot_number_type
          arg) {
    msg_.slot_number = std::move(arg);
    return Init_MetadataGlonassEphemeris_freq_o(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_time_of_validity {
public:
  explicit Init_MetadataGlonassEphemeris_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris &msg)
      : msg_(msg) {}
  Init_MetadataGlonassEphemeris_slot_number
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGlonassEphemeris_slot_number(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

class Init_MetadataGlonassEphemeris_info {
public:
  Init_MetadataGlonassEphemeris_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGlonassEphemeris_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris::_info_type arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGlonassEphemeris_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MetadataGlonassEphemeris>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGlonassEphemeris_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__BUILDER_HPP_
