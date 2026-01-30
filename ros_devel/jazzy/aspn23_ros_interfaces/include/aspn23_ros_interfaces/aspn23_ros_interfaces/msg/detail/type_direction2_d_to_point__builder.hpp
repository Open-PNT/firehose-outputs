// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeDirection2DToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_direction2_d_to_point.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeDirection2DToPoint_integrity {
public:
  explicit Init_TypeDirection2DToPoint_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_num_integrity {
public:
  explicit Init_TypeDirection2DToPoint_num_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_TypeDirection2DToPoint_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_error_model_params {
public:
  explicit Init_TypeDirection2DToPoint_error_model_params(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_TypeDirection2DToPoint_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_num_error_model_params {
public:
  explicit Init_TypeDirection2DToPoint_num_error_model_params(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_TypeDirection2DToPoint_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_error_model {
public:
  explicit Init_TypeDirection2DToPoint_error_model(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_TypeDirection2DToPoint_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_observation_characteristics {
public:
  explicit Init_TypeDirection2DToPoint_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_error_model observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::
          _observation_characteristics_type arg) {
    msg_.observation_characteristics = std::move(arg);
    return Init_TypeDirection2DToPoint_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_has_observation_characteristics {
public:
  explicit Init_TypeDirection2DToPoint_has_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_observation_characteristics
  has_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::
          _has_observation_characteristics_type arg) {
    msg_.has_observation_characteristics = std::move(arg);
    return Init_TypeDirection2DToPoint_observation_characteristics(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_variance {
public:
  explicit Init_TypeDirection2DToPoint_variance(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_has_observation_characteristics
  variance(::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_variance_type
               arg) {
    msg_.variance = std::move(arg);
    return Init_TypeDirection2DToPoint_has_observation_characteristics(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_obs {
public:
  explicit Init_TypeDirection2DToPoint_obs(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_variance
  obs(::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_TypeDirection2DToPoint_variance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_reference {
public:
  explicit Init_TypeDirection2DToPoint_reference(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection2DToPoint_obs reference(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_reference_type
          arg) {
    msg_.reference = std::move(arg);
    return Init_TypeDirection2DToPoint_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

class Init_TypeDirection2DToPoint_remote_point {
public:
  Init_TypeDirection2DToPoint_remote_point()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeDirection2DToPoint_reference remote_point(
      ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint::_remote_point_type
          arg) {
    msg_.remote_point = std::move(arg);
    return Init_TypeDirection2DToPoint_reference(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection2DToPoint msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeDirection2DToPoint>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeDirection2DToPoint_remote_point();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__BUILDER_HPP_
