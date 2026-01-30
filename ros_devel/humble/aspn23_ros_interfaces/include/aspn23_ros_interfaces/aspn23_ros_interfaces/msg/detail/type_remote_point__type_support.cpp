// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl generated code does
// not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.hpp"
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

void TypeRemotePoint_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::TypeRemotePoint(_init);
}

void TypeRemotePoint_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::TypeRemotePoint *>(
          message_memory);
  typed_message->~TypeRemotePoint();
}

size_t size_function__TypeRemotePoint__position_covariance(
    const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *get_const_function__TypeRemotePoint__position_covariance(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeRemotePoint__position_covariance(void *untyped_member,
                                                         size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeRemotePoint__position_covariance(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeRemotePoint__position_covariance(untyped_member,
                                                               index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeRemotePoint__position_covariance(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeRemotePoint__position_covariance(untyped_member,
                                                         index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TypeRemotePoint__position_covariance(void *untyped_member,
                                                           size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    TypeRemotePoint_message_member_array[8] = {
        {
            "included_terms",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     included_terms), // bytes offset in struct
            nullptr,                  // default value
            nullptr,                  // size() function pointer
            nullptr,                  // get_const(index) function pointer
            nullptr,                  // get(index) function pointer
            nullptr,                  // fetch(index, &value) function pointer
            nullptr,                  // assign(index, value) function pointer
            nullptr                   // resize(index) function pointer
        },
        {
            "id",                                                    // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     id), // bytes offset in struct
            nullptr,      // default value
            nullptr,      // size() function pointer
            nullptr,      // get_const(index) function pointer
            nullptr,      // get(index) function pointer
            nullptr,      // fetch(index, &value) function pointer
            nullptr,      // assign(index, value) function pointer
            nullptr       // resize(index) function pointer
        },
        {
            "position_reference_frame",                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     position_reference_frame), // bytes offset in struct
            nullptr,                            // default value
            nullptr,                            // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "position1",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     position1), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "position2",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     position2), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "position3",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     position3), // bytes offset in struct
            nullptr,             // default value
            nullptr,             // size() function pointer
            nullptr,             // get_const(index) function pointer
            nullptr,             // get(index) function pointer
            nullptr,             // fetch(index, &value) function pointer
            nullptr,             // assign(index, value) function pointer
            nullptr              // resize(index) function pointer
        },
        {
            "num_position_components",                              // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     num_position_components), // bytes offset in struct
            nullptr,                           // default value
            nullptr,                           // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "position_covariance",                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            true,    // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeRemotePoint,
                     position_covariance), // bytes offset in struct
            nullptr,                       // default value
            size_function__TypeRemotePoint__position_covariance, // size()
                                                                 // function
                                                                 // pointer
            get_const_function__TypeRemotePoint__position_covariance, // get_const(index)
                                                                      // function
                                                                      // pointer
            get_function__TypeRemotePoint__position_covariance,   // get(index)
                                                                  // function
                                                                  // pointer
            fetch_function__TypeRemotePoint__position_covariance, // fetch(index,
                                                                  // &value)
                                                                  // function
                                                                  // pointer
            assign_function__TypeRemotePoint__position_covariance, // assign(index,
                                                                   // value)
                                                                   // function
                                                                   // pointer
            resize_function__TypeRemotePoint__position_covariance // resize(index)
                                                                  // function
                                                                  // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    TypeRemotePoint_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "TypeRemotePoint",            // message name
        8,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::TypeRemotePoint),
        TypeRemotePoint_message_member_array, // message members
        TypeRemotePoint_init_function, // function to initialize message memory
                                       // (memory has to be allocated)
        TypeRemotePoint_fini_function  // function to terminate message instance
                                       // (will not free memory)
};

static const rosidl_message_type_support_t
    TypeRemotePoint_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &TypeRemotePoint_message_members,
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
        aspn23_ros_interfaces::msg::TypeRemotePoint>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeRemotePoint_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    TypeRemotePoint)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeRemotePoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
