// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/TypeHeader.idl generated code does not
// contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.hpp"
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

void TypeHeader_init_function(void *message_memory,
                              rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::TypeHeader(_init);
}

void TypeHeader_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::TypeHeader *>(message_memory);
  typed_message->~TypeHeader();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    TypeHeader_message_member_array[4] = {
        {
            "vendor_id",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeHeader,
                     vendor_id), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "device_id",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeHeader,
                     device_id), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "context_id",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeHeader,
                     context_id), // bytes offset in struct
            nullptr,              // default value
            nullptr,              // size() function pointer
            nullptr,              // get_const(index) function pointer
            nullptr,              // get(index) function pointer
            nullptr,              // fetch(index, &value) function pointer
            nullptr,              // assign(index, value) function pointer
            nullptr               // resize(index) function pointer
        },
        {
            "sequence_id",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeHeader,
                     sequence_id), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    TypeHeader_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "TypeHeader",                 // message name
        4,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::TypeHeader),
        TypeHeader_message_member_array, // message members
        TypeHeader_init_function, // function to initialize message memory
                                  // (memory has to be allocated)
        TypeHeader_fini_function // function to terminate message instance (will
                                 // not free memory)
};

static const rosidl_message_type_support_t
    TypeHeader_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &TypeHeader_message_members,
        get_message_typesupport_handle_function,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const
    rosidl_message_type_support_t *
    get_message_type_support_handle<aspn23_ros_interfaces::msg::TypeHeader>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeHeader_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    TypeHeader)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeHeader_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
