// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MeasurementImage.idl generated code does not
// contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_image__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_image__struct.h"
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
// Member `image_data`
// Member `model_coefficients`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/type_integrity.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MeasurementImage__init(message_memory);
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MeasurementImage__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__image_data(
    const void *untyped_member) {
  const rosidl_runtime_c__uint8__Sequence *member =
      (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__image_data(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__uint8__Sequence *member =
      (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__image_data(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__uint8__Sequence *member =
      (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__image_data(
    const void *untyped_member, size_t index, void *untyped_value) {
  const uint8_t *item =
      ((const uint8_t *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__image_data(
               untyped_member, index));
  uint8_t *value = (uint8_t *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__image_data(
    void *untyped_member, size_t index, const void *untyped_value) {
  uint8_t *item =
      ((uint8_t *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__image_data(
               untyped_member, index));
  const uint8_t *value = (const uint8_t *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__image_data(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__uint8__Sequence *member =
      (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__model_coefficients(
    const void *untyped_member) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__model_coefficients(
    const void *untyped_member, size_t index) {
  const rosidl_runtime_c__double__Sequence *member =
      (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__model_coefficients(
    void *untyped_member, size_t index) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__model_coefficients(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__model_coefficients(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__model_coefficients(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__model_coefficients(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__model_coefficients(
    void *untyped_member, size_t size) {
  rosidl_runtime_c__double__Sequence *member =
      (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__integrity(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__integrity(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__integrity(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((const aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__integrity(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__integrity(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (const aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__integrity(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(member,
                                                                   size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_member_array
    [13] = {
        {
            "header",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
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
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
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
            "height",                                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     height), // bytes offset in struct
            NULL,             // default value
            NULL,             // size() function pointer
            NULL,             // get_const(index) function pointer
            NULL,             // get(index) function pointer
            NULL,             // fetch(index, &value) function pointer
            NULL,             // assign(index, value) function pointer
            NULL              // resize(index) function pointer
        },
        {
            "width",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     width), // bytes offset in struct
            NULL,            // default value
            NULL,            // size() function pointer
            NULL,            // get_const(index) function pointer
            NULL,            // get(index) function pointer
            NULL,            // fetch(index, &value) function pointer
            NULL,            // assign(index, value) function pointer
            NULL             // resize(index) function pointer
        },
        {
            "is_bigendian",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     is_bigendian), // bytes offset in struct
            NULL,                   // default value
            NULL,                   // size() function pointer
            NULL,                   // get_const(index) function pointer
            NULL,                   // get(index) function pointer
            NULL,                   // fetch(index, &value) function pointer
            NULL,                   // assign(index, value) function pointer
            NULL                    // resize(index) function pointer
        },
        {
            "image_type",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     image_type), // bytes offset in struct
            NULL,                 // default value
            NULL,                 // size() function pointer
            NULL,                 // get_const(index) function pointer
            NULL,                 // get(index) function pointer
            NULL,                 // fetch(index, &value) function pointer
            NULL,                 // assign(index, value) function pointer
            NULL                  // resize(index) function pointer
        },
        {
            "image_data_length",                                 // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT64, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     image_data_length), // bytes offset in struct
            NULL,                        // default value
            NULL,                        // size() function pointer
            NULL,                        // get_const(index) function pointer
            NULL,                        // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "image_data",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     image_data), // bytes offset in struct
            NULL,                 // default value
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__image_data, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__image_data, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__image_data, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__image_data, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__image_data, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__image_data // resize(index) function pointer
        },
        {
            "camera_model",                                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     camera_model), // bytes offset in struct
            NULL,                   // default value
            NULL,                   // size() function pointer
            NULL,                   // get_const(index) function pointer
            NULL,                   // get(index) function pointer
            NULL,                   // fetch(index, &value) function pointer
            NULL,                   // assign(index, value) function pointer
            NULL                    // resize(index) function pointer
        },
        {
            "num_model_coefficients",                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     num_model_coefficients), // bytes offset in struct
            NULL,                             // default value
            NULL,                             // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "model_coefficients",                                // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            true,  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     model_coefficients), // bytes offset in struct
            NULL,                         // default value
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__model_coefficients, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__model_coefficients, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__model_coefficients, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__model_coefficients, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__model_coefficients, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__model_coefficients // resize(index) function pointer
        },
        {
            "num_integrity",                                    // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
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
            offsetof(aspn23_ros_interfaces__msg__MeasurementImage,
                     integrity), // bytes offset in struct
            NULL,                // default value
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__size_function__MeasurementImage__integrity, // size() function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_const_function__MeasurementImage__integrity, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__get_function__MeasurementImage__integrity, // get(index) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__fetch_function__MeasurementImage__integrity, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__assign_function__MeasurementImage__integrity, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__resize_function__MeasurementImage__integrity // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "MeasurementImage",           // message name
            13,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__MeasurementImage),
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_member_array, // message members
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MeasurementImage)() {
  aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_member_array
      [12]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeIntegrity)();
  if (!aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MeasurementImage__rosidl_typesupport_introspection_c__MeasurementImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
