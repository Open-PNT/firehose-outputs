// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl generated
// code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__struct.hpp"
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

void MetadataGalileoEphemeris_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MetadataGalileoEphemeris(_init);
}

void MetadataGalileoEphemeris_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataGalileoEphemeris *>(
          message_memory);
  typed_message->~MetadataGalileoEphemeris();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataGalileoEphemeris_message_member_array[7] = {
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
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
            "nav_msg_type",                                         // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
                     nav_msg_type), // bytes offset in struct
            nullptr,                // default value
            nullptr,                // size() function pointer
            nullptr,                // get_const(index) function pointer
            nullptr,                // get(index) function pointer
            nullptr,                // fetch(index, &value) function pointer
            nullptr,                // assign(index, value) function pointer
            nullptr                 // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
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
            "bgd",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris,
                     bgd), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataGalileoEphemeris_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataGalileoEphemeris",   // message name
        7,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataGalileoEphemeris),
        false,                                         // has_any_key_member_
        MetadataGalileoEphemeris_message_member_array, // message members
        MetadataGalileoEphemeris_init_function,        // function to initialize
                                                // message memory (memory has to
                                                // be allocated)
        MetadataGalileoEphemeris_fini_function // function to terminate message
                                               // instance (will not free
                                               // memory)
};

static const rosidl_message_type_support_t
    MetadataGalileoEphemeris_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataGalileoEphemeris_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataGalileoEphemeris>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGalileoEphemeris_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataGalileoEphemeris)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGalileoEphemeris_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
