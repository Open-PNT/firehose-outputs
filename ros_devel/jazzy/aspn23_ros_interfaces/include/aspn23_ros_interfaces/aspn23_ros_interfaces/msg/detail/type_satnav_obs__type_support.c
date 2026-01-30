// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/TypeSatnavObs.idl generated code does not
// contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.h"
#include "aspn23_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include <stddef.h>

// Include directives for member types
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/type_satnav_satellite_system.h"
// Member `satellite_system`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__rosidl_typesupport_introspection_c.h"
// Member `signal_descriptor`
#include "aspn23_ros_interfaces/msg/type_satnav_signal_descriptor.h"
// Member `signal_descriptor`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__rosidl_typesupport_introspection_c.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/type_integrity.h"
// Member `integrity`
#include "aspn23_ros_interfaces/msg/detail/type_integrity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__TypeSatnavObs__init(message_memory);
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__TypeSatnavObs__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__size_function__TypeSatnavObs__integrity(
    const void *untyped_member) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return member->size;
}

const void *
aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavObs__integrity(
    const void *untyped_member, size_t index) {
  const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence
           *)(untyped_member);
  return &member->data[index];
}

void *
aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_function__TypeSatnavObs__integrity(
    void *untyped_member, size_t index) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  return &member->data[index];
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavObs__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((const aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavObs__integrity(
               untyped_member, index));
  aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__assign_function__TypeSatnavObs__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  aspn23_ros_interfaces__msg__TypeIntegrity *item =
      ((aspn23_ros_interfaces__msg__TypeIntegrity *)
           aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_function__TypeSatnavObs__integrity(
               untyped_member, index));
  const aspn23_ros_interfaces__msg__TypeIntegrity *value =
      (const aspn23_ros_interfaces__msg__TypeIntegrity *)(untyped_value);
  *item = *value;
}

bool aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__resize_function__TypeSatnavObs__integrity(
    void *untyped_member, size_t size) {
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *member =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)(untyped_member);
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(member);
  return aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(member,
                                                                   size);
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_member_array
    [19] = {
        {
            "satellite_system",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
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
            "signal_descriptor",                                  // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     signal_descriptor), // bytes offset in struct
            NULL,                        // default value
            NULL,                        // size() function pointer
            NULL,                        // get_const(index) function pointer
            NULL,                        // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "prn",                                              // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT16, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
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
            "frequency",                                         // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     frequency), // bytes offset in struct
            NULL,                // default value
            NULL,                // size() function pointer
            NULL,                // get_const(index) function pointer
            NULL,                // get(index) function pointer
            NULL,                // fetch(index, &value) function pointer
            NULL,                // assign(index, value) function pointer
            NULL                 // resize(index) function pointer
        },
        {
            "pseudorange",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     pseudorange), // bytes offset in struct
            NULL,                  // default value
            NULL,                  // size() function pointer
            NULL,                  // get_const(index) function pointer
            NULL,                  // get(index) function pointer
            NULL,                  // fetch(index, &value) function pointer
            NULL,                  // assign(index, value) function pointer
            NULL                   // resize(index) function pointer
        },
        {
            "pseudorange_variance",                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     pseudorange_variance), // bytes offset in struct
            NULL,                           // default value
            NULL,                           // size() function pointer
            NULL,                           // get_const(index) function pointer
            NULL,                           // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "pseudorange_rate_type",                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     pseudorange_rate_type), // bytes offset in struct
            NULL,                            // default value
            NULL,                            // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "pseudorange_rate",                                  // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     pseudorange_rate), // bytes offset in struct
            NULL,                       // default value
            NULL,                       // size() function pointer
            NULL,                       // get_const(index) function pointer
            NULL,                       // get(index) function pointer
            NULL,                       // fetch(index, &value) function pointer
            NULL,                       // assign(index, value) function pointer
            NULL                        // resize(index) function pointer
        },
        {
            "pseudorange_rate_variance",                        // name
            rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     pseudorange_rate_variance), // bytes offset in struct
            NULL,                                // default value
            NULL,                                // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "carrier_phase",                                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     carrier_phase), // bytes offset in struct
            NULL,                    // default value
            NULL,                    // size() function pointer
            NULL,                    // get_const(index) function pointer
            NULL,                    // get(index) function pointer
            NULL,                    // fetch(index, &value) function pointer
            NULL,                    // assign(index, value) function pointer
            NULL                     // resize(index) function pointer
        },
        {
            "carrier_phase_variance",                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     carrier_phase_variance), // bytes offset in struct
            NULL,                             // default value
            NULL,                             // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "c_n0",                                             // name
            rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     c_n0), // bytes offset in struct
            NULL,           // default value
            NULL,           // size() function pointer
            NULL,           // get_const(index) function pointer
            NULL,           // get(index) function pointer
            NULL,           // fetch(index, &value) function pointer
            NULL,           // assign(index, value) function pointer
            NULL            // resize(index) function pointer
        },
        {
            "lock_count",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT32, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     lock_count), // bytes offset in struct
            NULL,                 // default value
            NULL,                 // size() function pointer
            NULL,                 // get_const(index) function pointer
            NULL,                 // get(index) function pointer
            NULL,                 // fetch(index, &value) function pointer
            NULL,                 // assign(index, value) function pointer
            NULL                  // resize(index) function pointer
        },
        {
            "iono_correction_source",                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     iono_correction_source), // bytes offset in struct
            NULL,                             // default value
            NULL,                             // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "iono_correction_applied",                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     iono_correction_applied), // bytes offset in struct
            NULL,                              // default value
            NULL,                              // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "tropo_correction_applied",                           // name
            rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     tropo_correction_applied), // bytes offset in struct
            NULL,                               // default value
            NULL,                               // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
        },
        {
            "signal_bias_correction_applied",                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     signal_bias_correction_applied), // bytes offset in struct
            NULL,                                     // default value
            NULL,                                     // size() function pointer
            NULL, // get_const(index) function pointer
            NULL, // get(index) function pointer
            NULL, // fetch(index, &value) function pointer
            NULL, // assign(index, value) function pointer
            NULL  // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
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
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavObs,
                     integrity), // bytes offset in struct
            NULL,                // default value
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__size_function__TypeSatnavObs__integrity, // size() function pointer
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavObs__integrity, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__get_function__TypeSatnavObs__integrity, // get(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavObs__integrity, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__assign_function__TypeSatnavObs__integrity, // assign(index, value) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__resize_function__TypeSatnavObs__integrity // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "TypeSatnavObs",              // message name
            19,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__TypeSatnavObs),
            false, // has_any_key_member_
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_member_array, // message members
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_members,
            get_message_typesupport_handle_function,
            &aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_hash,
            &aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_description,
            &aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
    TypeSatnavObs)() {
  aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_member_array
      [0]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavSatelliteSystem)();
  aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavSignalDescriptor)();
  aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_member_array
      [18]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeIntegrity)();
  if (!aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__TypeSatnavObs__rosidl_typesupport_introspection_c__TypeSatnavObs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
