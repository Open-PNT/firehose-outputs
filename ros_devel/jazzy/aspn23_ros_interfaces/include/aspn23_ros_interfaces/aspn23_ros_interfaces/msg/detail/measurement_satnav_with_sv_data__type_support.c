// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl generated code
// does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__struct.h"
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
// Member `receiver_clock_time`
#include "aspn23_ros_interfaces/msg/type_satnav_time.h"
// Member `receiver_clock_time`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__rosidl_typesupport_introspection_c.h"
// Member `obs`
#include "aspn23_ros_interfaces/msg/type_satnav_obs.h"
// Member `obs`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__rosidl_typesupport_introspection_c.h"
// Member `sv_data`
#include "aspn23_ros_interfaces/msg/type_satnav_sv_data.h"
// Member `sv_data`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__rosidl_typesupport_introspection_c.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/type_integrity.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__init(message_memory);
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__obs(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__obs(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__obs(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__obs(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeSatnavObs *item =
      ((const aspn23_ros_interfaces__msg__TypeSatnavObs *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__obs(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeSatnavObs *value =
      (aspn23_ros_interfaces__msg__TypeSatnavObs *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__obs(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeSatnavObs *item =
      ((aspn23_ros_interfaces__msg__TypeSatnavObs *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__obs(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeSatnavObs *value =
      (const aspn23_ros_interfaces__msg__TypeSatnavObs *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__obs(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__init(member,
                                                                   size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__sv_data(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeSatnavSvData *item =
      ((const aspn23_ros_interfaces__msg__TypeSatnavSvData *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__sv_data(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeSatnavSvData *value =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__sv_data(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeSatnavSvData *item =
      ((aspn23_ros_interfaces__msg__TypeSatnavSvData *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__sv_data(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeSatnavSvData *value =
      (const aspn23_ros_interfaces__msg__TypeSatnavSvData *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__sv_data(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence
           *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__init(member,
                                                                      size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__integrity(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((const aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__integrity(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__integrity(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (const aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__integrity(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(member,
                                                                   size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array[9] =
    {{
         "header",                                             // name
         rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
         0,     // upper bound of string
         NULL,  // members of sub message (initialized later)
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
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
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
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
         "receiver_clock_time",                                // name
         rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
         0,     // upper bound of string
         NULL,  // members of sub message (initialized later)
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  receiver_clock_time), // bytes offset in struct
         NULL,                          // default value
         NULL,                          // size() function pointer
         NULL,                          // get_const(index) function pointer
         NULL,                          // get(index) function pointer
         NULL,                          // fetch(index, &value) function pointer
         NULL,                          // assign(index, value) function pointer
         NULL                           // resize(index) function pointer
     },
     {
         "num_signal_types",                                  // name
         rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
         0,     // upper bound of string
         NULL,  // members of sub message
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  num_signal_types), // bytes offset in struct
         NULL,                       // default value
         NULL,                       // size() function pointer
         NULL,                       // get_const(index) function pointer
         NULL,                       // get(index) function pointer
         NULL,                       // fetch(index, &value) function pointer
         NULL,                       // assign(index, value) function pointer
         NULL                        // resize(index) function pointer
     },
     {
         "num_signals_tracked",                               // name
         rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
         0,     // upper bound of string
         NULL,  // members of sub message
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  num_signals_tracked), // bytes offset in struct
         NULL,                          // default value
         NULL,                          // size() function pointer
         NULL,                          // get_const(index) function pointer
         NULL,                          // get(index) function pointer
         NULL,                          // fetch(index, &value) function pointer
         NULL,                          // assign(index, value) function pointer
         NULL                           // resize(index) function pointer
     },
     {
         "obs",                                                // name
         rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
         0,     // upper bound of string
         NULL,  // members of sub message (initialized later)
         false, // is key
         true,  // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  obs), // bytes offset in struct
         NULL,          // default value
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__obs, // size() function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__obs, // get_const(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__obs, // get(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__obs, // fetch(index, &value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__obs, // assign(index, value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__obs // resize(index) function pointer
     },
     {
         "sv_data",                                            // name
         rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
         0,     // upper bound of string
         NULL,  // members of sub message (initialized later)
         false, // is key
         true,  // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  sv_data), // bytes offset in struct
         NULL,              // default value
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__sv_data, // size() function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__sv_data, // get_const(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__sv_data, // get(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__sv_data, // fetch(index, &value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__sv_data, // assign(index, value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__sv_data // resize(index) function pointer
     },
     {
         "num_integrity",                                    // name
         rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
         0,     // upper bound of string
         NULL,  // members of sub message
         false, // is key
         false, // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
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
         false, // is key
         true,  // is array
         0,     // array size
         false, // is upper bound
         offsetof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData,
                  integrity), // bytes offset in struct
         NULL,                // default value
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__size_function__MeasurementSatnavWithSvData__integrity, // size() function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_const_function__MeasurementSatnavWithSvData__integrity, // get_const(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__get_function__MeasurementSatnavWithSvData__integrity, // get(index) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__fetch_function__MeasurementSatnavWithSvData__integrity, // fetch(index, &value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__assign_function__MeasurementSatnavWithSvData__integrity, // assign(index, value) function pointer
         aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__resize_function__MeasurementSatnavWithSvData__integrity // resize(index) function pointer
     }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_members =
        {
            "aspn23_ros_interfaces__msg",  // message namespace
            "MeasurementSatnavWithSvData", // message name
            9,                             // number of fields
            sizeof(aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData),
            false, // has_any_key_member_
            aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array, // message members
            aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_members,
            get_message_typesupport_handle_function,
            &aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_hash,
            &aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_description,
            &aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
    MeasurementSatnavWithSvData)() {
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [2]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavTime)();
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [5]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavObs)();
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [6]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavSvData)();
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_member_array
      [8]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeIntegrity)();
  if (!aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__rosidl_typesupport_introspection_c__MeasurementSatnavWithSvData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
