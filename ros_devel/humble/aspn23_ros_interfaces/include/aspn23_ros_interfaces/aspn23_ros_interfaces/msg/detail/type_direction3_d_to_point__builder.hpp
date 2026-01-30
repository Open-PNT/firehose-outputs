// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_TypeDirection3DToPoint_integrity {
public:
  explicit Init_TypeDirection3DToPoint_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_integrity_type
          arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_num_integrity {
public:
  explicit Init_TypeDirection3DToPoint_num_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_num_integrity_type
          arg) {
    msg_.num_integrity = std::move(arg);
    return Init_TypeDirection3DToPoint_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_error_model_params {
public:
  explicit Init_TypeDirection3DToPoint_error_model_params(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_num_integrity
  error_model_params(::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::
                         _error_model_params_type arg) {
    msg_.error_model_params = std::move(arg);
    return Init_TypeDirection3DToPoint_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_num_error_model_params {
public:
  explicit Init_TypeDirection3DToPoint_num_error_model_params(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_error_model_params
  num_error_model_params(::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::
                             _num_error_model_params_type arg) {
    msg_.num_error_model_params = std::move(arg);
    return Init_TypeDirection3DToPoint_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_error_model {
public:
  explicit Init_TypeDirection3DToPoint_error_model(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_num_error_model_params error_model(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_error_model_type
          arg) {
    msg_.error_model = std::move(arg);
    return Init_TypeDirection3DToPoint_num_error_model_params(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_observation_characteristics {
public:
  explicit Init_TypeDirection3DToPoint_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_error_model observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::
          _observation_characteristics_type arg) {
    msg_.observation_characteristics = std::move(arg);
    return Init_TypeDirection3DToPoint_error_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_has_observation_characteristics {
public:
  explicit Init_TypeDirection3DToPoint_has_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_observation_characteristics
  has_observation_characteristics(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::
          _has_observation_characteristics_type arg) {
    msg_.has_observation_characteristics = std::move(arg);
    return Init_TypeDirection3DToPoint_observation_characteristics(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_covariance {
public:
  explicit Init_TypeDirection3DToPoint_covariance(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_has_observation_characteristics covariance(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_covariance_type
          arg) {
    msg_.covariance = std::move(arg);
    return Init_TypeDirection3DToPoint_has_observation_characteristics(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_obs {
public:
  explicit Init_TypeDirection3DToPoint_obs(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_covariance
  obs(::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_obs_type arg) {
    msg_.obs = std::move(arg);
    return Init_TypeDirection3DToPoint_covariance(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_reference_frame {
public:
  explicit Init_TypeDirection3DToPoint_reference_frame(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint &msg)
      : msg_(msg) {}
  Init_TypeDirection3DToPoint_obs
  reference_frame(::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::
                      _reference_frame_type arg) {
    msg_.reference_frame = std::move(arg);
    return Init_TypeDirection3DToPoint_obs(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

class Init_TypeDirection3DToPoint_remote_point {
public:
  Init_TypeDirection3DToPoint_remote_point()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_TypeDirection3DToPoint_reference_frame remote_point(
      ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint::_remote_point_type
          arg) {
    msg_.remote_point = std::move(arg);
    return Init_TypeDirection3DToPoint_reference_frame(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::TypeDirection3DToPoint msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::TypeDirection3DToPoint>() {
  return aspn23_ros_interfaces::msg::builder::
      Init_TypeDirection3DToPoint_remote_point();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__BUILDER_HPP_
