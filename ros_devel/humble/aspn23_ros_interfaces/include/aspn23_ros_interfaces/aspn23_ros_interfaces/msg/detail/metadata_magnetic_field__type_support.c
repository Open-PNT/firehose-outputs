// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MetadataMagneticField.idl generated code does
// not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__struct.h"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include <stddef.h>

// Include directives for member types
// Member `info`
#include "aspn23_ros_interfaces/msg/type_metadataheader.h"
// Member `info`
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__rosidl_typesupport_introspection_c.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/type_timestamp.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__rosidl_typesupport_introspection_c.h"
// Member `mounting`
#include "aspn23_ros_interfaces/msg/type_mounting.h"
// Member `mounting`
#include "aspn23_ros_interfaces/msg/detail/type_mounting__rosidl_typesupport_introspection_c.h"
// Member `k`
// Member `b`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MetadataMagneticField__init(message_memory);
}

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MetadataMagneticField__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__size_function__MetadataMagneticField__k(
    const void *untyped_member) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__k(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__k(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__fetch_function__MetadataMagneticField__k(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__k(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__assign_function__MetadataMagneticField__k(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__k(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__resize_function__MetadataMagneticField__k(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__size_function__MetadataMagneticField__b(
    const void *untyped_member) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__b(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__b(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__fetch_function__MetadataMagneticField__b(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__b(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__assign_function__MetadataMagneticField__b(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__b(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__resize_function__MetadataMagneticField__b(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_member_array
    [6] = {
        {
            "info",                                               // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
                     info), // bytes offset in struct
            NULL,           // default value
            NULL,           // size() function pointer
            NULL,           // get_const(index) function pointer
            NULL,           // get(index) function pointer
            NULL,           // fetch(index, &value) function pointer
            NULL,           // assign(index, value) function pointer
            NULL            // resize(index) function pointer
        },
        {
            "time_of_validity",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
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
            "mounting",                                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
                     mounting), // bytes offset in struct
            NULL,               // default value
            NULL,               // size() function pointer
            NULL,               // get_const(index) function pointer
            NULL,               // get(index) function pointer
            NULL,               // fetch(index, &value) function pointer
            NULL,               // assign(index, value) function pointer
            NULL                // resize(index) function pointer
        },
        {
            "num_meas",                                         // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
                     num_meas), // bytes offset in struct
            NULL,               // default value
            NULL,               // size() function pointer
            NULL,               // get_const(index) function pointer
            NULL,               // get(index) function pointer
            NULL,               // fetch(index, &value) function pointer
            NULL,               // assign(index, value) function pointer
            NULL                // resize(index) function pointer
        },
        {
            "k",                                                 // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
                     k), // bytes offset in struct
            NULL,        // default value
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__size_function__MetadataMagneticField__k, // size() function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__k, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__k, // get(index) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__fetch_function__MetadataMagneticField__k, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__assign_function__MetadataMagneticField__k, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__resize_function__MetadataMagneticField__k // resize(index) function pointer
        },
        {
            "b",                                                 // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MetadataMagneticField,
                     b), // bytes offset in struct
            NULL,        // default value
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__size_function__MetadataMagneticField__b, // size() function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_const_function__MetadataMagneticField__b, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__get_function__MetadataMagneticField__b, // get(index) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__fetch_function__MetadataMagneticField__b, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__assign_function__MetadataMagneticField__b, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__resize_function__MetadataMagneticField__b // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "MetadataMagneticField",      // message name
            6,                            // number of fields
            sizeof(aspn23_ros_interfaces__msg__MetadataMagneticField),
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_member_array, // message members
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MetadataMagneticField)() {
  aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeMetadataheader)();
  aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_member_array
      [2]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeMounting)();
  if (!aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MetadataMagneticField__rosidl_typesupport_introspection_c__MetadataMagneticField_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
