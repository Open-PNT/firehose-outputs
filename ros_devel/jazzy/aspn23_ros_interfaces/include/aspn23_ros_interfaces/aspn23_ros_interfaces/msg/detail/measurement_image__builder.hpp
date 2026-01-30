// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_image.hpp"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__BUILDER_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aspn23_ros_interfaces/msg/detail/measurement_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

namespace aspn23_ros_interfaces {

namespace msg {

namespace builder {

class Init_MeasurementImage_integrity {
public:
  explicit Init_MeasurementImage_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  ::aspn23_ros_interfaces::msg::MeasurementImage integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_integrity_type arg) {
    msg_.integrity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_num_integrity {
public:
  explicit Init_MeasurementImage_num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_integrity num_integrity(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_num_integrity_type arg) {
    msg_.num_integrity = std::move(arg);
    return Init_MeasurementImage_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_model_coefficients {
public:
  explicit Init_MeasurementImage_model_coefficients(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_num_integrity model_coefficients(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_model_coefficients_type
          arg) {
    msg_.model_coefficients = std::move(arg);
    return Init_MeasurementImage_num_integrity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_num_model_coefficients {
public:
  explicit Init_MeasurementImage_num_model_coefficients(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_model_coefficients
  num_model_coefficients(::aspn23_ros_interfaces::msg::MeasurementImage::
                             _num_model_coefficients_type arg) {
    msg_.num_model_coefficients = std::move(arg);
    return Init_MeasurementImage_model_coefficients(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_camera_model {
public:
  explicit Init_MeasurementImage_camera_model(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_num_model_coefficients camera_model(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_camera_model_type arg) {
    msg_.camera_model = std::move(arg);
    return Init_MeasurementImage_num_model_coefficients(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_image_data {
public:
  explicit Init_MeasurementImage_image_data(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_camera_model image_data(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_image_data_type arg) {
    msg_.image_data = std::move(arg);
    return Init_MeasurementImage_camera_model(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_image_data_length {
public:
  explicit Init_MeasurementImage_image_data_length(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_image_data image_data_length(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_image_data_length_type
          arg) {
    msg_.image_data_length = std::move(arg);
    return Init_MeasurementImage_image_data(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_image_type {
public:
  explicit Init_MeasurementImage_image_type(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_image_data_length image_type(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_image_type_type arg) {
    msg_.image_type = std::move(arg);
    return Init_MeasurementImage_image_data_length(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_is_bigendian {
public:
  explicit Init_MeasurementImage_is_bigendian(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_image_type is_bigendian(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_is_bigendian_type arg) {
    msg_.is_bigendian = std::move(arg);
    return Init_MeasurementImage_image_type(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_width {
public:
  explicit Init_MeasurementImage_width(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_is_bigendian
  width(::aspn23_ros_interfaces::msg::MeasurementImage::_width_type arg) {
    msg_.width = std::move(arg);
    return Init_MeasurementImage_is_bigendian(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_height {
public:
  explicit Init_MeasurementImage_height(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_width
  height(::aspn23_ros_interfaces::msg::MeasurementImage::_height_type arg) {
    msg_.height = std::move(arg);
    return Init_MeasurementImage_width(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_time_of_validity {
public:
  explicit Init_MeasurementImage_time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementImage &msg)
      : msg_(msg) {}
  Init_MeasurementImage_height time_of_validity(
      ::aspn23_ros_interfaces::msg::MeasurementImage::_time_of_validity_type
          arg) {
    msg_.time_of_validity = std::move(arg);
    return Init_MeasurementImage_height(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

class Init_MeasurementImage_header {
public:
  Init_MeasurementImage_header()
      : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP) {}
  Init_MeasurementImage_time_of_validity
  header(::aspn23_ros_interfaces::msg::MeasurementImage::_header_type arg) {
    msg_.header = std::move(arg);
    return Init_MeasurementImage_time_of_validity(msg_);
  }

private:
  ::aspn23_ros_interfaces::msg::MeasurementImage msg_;
};

} // namespace builder

} // namespace msg

template <typename MessageType> auto build();

template <>
inline auto build<::aspn23_ros_interfaces::msg::MeasurementImage>() {
  return aspn23_ros_interfaces::msg::builder::Init_MeasurementImage_header();
}

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__BUILDER_HPP_
