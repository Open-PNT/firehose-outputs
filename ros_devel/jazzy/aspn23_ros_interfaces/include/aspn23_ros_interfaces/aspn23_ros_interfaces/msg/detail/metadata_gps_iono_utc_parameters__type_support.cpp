// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.hpp"
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

void MetadataGpsIonoUtcParameters_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters(_init);
}

void MetadataGpsIonoUtcParameters_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters *>(
          message_memory);
  typed_message->~MetadataGpsIonoUtcParameters();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataGpsIonoUtcParameters_message_member_array[18] = {
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
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
            "a_0",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     a_0), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        },
        {
            "a_1",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     a_1), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        },
        {
            "delta_t_ls",                                          // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     delta_t_ls), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "tot",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     tot), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        },
        {
            "wn_t",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     wn_t), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "wn_lsf",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     wn_lsf), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        },
        {
            "dn",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     dn), // bytes offset in struct
            nullptr,      // default value
            nullptr,      // size() function pointer
            nullptr,      // get_const(index) function pointer
            nullptr,      // get(index) function pointer
            nullptr,      // fetch(index, &value) function pointer
            nullptr,      // assign(index, value) function pointer
            nullptr       // resize(index) function pointer
        },
        {
            "delta_t_lsf",                                         // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     delta_t_lsf), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
        },
        {
            "alpha_0",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     alpha_0), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "alpha_1",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     alpha_1), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "alpha_2",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     alpha_2), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "alpha_3",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     alpha_3), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "beta_0",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     beta_0), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        },
        {
            "beta_1",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     beta_1), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        },
        {
            "beta_2",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     beta_2), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        },
        {
            "beta_3",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters,
                     beta_3), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataGpsIonoUtcParameters_message_members = {
        "aspn23_ros_interfaces::msg",   // message namespace
        "MetadataGpsIonoUtcParameters", // message name
        18,                             // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters),
        false, // has_any_key_member_
        MetadataGpsIonoUtcParameters_message_member_array, // message members
        MetadataGpsIonoUtcParameters_init_function, // function to initialize
                                                    // message memory (memory
                                                    // has to be allocated)
        MetadataGpsIonoUtcParameters_fini_function  // function to terminate
                                                   // message instance (will not
                                                   // free memory)
};

static const rosidl_message_type_support_t
    MetadataGpsIonoUtcParameters_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataGpsIonoUtcParameters_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataGpsIonoUtcParameters>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGpsIonoUtcParameters_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataGpsIonoUtcParameters)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataGpsIonoUtcParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
