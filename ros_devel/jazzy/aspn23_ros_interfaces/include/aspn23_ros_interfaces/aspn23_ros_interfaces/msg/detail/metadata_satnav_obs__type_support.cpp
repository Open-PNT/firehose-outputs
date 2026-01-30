// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl generated code
// does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__struct.hpp"
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

void MetadataSatnavObs_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::MetadataSatnavObs(_init);
}

void MetadataSatnavObs_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataSatnavObs *>(
          message_memory);
  typed_message->~MetadataSatnavObs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataSatnavObs_message_member_array[4] = {
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
            offsetof(aspn23_ros_interfaces::msg::MetadataSatnavObs,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataSatnavObs,
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
            "deltarange_interval_start",                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataSatnavObs,
                     deltarange_interval_start), // bytes offset in struct
            nullptr,                             // default value
            nullptr,                             // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "deltarange_interval_stop",                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataSatnavObs,
                     deltarange_interval_stop), // bytes offset in struct
            nullptr,                            // default value
            nullptr,                            // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataSatnavObs_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataSatnavObs",          // message name
        4,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataSatnavObs),
        false,                                  // has_any_key_member_
        MetadataSatnavObs_message_member_array, // message members
        MetadataSatnavObs_init_function, // function to initialize message
                                         // memory (memory has to be allocated)
        MetadataSatnavObs_fini_function  // function to terminate message
                                         // instance (will not free memory)
};

static const rosidl_message_type_support_t
    MetadataSatnavObs_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataSatnavObs_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataSatnavObs>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataSatnavObs_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataSatnavObs)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataSatnavObs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
