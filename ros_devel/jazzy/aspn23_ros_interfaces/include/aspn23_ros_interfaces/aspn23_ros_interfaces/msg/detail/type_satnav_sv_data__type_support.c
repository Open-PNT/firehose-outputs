// generated from
// rosidl_typesupport_introspection_c/resource/idl__type_support.c.em with input
// from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl generated code does not
// contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__rosidl_typesupport_introspection_c.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.h"
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
// Member `sv_data_time`
#include "aspn23_ros_interfaces/msg/type_satnav_time.h"
// Member `sv_data_time`
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C" {
#endif

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_init_function(
    void *message_memory, enum rosidl_runtime_c__message_initialization _init) {
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void)_init;
  aspn23_ros_interfaces__msg__TypeSatnavSvData__init(message_memory);
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_fini_function(
    void *message_memory) {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__fini(message_memory);
}

size_t
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__sv_pos(
    const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_pos(
    const void *untyped_member, size_t index) {
  const double *member = (const double *)(untyped_member);
  return &member[index];
}

void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_pos(
    void *untyped_member, size_t index) {
  double *member = (double *)(untyped_member);
  return &member[index];
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__sv_pos(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_pos(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__sv_pos(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_pos(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

size_t
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__sv_vel(
    const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_vel(
    const void *untyped_member, size_t index) {
  const double *member = (const double *)(untyped_member);
  return &member[index];
}

void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_vel(
    void *untyped_member, size_t index) {
  double *member = (double *)(untyped_member);
  return &member[index];
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__sv_vel(
    const void *untyped_member, size_t index, void *untyped_value) {
  const double *item =
      ((const double *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_vel(
               untyped_member, index));
  double *value = (double *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__sv_vel(
    void *untyped_member, size_t index, const void *untyped_value) {
  double *item =
      ((double *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_vel(
               untyped_member, index));
  const double *value = (const double *)(untyped_value);
  *item = *value;
}

size_t
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member) {
  (void)untyped_member;
  return 4;
}

const void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member, size_t index) {
  const float *member = (const float *)(untyped_member);
  return &member[index];
}

void *
aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__group_delay_vector(
    void *untyped_member, size_t index) {
  float *member = (float *)(untyped_member);
  return &member[index];
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member, size_t index, void *untyped_value) {
  const float *item =
      ((const float *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__group_delay_vector(
               untyped_member, index));
  float *value = (float *)(untyped_value);
  *value = *item;
}

void aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__group_delay_vector(
    void *untyped_member, size_t index, const void *untyped_value) {
  float *item =
      ((float *)
           aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__group_delay_vector(
               untyped_member, index));
  const float *value = (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_member_array
    [11] = {
        {
            "prn",                                              // name
            rosidl_typesupport_introspection_c__ROS_TYPE_INT16, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
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
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
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
            "ephemeris_type",                                   // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     ephemeris_type), // bytes offset in struct
            NULL,                     // default value
            NULL,                     // size() function pointer
            NULL,                     // get_const(index) function pointer
            NULL,                     // get(index) function pointer
            NULL,                     // fetch(index, &value) function pointer
            NULL,                     // assign(index, value) function pointer
            NULL                      // resize(index) function pointer
        },
        {
            "sv_data_time",                                       // name
            rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE, // type
            0,     // upper bound of string
            NULL,  // members of sub message (initialized later)
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     sv_data_time), // bytes offset in struct
            NULL,                   // default value
            NULL,                   // size() function pointer
            NULL,                   // get_const(index) function pointer
            NULL,                   // get(index) function pointer
            NULL,                   // fetch(index, &value) function pointer
            NULL,                   // assign(index, value) function pointer
            NULL                    // resize(index) function pointer
        },
        {
            "coordinate_frame",                                 // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     coordinate_frame), // bytes offset in struct
            NULL,                       // default value
            NULL,                       // size() function pointer
            NULL,                       // get_const(index) function pointer
            NULL,                       // get(index) function pointer
            NULL,                       // fetch(index, &value) function pointer
            NULL,                       // assign(index, value) function pointer
            NULL                        // resize(index) function pointer
        },
        {
            "sv_pos",                                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            true,  // is array
            3,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     sv_pos), // bytes offset in struct
            NULL,             // default value
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__sv_pos, // size() function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_pos, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_pos, // get(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__sv_pos, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__sv_pos, // assign(index, value) function pointer
            NULL // resize(index) function pointer
        },
        {
            "sv_vel",                                            // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            true,  // is array
            3,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     sv_vel), // bytes offset in struct
            NULL,             // default value
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__sv_vel, // size() function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__sv_vel, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__sv_vel, // get(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__sv_vel, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__sv_vel, // assign(index, value) function pointer
            NULL // resize(index) function pointer
        },
        {
            "sv_clock_bias",                                     // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     sv_clock_bias), // bytes offset in struct
            NULL,                    // default value
            NULL,                    // size() function pointer
            NULL,                    // get_const(index) function pointer
            NULL,                    // get(index) function pointer
            NULL,                    // fetch(index, &value) function pointer
            NULL,                    // assign(index, value) function pointer
            NULL                     // resize(index) function pointer
        },
        {
            "sv_clock_drift",                                    // name
            rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     sv_clock_drift), // bytes offset in struct
            NULL,                     // default value
            NULL,                     // size() function pointer
            NULL,                     // get_const(index) function pointer
            NULL,                     // get(index) function pointer
            NULL,                     // fetch(index, &value) function pointer
            NULL,                     // assign(index, value) function pointer
            NULL                      // resize(index) function pointer
        },
        {
            "group_delay_enum",                                 // name
            rosidl_typesupport_introspection_c__ROS_TYPE_UINT8, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            false, // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     group_delay_enum), // bytes offset in struct
            NULL,                       // default value
            NULL,                       // size() function pointer
            NULL,                       // get_const(index) function pointer
            NULL,                       // get(index) function pointer
            NULL,                       // fetch(index, &value) function pointer
            NULL,                       // assign(index, value) function pointer
            NULL                        // resize(index) function pointer
        },
        {
            "group_delay_vector",                               // name
            rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT, // type
            0,     // upper bound of string
            NULL,  // members of sub message
            false, // is key
            true,  // is array
            4,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces__msg__TypeSatnavSvData,
                     group_delay_vector), // bytes offset in struct
            NULL,                         // default value
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__size_function__TypeSatnavSvData__group_delay_vector, // size() function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_const_function__TypeSatnavSvData__group_delay_vector, // get_const(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__get_function__TypeSatnavSvData__group_delay_vector, // get(index) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__fetch_function__TypeSatnavSvData__group_delay_vector, // fetch(index, &value) function pointer
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__assign_function__TypeSatnavSvData__group_delay_vector, // assign(index, value) function pointer
            NULL // resize(index) function pointer
        }};

static const rosidl_typesupport_introspection_c__MessageMembers
    aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_members =
        {
            "aspn23_ros_interfaces__msg", // message namespace
            "TypeSatnavSvData",           // message name
            11,                           // number of fields
            sizeof(aspn23_ros_interfaces__msg__TypeSatnavSvData),
            false, // has_any_key_member_
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_member_array, // message members
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_init_function, // function to initialize message memory (memory has to be allocated)
            aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_fini_function // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t
    aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_type_support_handle =
        {
            0,
            &aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_members,
            get_message_typesupport_handle_function,
            &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_hash,
            &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description,
            &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aspn23_ros_interfaces const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
    TypeSatnavSvData)() {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_member_array
      [1]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavSatelliteSystem)();
  aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_member_array
      [3]
          .members_ = ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_introspection_c, aspn23_ros_interfaces, msg,
      TypeSatnavTime)();
  if (!aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_type_support_handle
           .typesupport_identifier) {
    aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_type_support_handle
        .typesupport_identifier =
        rosidl_typesupport_introspection_c__identifier;
  }
  return &aspn23_ros_interfaces__msg__TypeSatnavSvData__rosidl_typesupport_introspection_c__TypeSatnavSvData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
