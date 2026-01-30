// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_iono_utc_parameters.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MetadataGpsIonoUtcParameters_beta_3 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_beta_3(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters beta_3(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_beta_3_type
          arg) {
    msg_.beta_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_beta_2 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_beta_2(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_beta_3 beta_2(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_beta_2_type
          arg) {
    msg_.beta_2 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_beta_3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_beta_1 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_beta_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_beta_2 beta_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_beta_1_type
          arg) {
    msg_.beta_1 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_beta_2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_beta_0 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_beta_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_beta_1 beta_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_beta_0_type
          arg) {
    msg_.beta_0 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_beta_1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_alpha_3 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_alpha_3(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_beta_0 alpha_3(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_alpha_3_type
          arg) {
    msg_.alpha_3 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_beta_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_alpha_2 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_alpha_2(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_alpha_3 alpha_2(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_alpha_2_type
          arg) {
    msg_.alpha_2 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_alpha_3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_alpha_1 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_alpha_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_alpha_2 alpha_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_alpha_1_type
          arg) {
    msg_.alpha_1 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_alpha_2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_alpha_0 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_alpha_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_alpha_1 alpha_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_alpha_0_type
          arg) {
    msg_.alpha_0 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_alpha_1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_delta_t_lsf {
public:
  explicit Init_MetadataGpsIonoUtcParameters_delta_t_lsf(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_alpha_0
  delta_t_lsf(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::
                  _delta_t_lsf_type arg) {
    msg_.delta_t_lsf = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_alpha_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_dn {
public:
  explicit Init_MetadataGpsIonoUtcParameters_dn(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_delta_t_lsf
  dn(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_dn_type arg) {
    msg_.dn = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_delta_t_lsf(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_wn_lsf {
public:
  explicit Init_MetadataGpsIonoUtcParameters_wn_lsf(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_dn wn_lsf(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_wn_lsf_type
          arg) {
    msg_.wn_lsf = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_dn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_wn_t {
public:
  explicit Init_MetadataGpsIonoUtcParameters_wn_t(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_wn_lsf
  wn_t(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_wn_t_type
           arg) {
    msg_.wn_t = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_wn_lsf(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_tot {
public:
  explicit Init_MetadataGpsIonoUtcParameters_tot(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_wn_t
  tot(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_tot_type
          arg) {
    msg_.tot = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_wn_t(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_delta_t_ls {
public:
  explicit Init_MetadataGpsIonoUtcParameters_delta_t_ls(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_tot
  delta_t_ls(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::
                 _delta_t_ls_type arg) {
    msg_.delta_t_ls = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_tot(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_a_1 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_a_1(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_delta_t_ls
  a_1(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_a_1_type
          arg) {
    msg_.a_1 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_delta_t_ls(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_a_0 {
public:
  explicit Init_MetadataGpsIonoUtcParameters_a_0(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_a_1
  a_0(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_a_0_type
          arg) {
    msg_.a_0 = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_a_1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_time_of_validity {
public:
  explicit Init_MetadataGpsIonoUtcParameters_time_of_validity(
      ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters &msg)
      : msg_(msg) {}
  Init_MetadataGpsIonoUtcParameters_a_0
  time_of_validity(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_a_0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

class Init_MetadataGpsIonoUtcParameters_info {
public:
  Init_MetadataGpsIonoUtcParameters_info()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MetadataGpsIonoUtcParameters_time_of_validity
  info(::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters::_info_type
           arg) {
    msg_.info = std::move(arg);
    return Init_MetadataGpsIonoUtcParameters_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto
build<::aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MetadataGpsIonoUtcParameters_info();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__BUILDER_HPP_
