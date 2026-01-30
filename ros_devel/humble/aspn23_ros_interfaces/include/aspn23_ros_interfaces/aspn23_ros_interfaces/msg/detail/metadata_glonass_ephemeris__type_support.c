// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl generated code
// does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__struct.h"
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

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__init(message_memory);
}

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_member_array
        [18] = {
            {
                "info",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                0,     // upper bound of string
                NULL,  // members of sub message (initialized later)
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
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
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         time_of_validity), // bytes offset in struct
                NULL,                       // default value
                NULL,                       // size() function pointer
                NULL,                       // get_const(index) function pointer
                NULL,                       // get(index) function pointer
                NULL, // fetch(index, &value) function pointer
                NULL, // assign(index, value) function pointer
                NULL  // resize(index) function pointer
            },
            {
                "slot_number",                                      // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         slot_number), // bytes offset in struct
                NULL,                  // default value
                NULL,                  // size() function pointer
                NULL,                  // get_const(index) function pointer
                NULL,                  // get(index) function pointer
                NULL,                  // fetch(index, &value) function pointer
                NULL,                  // assign(index, value) function pointer
                NULL                   // resize(index) function pointer
            },
            {
                "freq_o",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         freq_o), // bytes offset in struct
                NULL,             // default value
                NULL,             // size() function pointer
                NULL,             // get_const(index) function pointer
                NULL,             // get(index) function pointer
                NULL,             // fetch(index, &value) function pointer
                NULL,             // assign(index, value) function pointer
                NULL              // resize(index) function pointer
            },
            {
                "n_t",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         n_t), // bytes offset in struct
                NULL,          // default value
                NULL,          // size() function pointer
                NULL,          // get_const(index) function pointer
                NULL,          // get(index) function pointer
                NULL,          // fetch(index, &value) function pointer
                NULL,          // assign(index, value) function pointer
                NULL           // resize(index) function pointer
            },
            {
                "t_k",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         t_k), // bytes offset in struct
                NULL,          // default value
                NULL,          // size() function pointer
                NULL,          // get_const(index) function pointer
                NULL,          // get(index) function pointer
                NULL,          // fetch(index, &value) function pointer
                NULL,          // assign(index, value) function pointer
                NULL           // resize(index) function pointer
            },
            {
                "t_b",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         t_b), // bytes offset in struct
                NULL,          // default value
                NULL,          // size() function pointer
                NULL,          // get_const(index) function pointer
                NULL,          // get(index) function pointer
                NULL,          // fetch(index, &value) function pointer
                NULL,          // assign(index, value) function pointer
                NULL           // resize(index) function pointer
            },
            {
                "gamma_n",                                           // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         gamma_n), // bytes offset in struct
                NULL,              // default value
                NULL,              // size() function pointer
                NULL,              // get_const(index) function pointer
                NULL,              // get(index) function pointer
                NULL,              // fetch(index, &value) function pointer
                NULL,              // assign(index, value) function pointer
                NULL               // resize(index) function pointer
            },
            {
                "tau_n",                                             // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         tau_n), // bytes offset in struct
                NULL,            // default value
                NULL,            // size() function pointer
                NULL,            // get_const(index) function pointer
                NULL,            // get(index) function pointer
                NULL,            // fetch(index, &value) function pointer
                NULL,            // assign(index, value) function pointer
                NULL             // resize(index) function pointer
            },
            {
                "sv_pos_x",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_pos_x), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_vel_x",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_vel_x), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_accel_x",                                        // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_accel_x), // bytes offset in struct
                NULL,                 // default value
                NULL,                 // size() function pointer
                NULL,                 // get_const(index) function pointer
                NULL,                 // get(index) function pointer
                NULL,                 // fetch(index, &value) function pointer
                NULL,                 // assign(index, value) function pointer
                NULL                  // resize(index) function pointer
            },
            {
                "sv_pos_y",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_pos_y), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_vel_y",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_vel_y), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_accel_y",                                        // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_accel_y), // bytes offset in struct
                NULL,                 // default value
                NULL,                 // size() function pointer
                NULL,                 // get_const(index) function pointer
                NULL,                 // get(index) function pointer
                NULL,                 // fetch(index, &value) function pointer
                NULL,                 // assign(index, value) function pointer
                NULL                  // resize(index) function pointer
            },
            {
                "sv_pos_z",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_pos_z), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_vel_z",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_vel_z), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "sv_accel_z",                                        // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris,
                         sv_accel_z), // bytes offset in struct
                NULL,                 // default value
                NULL,                 // size() function pointer
                NULL,                 // get_const(index) function pointer
                NULL,                 // get(index) function pointer
                NULL,                 // fetch(index, &value) function pointer
                NULL,                 // assign(index, value) function pointer
                NULL                  // resize(index) function pointer
            }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "MetadataGlonassEphemeris",   // message name
            18,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris),
            aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_member_array, // message members
            aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MetadataGlonassEphemeris)() {
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeMetadataheader)();
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  if (!aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__rosidl_typesupport_introspection_c__MetadataGlonassEphemeris_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
