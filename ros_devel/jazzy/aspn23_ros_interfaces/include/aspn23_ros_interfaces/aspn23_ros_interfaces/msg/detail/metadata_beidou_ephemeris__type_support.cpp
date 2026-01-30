// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl generated
// code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__struct.hpp"
#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "string"
#include "vector"

namespace aspn23_ros_interfaces {

namespace msg {

namespace rosidl_typesupport_introspection_cpp {

void MetadataBeidouEphemeris_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MetadataBeidouEphemeris(_init);
}

void MetadataBeidouEphemeris_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataBeidouEphemeris *>(
          message_memory);
  typed_message->~MetadataBeidouEphemeris();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataBeidouEphemeris_message_member_array[9] = {
        {
            "info",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::
                        TypeMetadataheader>(), // members of sub message
            false,                             // is key
            false,                             // is array
            0,                                 // array size
            false,                             // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     info), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "time_of_validity",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeTimestamp>(), // members of
                                                                  // sub message
            false,                                                // is key
            false,                                                // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     time_of_validity), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "prn",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     prn), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        },
        {
            "clock",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeSatnavClock>(), // members
                                                                    // of sub
                                                                    // message
            false,                                                  // is key
            false,                                                  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     clock), // bytes offset in struct
            nullptr,         // default value
            nullptr,         // size() function pointer
            nullptr,         // get_const(index) function pointer
            nullptr,         // get(index) function pointer
            nullptr,         // fetch(index, &value) function pointer
            nullptr,         // assign(index, value) function pointer
            nullptr          // resize(index) function pointer
        },
        {
            "orbit",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeKeplerOrbit>(), // members
                                                                    // of sub
                                                                    // message
            false,                                                  // is key
            false,                                                  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     orbit), // bytes offset in struct
            nullptr,         // default value
            nullptr,         // size() function pointer
            nullptr,         // get_const(index) function pointer
            nullptr,         // get(index) function pointer
            nullptr,         // fetch(index, &value) function pointer
            nullptr,         // assign(index, value) function pointer
            nullptr          // resize(index) function pointer
        },
        {
            "t_gd1",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     t_gd1), // bytes offset in struct
            nullptr,         // default value
            nullptr,         // size() function pointer
            nullptr,         // get_const(index) function pointer
            nullptr,         // get(index) function pointer
            nullptr,         // fetch(index, &value) function pointer
            nullptr,         // assign(index, value) function pointer
            nullptr          // resize(index) function pointer
        },
        {
            "t_gd2",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     t_gd2), // bytes offset in struct
            nullptr,         // default value
            nullptr,         // size() function pointer
            nullptr,         // get_const(index) function pointer
            nullptr,         // get(index) function pointer
            nullptr,         // fetch(index, &value) function pointer
            nullptr,         // assign(index, value) function pointer
            nullptr          // resize(index) function pointer
        },
        {
            "aodc",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     aodc), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "aode",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris,
                     aode), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataBeidouEphemeris_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataBeidouEphemeris",    // message name
        9,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataBeidouEphemeris),
        false,                                        // has_any_key_member_
        MetadataBeidouEphemeris_message_member_array, // message members
        MetadataBeidouEphemeris_init_function, // function to initialize message
                                               // memory (memory has to be
                                               // allocated)
        MetadataBeidouEphemeris_fini_function  // function to terminate message
                                              // instance (will not free memory)
};

static const rosidl_message_type_support_t
    MetadataBeidouEphemeris_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataBeidouEphemeris_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataBeidouEphemeris>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataBeidouEphemeris_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataBeidouEphemeris)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataBeidouEphemeris_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
