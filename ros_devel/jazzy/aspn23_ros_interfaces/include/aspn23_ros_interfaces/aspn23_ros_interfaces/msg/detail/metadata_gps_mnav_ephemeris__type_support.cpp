// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl generated
// code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__struct.hpp"
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

void MetadataGpsMnavEphemeris_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris(_init);
}

void MetadataGpsMnavEphemeris_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris *>(
          message_memory);
  typed_message->~MetadataGpsMnavEphemeris();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataGpsMnavEphemeris_message_member_array[22] = {
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
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
            "week_number",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     week_number), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
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
            "a_dot",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     a_dot), // bytes offset in struct
            nullptr,         // default value
            nullptr,         // size() function pointer
            nullptr,         // get_const(index) function pointer
            nullptr,         // get(index) function pointer
            nullptr,         // fetch(index, &value) function pointer
            nullptr,         // assign(index, value) function pointer
            nullptr          // resize(index) function pointer
        },
        {
            "delta_af_0",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_af_0), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "delta_af_1",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_af_1), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "delta_gamma",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_gamma), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
        },
        {
            "delta_i",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_i), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "delta_omega",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_omega), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
        },
        {
            "delta_a",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     delta_a), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "isc_l1_m_e",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isc_l1_m_e), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isc_l2_m_e",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isc_l2_m_e), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isc_l1_m_s",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isc_l1_m_s), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isc_l2_m_s",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isc_l2_m_s), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isa_l2_py",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isa_l2_py), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "isa_l1_m_e",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isa_l1_m_e), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isa_l2_m_e",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isa_l2_m_e), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isa_l1_m_s",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isa_l1_m_s), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "isa_l2_m_s",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris,
                     isa_l2_m_s), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataGpsMnavEphemeris_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataGpsMnavEphemeris",   // message name
        22,                           // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris),
        false,                                         // has_any_key_member_
        MetadataGpsMnavEphemeris_message_member_array, // message members
        MetadataGpsMnavEphemeris_init_function,        // function to initialize
                                                // message memory (memory has to
                                                // be allocated)
        MetadataGpsMnavEphemeris_fini_function // function to terminate message
                                               // instance (will not free
                                               // memory)
};

static const rosidl_message_type_support_t
    MetadataGpsMnavEphemeris_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataGpsMnavEphemeris_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataGpsMnavEphemeris>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGpsMnavEphemeris_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataGpsMnavEphemeris)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGpsMnavEphemeris_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
