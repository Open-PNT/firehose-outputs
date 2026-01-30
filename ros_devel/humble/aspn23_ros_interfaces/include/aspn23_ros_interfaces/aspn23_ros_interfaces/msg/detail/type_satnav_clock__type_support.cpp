// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl generated code does
// not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.hpp"
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

void TypeSatnavClock_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::TypeSatnavClock(_init);
}

void TypeSatnavClock_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::TypeSatnavClock *>(
          message_memory);
  typed_message->~TypeSatnavClock();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    TypeSatnavClock_message_member_array[4] = {
        {
            "t_oc",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavClock,
                     t_oc), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "af_0",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavClock,
                     af_0), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "af_1",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavClock,
                     af_1), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "af_2",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavClock,
                     af_2), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    TypeSatnavClock_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "TypeSatnavClock",            // message name
        4,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::TypeSatnavClock),
        TypeSatnavClock_message_member_array, // message members
        TypeSatnavClock_init_function, // function to initialize message memory
                                       // (memory has to be allocated)
        TypeSatnavClock_fini_function  // function to terminate message instance
                                       // (will not free memory)
};

static const rosidl_message_type_support_t
    TypeSatnavClock_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &TypeSatnavClock_message_members,
        get_message_typesupport_handle_function,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const
    rosidl_message_type_support_t *
    get_message_type_support_handle<
        aspn23_ros_interfaces::msg::TypeSatnavClock>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeSatnavClock_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    TypeSatnavClock)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeSatnavClock_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
