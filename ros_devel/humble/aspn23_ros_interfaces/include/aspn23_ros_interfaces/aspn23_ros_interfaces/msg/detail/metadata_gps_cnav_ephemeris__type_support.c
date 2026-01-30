// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/MetadataGpsCnavEphemeris.idl generated code
// does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__struct.h"
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
// Member `clock`
#include "aspn23_ros_interfaces/msg/type_satnav_clock.h"
// Member `clock`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__rosidl_typesupport_introspection_c.h"
// Member `orbit`
#include "aspn23_ros_interfaces/msg/type_kepler_orbit.h"
// Member `orbit`
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__init(message_memory);
}

void aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array
        [15] = {
            {
                "info",                                               // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                0,     // upper bound of string
                NULL,  // members of sub message (initialized later)
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
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
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
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
                "week_number",                                       // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         week_number), // bytes offset in struct
                NULL,                  // default value
                NULL,                  // size() function pointer
                NULL,                  // get_const(index) function pointer
                NULL,                  // get(index) function pointer
                NULL,                  // fetch(index, &value) function pointer
                NULL,                  // assign(index, value) function pointer
                NULL                   // resize(index) function pointer
            },
            {
                "prn",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
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
                "clock",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                0,     // upper bound of string
                NULL,  // members of sub message (initialized later)
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         clock), // bytes offset in struct
                NULL,            // default value
                NULL,            // size() function pointer
                NULL,            // get_const(index) function pointer
                NULL,            // get(index) function pointer
                NULL,            // fetch(index, &value) function pointer
                NULL,            // assign(index, value) function pointer
                NULL             // resize(index) function pointer
            },
            {
                "orbit",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
                0,     // upper bound of string
                NULL,  // members of sub message (initialized later)
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         orbit), // bytes offset in struct
                NULL,            // default value
                NULL,            // size() function pointer
                NULL,            // get_const(index) function pointer
                NULL,            // get(index) function pointer
                NULL,            // fetch(index, &value) function pointer
                NULL,            // assign(index, value) function pointer
                NULL             // resize(index) function pointer
            },
            {
                "t_gd",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         t_gd), // bytes offset in struct
                NULL,           // default value
                NULL,           // size() function pointer
                NULL,           // get_const(index) function pointer
                NULL,           // get(index) function pointer
                NULL,           // fetch(index, &value) function pointer
                NULL,           // assign(index, value) function pointer
                NULL            // resize(index) function pointer
            },
            {
                "iodc",                                              // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT16, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         iodc), // bytes offset in struct
                NULL,           // default value
                NULL,           // size() function pointer
                NULL,           // get_const(index) function pointer
                NULL,           // get(index) function pointer
                NULL,           // fetch(index, &value) function pointer
                NULL,           // assign(index, value) function pointer
                NULL            // resize(index) function pointer
            },
            {
                "iode",                                             // name
                rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         iode), // bytes offset in struct
                NULL,           // default value
                NULL,           // size() function pointer
                NULL,           // get_const(index) function pointer
                NULL,           // get(index) function pointer
                NULL,           // fetch(index, &value) function pointer
                NULL,           // assign(index, value) function pointer
                NULL            // resize(index) function pointer
            },
            {
                "isc_l1_ca",                                         // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         isc_l1_ca), // bytes offset in struct
                NULL,                // default value
                NULL,                // size() function pointer
                NULL,                // get_const(index) function pointer
                NULL,                // get(index) function pointer
                NULL,                // fetch(index, &value) function pointer
                NULL,                // assign(index, value) function pointer
                NULL                 // resize(index) function pointer
            },
            {
                "isc_l2_c",                                          // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         isc_l2_c), // bytes offset in struct
                NULL,               // default value
                NULL,               // size() function pointer
                NULL,               // get_const(index) function pointer
                NULL,               // get(index) function pointer
                NULL,               // fetch(index, &value) function pointer
                NULL,               // assign(index, value) function pointer
                NULL                // resize(index) function pointer
            },
            {
                "isc_l5_i5",                                         // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         isc_l5_i5), // bytes offset in struct
                NULL,                // default value
                NULL,                // size() function pointer
                NULL,                // get_const(index) function pointer
                NULL,                // get(index) function pointer
                NULL,                // fetch(index, &value) function pointer
                NULL,                // assign(index, value) function pointer
                NULL                 // resize(index) function pointer
            },
            {
                "isc_l5_q5",                                         // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         isc_l5_q5), // bytes offset in struct
                NULL,                // default value
                NULL,                // size() function pointer
                NULL,                // get_const(index) function pointer
                NULL,                // get(index) function pointer
                NULL,                // fetch(index, &value) function pointer
                NULL,                // assign(index, value) function pointer
                NULL                 // resize(index) function pointer
            },
            {
                "delta_a_0",                                         // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         delta_a_0), // bytes offset in struct
                NULL,                // default value
                NULL,                // size() function pointer
                NULL,                // get_const(index) function pointer
                NULL,                // get(index) function pointer
                NULL,                // fetch(index, &value) function pointer
                NULL,                // assign(index, value) function pointer
                NULL                 // resize(index) function pointer
            },
            {
                "a_dot",                                             // name
                rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
                0,     // upper bound of string
                NULL,  // members of sub message
                false, // is array
                0,     // array size
                false, // is upper bound
                offsetof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris,
                         a_dot), // bytes offset in struct
                NULL,            // default value
                NULL,            // size() function pointer
                NULL,            // get_const(index) function pointer
                NULL,            // get(index) function pointer
                NULL,            // fetch(index, &value) function pointer
                NULL,            // assign(index, value) function pointer
                NULL             // resize(index) function pointer
            }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "MetadataGpsCnavEphemeris",   // message name
            15,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris),
            aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array, // message members
            aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_members,
            get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const
    rosidl_message_type_support_t *
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
        MetadataGpsCnavEphemeris)() {
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeMetadataheader)();
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeTimestamp)();
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array
      [4]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavClock)();
  aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_member_array
      [5]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeKeplerOrbit)();
  if (!aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__rosidl_typesupport_introspection_c__MetadataGpsCnavEphemeris_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
