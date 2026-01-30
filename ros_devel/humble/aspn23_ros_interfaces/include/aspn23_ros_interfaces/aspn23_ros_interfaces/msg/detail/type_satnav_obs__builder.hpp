// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeSatnavObs_integrity {
public:
  explicit Init_TypeSatnavObs_integrity(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeSatnavObs
  integrity(::aspn23_ros_interfaces::msg::TypeSatnavObs::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_num_integrity {
public:
  explicit Init_TypeSatnavObs_num_integrity(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_TypeSatnavObs_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_signal_bias_correction_applied {
public:
  explicit Init_TypeSatnavObs_signal_bias_correction_applied(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_num_integrity
  signal_bias_correction_applied(::aspn23_ros_interfaces::msg::TypeSatnavObs::
                                     _signal_bias_correction_applied_type arg) {
    msg_.signal_bias_correction_applied = std::move(arg);
    return Init_TypeSatnavObs_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_tropo_correction_applied {
public:
  explicit Init_TypeSatnavObs_tropo_correction_applied(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_signal_bias_correction_applied
  tropo_correction_applied(::aspn23_ros_interfaces::msg::TypeSatnavObs::
                               _tropo_correction_applied_type arg) {
    msg_.tropo_correction_applied = std::move(arg);
    return Init_TypeSatnavObs_signal_bias_correction_applied(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_iono_correction_applied {
public:
  explicit Init_TypeSatnavObs_iono_correction_applied(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_tropo_correction_applied iono_correction_applied(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_iono_correction_applied_type
          arg) {
    msg_.iono_correction_applied = std::move(arg);
    return Init_TypeSatnavObs_tropo_correction_applied(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_iono_correction_source {
public:
  explicit Init_TypeSatnavObs_iono_correction_source(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_iono_correction_applied iono_correction_source(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_iono_correction_source_type
          arg) {
    msg_.iono_correction_source = std::move(arg);
    return Init_TypeSatnavObs_iono_correction_applied(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_lock_count {
public:
  explicit Init_TypeSatnavObs_lock_count(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_iono_correction_source lock_count(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_lock_count_type arg) {
    msg_.lock_count = std::move(arg);
    return Init_TypeSatnavObs_iono_correction_source(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_c_n0 {
public:
  explicit Init_TypeSatnavObs_c_n0(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_lock_count
  c_n0(::aspn23_ros_interfaces::msg::TypeSatnavObs::_c_n0_type arg) {
    msg_.c_n0 = std::move(arg);
    return Init_TypeSatnavObs_lock_count(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_carrier_phase_variance {
public:
  explicit Init_TypeSatnavObs_carrier_phase_variance(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_c_n0 carrier_phase_variance(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_carrier_phase_variance_type
          arg) {
    msg_.carrier_phase_variance = std::move(arg);
    return Init_TypeSatnavObs_c_n0(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_carrier_phase {
public:
  explicit Init_TypeSatnavObs_carrier_phase(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_carrier_phase_variance carrier_phase(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_carrier_phase_type arg) {
    msg_.carrier_phase = std::move(arg);
    return Init_TypeSatnavObs_carrier_phase_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_pseudorange_rate_variance {
public:
  explicit Init_TypeSatnavObs_pseudorange_rate_variance(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_carrier_phase
  pseudorange_rate_variance(::aspn23_ros_interfaces::msg::TypeSatnavObs::
                                _pseudorange_rate_variance_type arg) {
    msg_.pseudorange_rate_variance = std::move(arg);
    return Init_TypeSatnavObs_carrier_phase(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_pseudorange_rate {
public:
  explicit Init_TypeSatnavObs_pseudorange_rate(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_pseudorange_rate_variance pseudorange_rate(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_pseudorange_rate_type arg) {
    msg_.pseudorange_rate = std::move(arg);
    return Init_TypeSatnavObs_pseudorange_rate_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_pseudorange_rate_type {
public:
  explicit Init_TypeSatnavObs_pseudorange_rate_type(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_pseudorange_rate pseudorange_rate_type(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_pseudorange_rate_type_type
          arg) {
    msg_.pseudorange_rate_type = std::move(arg);
    return Init_TypeSatnavObs_pseudorange_rate(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_pseudorange_variance {
public:
  explicit Init_TypeSatnavObs_pseudorange_variance(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_pseudorange_rate_type pseudorange_variance(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_pseudorange_variance_type
          arg) {
    msg_.pseudorange_variance = std::move(arg);
    return Init_TypeSatnavObs_pseudorange_rate_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_pseudorange {
public:
  explicit Init_TypeSatnavObs_pseudorange(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_pseudorange_variance pseudorange(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_pseudorange_type arg) {
    msg_.pseudorange = std::move(arg);
    return Init_TypeSatnavObs_pseudorange_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_frequency {
public:
  explicit Init_TypeSatnavObs_frequency(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_pseudorange
  frequency(::aspn23_ros_interfaces::msg::TypeSatnavObs::_frequency_type arg) {
    msg_.frequency = std::move(arg);
    return Init_TypeSatnavObs_pseudorange(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_prn {
public:
  explicit Init_TypeSatnavObs_prn(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_frequency
  prn(::aspn23_ros_interfaces::msg::TypeSatnavObs::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_TypeSatnavObs_frequency(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_signal_descriptor {
public:
  explicit Init_TypeSatnavObs_signal_descriptor(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs &msg)
      : msg_(msg) {}
  Init_TypeSatnavObs_prn signal_descriptor(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_signal_descriptor_type
          arg) {
    msg_.signal_descriptor = std::move(arg);
    return Init_TypeSatnavObs_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

class Init_TypeSatnavObs_satellite_system {
public:
  Init_TypeSatnavObs_satellite_system()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeSatnavObs_signal_descriptor satellite_system(
      ::aspn23_ros_interfaces::msg::TypeSatnavObs::_satellite_system_type arg) {
    msg_.satellite_system = std::move(arg);
    return Init_TypeSatnavObs_signal_descriptor(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeSatnavObs msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeSatnavObs>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeSatnavObs_satellite_system();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__BUILDER_HPP_
