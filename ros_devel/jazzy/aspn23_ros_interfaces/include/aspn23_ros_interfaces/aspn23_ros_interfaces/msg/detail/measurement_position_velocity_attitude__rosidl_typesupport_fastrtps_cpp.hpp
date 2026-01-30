// generated from
// rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__struct.hpp"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include <cstddef>

#ifndef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#ifdef __clang__
#pragma clang diagnostic ignored "-Wdeprecated-register"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
#endif
#endif
#ifndef _WIN32
#pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace aspn23_ros_interfaces {

namespace msg {

namespace typesupport_fastrtps_cpp {

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces cdr_serialize(
    const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
        &ros_message,
    eprosima::fastcdr::Cdr &cdr);

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
cdr_deserialize(eprosima::fastcdr::Cdr &cdr,
                aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
                    &ros_message);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
get_serialized_size(
    const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
        &ros_message,
    size_t current_alignment);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
max_serialized_size_MeasurementPositionVelocityAttitude(
    bool &full_bounded, bool &is_plain, size_t current_alignment);

bool ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
cdr_serialize_key(
    const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
        &ros_message,
    eprosima::fastcdr::Cdr &);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
get_serialized_size_key(
    const aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude
        &ros_message,
    size_t current_alignment);

size_t ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces
max_serialized_size_key_MeasurementPositionVelocityAttitude(
    bool &full_bounded, bool &is_plain, size_t current_alignment);

} // namespace typesupport_fastrtps_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aspn23_ros_interfaces const rosidl_message_type_support_t
    *ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_cpp, aspn23_ros_interfaces, msg,
        MeasurementPositionVelocityAttitude)();

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_VELOCITY_ATTITUDE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
