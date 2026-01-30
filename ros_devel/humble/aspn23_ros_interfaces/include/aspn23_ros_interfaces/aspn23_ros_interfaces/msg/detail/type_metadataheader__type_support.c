// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/TypeMetadataheader.idl generated code does not
// contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
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
// Member `sensor_description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__TypeMetadataheader__init(message_memory);
}

void aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember
    aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_member_array
        [5] = {{
                   "header",                                             // name
                   rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                   0,     // upper bound of string
                   NULL,  // members of sub message (initialized later)
                   false, // is array
                   0,     // array size
                   false, // is upper bound
                   offsetof(aspn23_ros_interfaces__msg__TypeMetadataheader,
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
                   "sensor_description",                                // name
                   rosidl_typesupport_introspection_c__ROS_TYPE_STRING, // type
                   0,     // upper bound of string
                   NULL,  // members of sub message
                   false, // is array
                   0,     // array size
                   false, // is upper bound
                   offsetof(aspn23_ros_interfaces__msg__TypeMetadataheader,
                            sensor_description), // bytes offset in struct
                   NULL,                         // default value
                   NULL,                         // size() function pointer
                   NULL, // get_const(index) function pointer
                   NULL, // get(index) function pointer
                   NULL, // fetch(index, &value) function pointer
                   NULL, // assign(index, value) function pointer
                   NULL  // resize(index) function pointer
               },
               {
                   "delta_t_nom",                                       // name
                   rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                   0,     // upper bound of string
                   NULL,  // members of sub message
                   false, // is array
                   0,     // array size
                   false, // is upper bound
                   offsetof(aspn23_ros_interfaces__msg__TypeMetadataheader,
                            delta_t_nom), // bytes offset in struct
                   NULL,                  // default value
                   NULL,                  // size() function pointer
                   NULL,                  // get_const(index) function pointer
                   NULL,                  // get(index) function pointer
                   NULL, // fetch(index, &value) function pointer
                   NULL, // assign(index, value) function pointer
                   NULL  // resize(index) function pointer
               },
               {
                   "timestamp_clock_id",                               // name
                   rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                   0,     // upper bound of string
                   NULL,  // members of sub message
                   false, // is array
                   0,     // array size
                   false, // is upper bound
                   offsetof(aspn23_ros_interfaces__msg__TypeMetadataheader,
                            timestamp_clock_id), // bytes offset in struct
                   NULL,                         // default value
                   NULL,                         // size() function pointer
                   NULL, // get_const(index) function pointer
                   NULL, // get(index) function pointer
                   NULL, // fetch(index, &value) function pointer
                   NULL, // assign(index, value) function pointer
                   NULL  // resize(index) function pointer
               },
               {
                   "digits_of_precision",                              // name
                   rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                   0,     // upper bound of string
                   NULL,  // members of sub message
                   false, // is array
                   0,     // array size
                   false, // is upper bound
                   offsetof(aspn23_ros_interfaces__msg__TypeMetadataheader,
                            digits_of_precision), // bytes offset in struct
                   NULL,                          // default value
                   NULL,                          // size() function pointer
                   NULL, // get_const(index) function pointer
                   NULL, // get(index) function pointer
                   NULL, // fetch(index, &value) function pointer
                   NULL, // assign(index, value) function pointer
                   NULL  // resize(index) function pointer
               }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "TypeMetadataheader",         // message name
            5,                            // number of fields
            sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader),
            aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_member_array, // message members
            aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        TypeMetadataheader)() {
  aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeHeader)();
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__TypeMetadataheader__rosidl_typesupport_introspection_c__TypeMetadataheader_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
