// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl generated
// code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.h"
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

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__init(
      message_memory);
}

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(
      message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_member_array
        [18] = {
            {
                "info",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                0,     // upper bound of string
                NULL,  // members of sub message (initialized later)
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    info), // bytes offset in struct
                NULL,      // default value
                NULL,      // size() function pointer
                NULL,      // get_const(index) function pointer
                NULL,      // get(index) function pointer
                NULL,      // fetch(index, &value) function pointer
                NULL,      // assign(index, value) function pointer
                NULL       // resize(index) function pointer
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
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    time_of_validity), // bytes offset in struct
                NULL,                  // default value
                NULL,                  // size() function pointer
                NULL,                  // get_const(index) function pointer
                NULL,                  // get(index) function pointer
                NULL,                  // fetch(index, &value) function pointer
                NULL,                  // assign(index, value) function pointer
                NULL                   // resize(index) function pointer
            },
            {
                "a_0",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    a_0), // bytes offset in struct
                NULL,     // default value
                NULL,     // size() function pointer
                NULL,     // get_const(index) function pointer
                NULL,     // get(index) function pointer
                NULL,     // fetch(index, &value) function pointer
                NULL,     // assign(index, value) function pointer
                NULL      // resize(index) function pointer
            },
            {
                "a_1",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    a_1), // bytes offset in struct
                NULL,     // default value
                NULL,     // size() function pointer
                NULL,     // get_const(index) function pointer
                NULL,     // get(index) function pointer
                NULL,     // fetch(index, &value) function pointer
                NULL,     // assign(index, value) function pointer
                NULL      // resize(index) function pointer
            },
            {
                "delta_t_ls",                                      // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    delta_t_ls), // bytes offset in struct
                NULL,            // default value
                NULL,            // size() function pointer
                NULL,            // get_const(index) function pointer
                NULL,            // get(index) function pointer
                NULL,            // fetch(index, &value) function pointer
                NULL,            // assign(index, value) function pointer
                NULL             // resize(index) function pointer
            },
            {
                "tot",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT32, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    tot), // bytes offset in struct
                NULL,     // default value
                NULL,     // size() function pointer
                NULL,     // get_const(index) function pointer
                NULL,     // get(index) function pointer
                NULL,     // fetch(index, &value) function pointer
                NULL,     // assign(index, value) function pointer
                NULL      // resize(index) function pointer
            },
            {
                "wn_t",                                             // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    wn_t), // bytes offset in struct
                NULL,      // default value
                NULL,      // size() function pointer
                NULL,      // get_const(index) function pointer
                NULL,      // get(index) function pointer
                NULL,      // fetch(index, &value) function pointer
                NULL,      // assign(index, value) function pointer
                NULL       // resize(index) function pointer
            },
            {
                "wn_lsf",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    wn_lsf), // bytes offset in struct
                NULL,        // default value
                NULL,        // size() function pointer
                NULL,        // get_const(index) function pointer
                NULL,        // get(index) function pointer
                NULL,        // fetch(index, &value) function pointer
                NULL,        // assign(index, value) function pointer
                NULL         // resize(index) function pointer
            },
            {
                "dn",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    dn), // bytes offset in struct
                NULL,    // default value
                NULL,    // size() function pointer
                NULL,    // get_const(index) function pointer
                NULL,    // get(index) function pointer
                NULL,    // fetch(index, &value) function pointer
                NULL,    // assign(index, value) function pointer
                NULL     // resize(index) function pointer
            },
            {
                "delta_t_lsf",                                     // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    delta_t_lsf), // bytes offset in struct
                NULL,             // default value
                NULL,             // size() function pointer
                NULL,             // get_const(index) function pointer
                NULL,             // get(index) function pointer
                NULL,             // fetch(index, &value) function pointer
                NULL,             // assign(index, value) function pointer
                NULL              // resize(index) function pointer
            },
            {
                "alpha_0",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    alpha_0), // bytes offset in struct
                NULL,         // default value
                NULL,         // size() function pointer
                NULL,         // get_const(index) function pointer
                NULL,         // get(index) function pointer
                NULL,         // fetch(index, &value) function pointer
                NULL,         // assign(index, value) function pointer
                NULL          // resize(index) function pointer
            },
            {
                "alpha_1",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    alpha_1), // bytes offset in struct
                NULL,         // default value
                NULL,         // size() function pointer
                NULL,         // get_const(index) function pointer
                NULL,         // get(index) function pointer
                NULL,         // fetch(index, &value) function pointer
                NULL,         // assign(index, value) function pointer
                NULL          // resize(index) function pointer
            },
            {
                "alpha_2",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    alpha_2), // bytes offset in struct
                NULL,         // default value
                NULL,         // size() function pointer
                NULL,         // get_const(index) function pointer
                NULL,         // get(index) function pointer
                NULL,         // fetch(index, &value) function pointer
                NULL,         // assign(index, value) function pointer
                NULL          // resize(index) function pointer
            },
            {
                "alpha_3",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    alpha_3), // bytes offset in struct
                NULL,         // default value
                NULL,         // size() function pointer
                NULL,         // get_const(index) function pointer
                NULL,         // get(index) function pointer
                NULL,         // fetch(index, &value) function pointer
                NULL,         // assign(index, value) function pointer
                NULL          // resize(index) function pointer
            },
            {
                "beta_0",                                            // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    beta_0), // bytes offset in struct
                NULL,        // default value
                NULL,        // size() function pointer
                NULL,        // get_const(index) function pointer
                NULL,        // get(index) function pointer
                NULL,        // fetch(index, &value) function pointer
                NULL,        // assign(index, value) function pointer
                NULL         // resize(index) function pointer
            },
            {
                "beta_1",                                            // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    beta_1), // bytes offset in struct
                NULL,        // default value
                NULL,        // size() function pointer
                NULL,        // get_const(index) function pointer
                NULL,        // get(index) function pointer
                NULL,        // fetch(index, &value) function pointer
                NULL,        // assign(index, value) function pointer
                NULL         // resize(index) function pointer
            },
            {
                "beta_2",                                            // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    beta_2), // bytes offset in struct
                NULL,        // default value
                NULL,        // size() function pointer
                NULL,        // get_const(index) function pointer
                NULL,        // get(index) function pointer
                NULL,        // fetch(index, &value) function pointer
                NULL,        // assign(index, value) function pointer
                NULL         // resize(index) function pointer
            },
            {
                "beta_3",                                            // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is key
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters,
                    beta_3), // bytes offset in struct
                NULL,        // default value
                NULL,        // size() function pointer
                NULL,        // get_const(index) function pointer
                NULL,        // get(index) function pointer
                NULL,        // fetch(index, &value) function pointer
                NULL,        // assign(index, value) function pointer
                NULL         // resize(index) function pointer
            }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_members =
        {
            "aspn23_ros_interfaces__msg",   // message namespace
            "MetadataGpsIonoUtcParameters", // message name
            18,                             // number of fields
            sizeof(aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters),
            false, // has_any_key_member_
            aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_member_array, // message members
            aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_members,
            get_message_typesupport_handle_function,
            &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_hash,
            &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description,
            &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
    MetadataGpsIonoUtcParameters)() {
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeMetadataheader)();
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  if (!aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__rosidl_typesupport_introspection_c__MetadataGpsIonoUtcParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
