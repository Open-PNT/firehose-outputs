// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_remote_point.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeRemotePoint_position_covariance {
public:
  explicit Init_TypeRemotePoint_position_covariance(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeRemotePoint position_covariance(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint::_position_covariance_type
          arg) {
    msg_.position_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_num_position_components {
public:
  explicit Init_TypeRemotePoint_num_position_components(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_position_covariance
  num_position_components(::aspn23_ros_interfaces::msg::TypeRemotePoint::
                              _num_position_components_type arg) {
    msg_.num_position_components = std::move(arg);
    return Init_TypeRemotePoint_position_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_position3 {
public:
  explicit Init_TypeRemotePoint_position3(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_num_position_components position3(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint::_position3_type arg) {
    msg_.position3 = std::move(arg);
    return Init_TypeRemotePoint_num_position_components(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_position2 {
public:
  explicit Init_TypeRemotePoint_position2(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_position3 position2(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint::_position2_type arg) {
    msg_.position2 = std::move(arg);
    return Init_TypeRemotePoint_position3(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_position1 {
public:
  explicit Init_TypeRemotePoint_position1(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_position2 position1(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint::_position1_type arg) {
    msg_.position1 = std::move(arg);
    return Init_TypeRemotePoint_position2(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_position_reference_frame {
public:
  explicit Init_TypeRemotePoint_position_reference_frame(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_position1
  position_reference_frame(::aspn23_ros_interfaces::msg::TypeRemotePoint::
                               _position_reference_frame_type arg) {
    msg_.position_reference_frame = std::move(arg);
    return Init_TypeRemotePoint_position1(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_id {
public:
  explicit Init_TypeRemotePoint_id(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint &msg)
      : msg_(msg) {}
  Init_TypeRemotePoint_position_reference_frame
  id(::aspn23_ros_interfaces::msg::TypeRemotePoint::_id_type arg) {
    msg_.id = std::move(arg);
    return Init_TypeRemotePoint_position_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

class Init_TypeRemotePoint_included_terms {
public:
  Init_TypeRemotePoint_included_terms()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeRemotePoint_id included_terms(
      ::aspn23_ros_interfaces::msg::TypeRemotePoint::_included_terms_type arg) {
    msg_.included_terms = std::move(arg);
    return Init_TypeRemotePoint_id(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeRemotePoint msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <> inline auto build<::aspn23_ros_interfaces::msg::TypeRemotePoint>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeRemotePoint_included_terms();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__BUILDER_HPP_
