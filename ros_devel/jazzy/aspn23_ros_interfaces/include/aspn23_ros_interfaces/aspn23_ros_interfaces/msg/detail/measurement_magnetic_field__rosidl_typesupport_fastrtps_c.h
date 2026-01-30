// generated from
// rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementMagneticField.idl
// generated code does not contain a copyright notice
#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

#include "aspn23_ros_interfaces/msg/detail/measurement_magnetic_field__struct.h"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fastcdr/Cdr.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces bool
cdr_serialize_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    const aspn23_ros_interfaces__msg__MeasurementMagneticField *ros_message,
    eprosima::fastcdr::Cdr &cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces bool
cdr_deserialize_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    eprosima::fastcdr::Cdr &,
    aspn23_ros_interfaces__msg__MeasurementMagneticField *ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces size_t
get_serialized_size_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    const void *untyped_ros_message, size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces size_t
max_serialized_size_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    bool &full_bounded, bool &is_plain, size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces bool
cdr_serialize_key_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    const aspn23_ros_interfaces__msg__MeasurementMagneticField *ros_message,
    eprosima::fastcdr::Cdr &cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces size_t
get_serialized_size_key_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    const void *untyped_ros_message, size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces size_t
max_serialized_size_key_aspn23_ros_interfaces__msg__MeasurementMagneticField(
    bool &full_bounded, bool &is_plain, size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aspn23_ros_interfaces const rosidl_message_type_support_t
    *ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, aspn23_ros_interfaces, msg,
        MeasurementMagneticField)();

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
