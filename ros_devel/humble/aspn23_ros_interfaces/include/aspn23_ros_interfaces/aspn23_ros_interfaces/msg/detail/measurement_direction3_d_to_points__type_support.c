// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MeasurementDirection3DToPoints.idl generated
// code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction3_d_to_points__struct.h"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include <stddef.h>

// Include directives for member types
// Member `header`
#include "aspn23_ros_interfaces/msg/type_header.h"
// Member `header`
#include "aspn23_ros_interfaces/msg/detail/type_header__rosidl_typesupport_introspection_c.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/type_timestamp.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__rosidl_typesupport_introspection_c.h"
// Member `obs`
#include "aspn23_ros_interfaces/msg/type_direction3_d_to_point.h"
// Member `obs`
#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__init(
      message_memory);
}

void aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__fini(
      message_memory);
}

size_t
aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__size_function__MeasurementDirection3DToPoints__obs(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_const_function__MeasurementDirection3DToPoints__obs(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_function__MeasurementDirection3DToPoints__obs(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__fetch_function__MeasurementDirection3DToPoints__obs(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *item =
      ((const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)
           aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_const_function__MeasurementDirection3DToPoints__obs(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *value =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__assign_function__MeasurementDirection3DToPoints__obs(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *item =
      ((aspn23_ros_interfaces__msg__TypeDirection3DToPoint *)
           aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_function__MeasurementDirection3DToPoints__obs(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeDirection3DToPoint *value =
      (const aspn23_ros_interfaces__msg__TypeDirection3DToPoint
           *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__resize_function__MeasurementDirection3DToPoints__obs(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence
           *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence__init(
      member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_member_array
    [4] = {
        {
            "header",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints,
                     header), // bytes offset in struct
            NULL,             // default value
            NULL,             // size() function pointer
            NULL,             // get_const(index) function pointer
            NULL,             // get(index) function pointer
            NULL,             // fetch(index, &value) function pointer
            NULL,             // assign(index, value) function pointer
            NULL              // resize(index) function pointer
        },
        {
            "time_of_validity",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints,
                     time_of_validity), // bytes offset in struct
            NULL,                       // default value
            NULL,                       // size() function pointer
            NULL,                       // get_const(index) function pointer
            NULL,                       // get(index) function pointer
            NULL,                       // fetch(index, &value) function pointer
            NULL,                       // assign(index, value) function pointer
            NULL                        // resize(index) function pointer
        },
        {
            "num_obs",                                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints,
                     num_obs), // bytes offset in struct
            NULL,              // default value
            NULL,              // size() function pointer
            NULL,              // get_const(index) function pointer
            NULL,              // get(index) function pointer
            NULL,              // fetch(index, &value) function pointer
            NULL,              // assign(index, value) function pointer
            NULL               // resize(index) function pointer
        },
        {
            "obs",                                                // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints,
                     obs), // bytes offset in struct
            NULL,          // default value
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__size_function__MeasurementDirection3DToPoints__obs, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_const_function__MeasurementDirection3DToPoints__obs, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__get_function__MeasurementDirection3DToPoints__obs, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__fetch_function__MeasurementDirection3DToPoints__obs, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__assign_function__MeasurementDirection3DToPoints__obs, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__resize_function__MeasurementDirection3DToPoints__obs // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_members =
        {
            "aspn23_ros_interfaces__msg",     // message namespace
            "MeasurementDirection3DToPoints", // message name
            4,                                // number of fields
            sizeof(aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints),
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_member_array, // message members
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MeasurementDirection3DToPoints)() {
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_member_array
      [3]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeDirection3DToPoint)();
  if (!aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints__rosidl_typesupport_introspection_c__MeasurementDirection3DToPoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
