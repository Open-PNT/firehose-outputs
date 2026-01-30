// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl generated code
// does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_subframe__struct.h"
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
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/type_satnav_satellite_system.h"
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__rosidl_typesupport_introspection_c.h"
// Member `data_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/type_integrity.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__init(message_memory);
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavSubframe__data_vector(
    const void *untyped_member) {
  const rosidl_runtime_c__int8__Sequence *member =
      (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__data_vector(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__int8__Sequence *member =
      (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__data_vector(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__int8__Sequence *member =
      (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavSubframe__data_vector(
    const void *untyped_member, size_t index, void *untyped_value) {
  const int8_t *item =
      ((const int8_t *)
           aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__data_vector(
               untyped_member, index));
  int8_t *value = (int8_t *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavSubframe__data_vector(
    void *untyped_member, size_t index, const void *untyped_value) {
  int8_t *item =
      ((int8_t *)
           aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__data_vector(
               untyped_member, index));
  const int8_t *value = (const int8_t *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavSubframe__data_vector(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__int8__Sequence *member =
      (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavSubframe__integrity(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__integrity(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__integrity(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavSubframe__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((const aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__integrity(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavSubframe__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__integrity(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (const aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavSubframe__integrity(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(member,
                                                                   size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array
    [10] = {
        {
            "header",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
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
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
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
            "gnss_message_id",                                  // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT64, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     gnss_message_id), // bytes offset in struct
            NULL,                      // default value
            NULL,                      // size() function pointer
            NULL,                      // get_const(index) function pointer
            NULL,                      // get(index) function pointer
            NULL,                      // fetch(index, &value) function pointer
            NULL,                      // assign(index, value) function pointer
            NULL                       // resize(index) function pointer
        },
        {
            "prn",                                              // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     prn), // bytes offset in struct
            NULL,          // default value
            NULL,          // size() function pointer
            NULL,          // get_const(index) function pointer
            NULL,          // get(index) function pointer
            NULL,          // fetch(index, &value) function pointer
            NULL,          // assign(index, value) function pointer
            NULL           // resize(index) function pointer
        },
        {
            "satellite_system",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     satellite_system), // bytes offset in struct
            NULL,                       // default value
            NULL,                       // size() function pointer
            NULL,                       // get_const(index) function pointer
            NULL,                       // get(index) function pointer
            NULL,                       // fetch(index, &value) function pointer
            NULL,                       // assign(index, value) function pointer
            NULL                        // resize(index) function pointer
        },
        {
            "freq_slot_id",                                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     freq_slot_id), // bytes offset in struct
            NULL,                   // default value
            NULL,                   // size() function pointer
            NULL,                   // get_const(index) function pointer
            NULL,                   // get(index) function pointer
            NULL,                   // fetch(index, &value) function pointer
            NULL,                   // assign(index, value) function pointer
            NULL                    // resize(index) function pointer
        },
        {
            "num_bytes",                                         // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     num_bytes), // bytes offset in struct
            NULL,                // default value
            NULL,                // size() function pointer
            NULL,                // get_const(index) function pointer
            NULL,                // get(index) function pointer
            NULL,                // fetch(index, &value) function pointer
            NULL,                // assign(index, value) function pointer
            NULL                 // resize(index) function pointer
        },
        {
            "data_vector",                                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     data_vector), // bytes offset in struct
            NULL,                  // default value
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavSubframe__data_vector, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__data_vector, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__data_vector, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavSubframe__data_vector, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavSubframe__data_vector, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavSubframe__data_vector // resize(index) function pointer
        },
        {
            "num_integrity",                                    // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     num_integrity), // bytes offset in struct
            NULL,                    // default value
            NULL,                    // size() function pointer
            NULL,                    // get_const(index) function pointer
            NULL,                    // get(index) function pointer
            NULL,                    // fetch(index, &value) function pointer
            NULL,                    // assign(index, value) function pointer
            NULL                     // resize(index) function pointer
        },
        {
            "integrity",                                          // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe,
                     integrity), // bytes offset in struct
            NULL,                // default value
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavSubframe__integrity, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavSubframe__integrity, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavSubframe__integrity, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavSubframe__integrity, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavSubframe__integrity, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavSubframe__integrity // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "MeasurementSatnavSubframe",  // message name
            10,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavSubframe),
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array, // message members
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MeasurementSatnavSubframe)() {
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array
      [4]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavSatelliteSystem)();
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_member_array
      [9]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeIntegrity)();
  if (!aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__rosidl_typesupport_introspection_c__MeasurementSatnavSubframe_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
