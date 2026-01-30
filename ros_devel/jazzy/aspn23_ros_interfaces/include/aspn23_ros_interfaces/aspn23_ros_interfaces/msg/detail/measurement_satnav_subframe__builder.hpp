// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav_subframe.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementSatnavSubframe_integrity {
public:
  explicit Init_MeasurementSatnavSubframe_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_num_integrity {
public:
  explicit Init_MeasurementSatnavSubframe_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_integrity
  num_integrity(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::
                    _num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementSatnavSubframe_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_data_vector {
public:
  explicit Init_MeasurementSatnavSubframe_data_vector(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_num_integrity data_vector(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::_data_vector_type
          arg) {
    msg_.data_vector = std::move(arg);
    return Init_MeasurementSatnavSubframe_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_num_bytes {
public:
  explicit Init_MeasurementSatnavSubframe_num_bytes(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_data_vector num_bytes(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::_num_bytes_type
          arg) {
    msg_.num_bytes = std::move(arg);
    return Init_MeasurementSatnavSubframe_data_vector(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_freq_slot_id {
public:
  explicit Init_MeasurementSatnavSubframe_freq_slot_id(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_num_bytes
  freq_slot_id(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::
                   _freq_slot_id_type arg) {
    msg_.freq_slot_id = std::move(arg);
    return Init_MeasurementSatnavSubframe_num_bytes(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_satellite_system {
public:
  explicit Init_MeasurementSatnavSubframe_satellite_system(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_freq_slot_id
  satellite_system(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::
                       _satellite_system_type arg) {
    msg_.satellite_system = std::move(arg);
    return Init_MeasurementSatnavSubframe_freq_slot_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_prn {
public:
  explicit Init_MeasurementSatnavSubframe_prn(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_satellite_system
  prn(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::_prn_type arg) {
    msg_.prn = std::move(arg);
    return Init_MeasurementSatnavSubframe_satellite_system(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_gnss_message_id {
public:
  explicit Init_MeasurementSatnavSubframe_gnss_message_id(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_prn
  gnss_message_id(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::
                      _gnss_message_id_type arg) {
    msg_.gnss_message_id = std::move(arg);
    return Init_MeasurementSatnavSubframe_prn(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_time_of_validity {
public:
  explicit Init_MeasurementSatnavSubframe_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe &msg)
      : msg_(msg) {}
  Init_MeasurementSatnavSubframe_gnss_message_id
  time_of_validity(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::
                       _time_of_validity_type arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementSatnavSubframe_gnss_message_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

class Init_MeasurementSatnavSubframe_header {
public:
  Init_MeasurementSatnavSubframe_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementSatnavSubframe_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe::_header_type
             arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementSatnavSubframe_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementSatnavSubframe>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_MeasurementSatnavSubframe_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__BUILDER_HPP_
