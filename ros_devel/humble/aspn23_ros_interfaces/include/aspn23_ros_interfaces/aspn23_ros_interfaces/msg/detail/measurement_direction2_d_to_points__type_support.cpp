// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MeasurementDirection2DToPoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/measurement_direction2_d_to_points__struct.hpp"
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

void MeasurementDirection2DToPoints_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints(_init);
}

void MeasurementDirection2DToPoints_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints *>(
          message_memory);
  typed_message->~MeasurementDirection2DToPoints();
}

size_t
size_function__MeasurementDirection2DToPoints__obs(const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeDirection2DToPoint> *>(
      untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementDirection2DToPoints__obs(
    const void *untyped_member, size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeDirection2DToPoint> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementDirection2DToPoints__obs(void *untyped_member,
                                                        size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeDirection2DToPoint> *>(
      untyped_member);
  return &member[index];
}

void fetch_function__MeasurementDirection2DToPoints__obs(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<
      const aspn23_ros_interfaces::msg::TypeDirection2DToPoint *>(
      get_const_function__MeasurementDirection2DToPoints__obs(untyped_member,
                                                              index));
  auto &value =
      *reinterpret_cast<aspn23_ros_interfaces::msg::TypeDirection2DToPoint *>(
          untyped_value);
  value = item;
}

void assign_function__MeasurementDirection2DToPoints__obs(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item =
      *reinterpret_cast<aspn23_ros_interfaces::msg::TypeDirection2DToPoint *>(
          get_function__MeasurementDirection2DToPoints__obs(untyped_member,
                                                            index));
  const auto &value = *reinterpret_cast<
      const aspn23_ros_interfaces::msg::TypeDirection2DToPoint *>(
      untyped_value);
  item = value;
}

void resize_function__MeasurementDirection2DToPoints__obs(void *untyped_member,
                                                          size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeDirection2DToPoint> *>(
      untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MeasurementDirection2DToPoints_message_member_array[4] = {
        {
            "header",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeHeader>(), // members of sub
                                                               // message
            false,                                             // is array
            0,                                                 // array size
            false,                                             // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints,
                     header), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
        },
        {
            "time_of_validity",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeTimestamp>(), // members of
                                                                  // sub message
            false,                                                // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints,
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
            "num_obs",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints,
                     num_obs), // bytes offset in struct
            nullptr,           // default value
            nullptr,           // size() function pointer
            nullptr,           // get_const(index) function pointer
            nullptr,           // get(index) function pointer
            nullptr,           // fetch(index, &value) function pointer
            nullptr,           // assign(index, value) function pointer
            nullptr            // resize(index) function pointer
        },
        {
            "obs",                                                    // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::
                        TypeDirection2DToPoint>(), // members of sub message
            true,                                  // is array
            0,                                     // array size
            false,                                 // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints,
                     obs), // bytes offset in struct
            nullptr,       // default value
            size_function__MeasurementDirection2DToPoints__obs, // size()
                                                                // function
                                                                // pointer
            get_const_function__MeasurementDirection2DToPoints__obs, // get_const(index)
                                                                     // function
                                                                     // pointer
            get_function__MeasurementDirection2DToPoints__obs,   // get(index)
                                                                 // function
                                                                 // pointer
            fetch_function__MeasurementDirection2DToPoints__obs, // fetch(index,
                                                                 // &value)
                                                                 // function
                                                                 // pointer
            assign_function__MeasurementDirection2DToPoints__obs, // assign(index,
                                                                  // value)
                                                                  // function
                                                                  // pointer
            resize_function__MeasurementDirection2DToPoints__obs // resize(index)
                                                                 // function
                                                                 // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MeasurementDirection2DToPoints_message_members = {
        "aspn23_ros_interfaces::msg",     // message namespace
        "MeasurementDirection2DToPoints", // message name
        4,                                // number of fields
        sizeof(aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints),
        MeasurementDirection2DToPoints_message_member_array, // message members
        MeasurementDirection2DToPoints_init_function, // function to initialize
                                                      // message memory (memory
                                                      // has to be allocated)
        MeasurementDirection2DToPoints_fini_function  // function to terminate
                                                      // message instance (will
                                                      // not free memory)
};

static const rosidl_message_type_support_t
    MeasurementDirection2DToPoints_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MeasurementDirection2DToPoints_message_members,
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
        aspn23_ros_interfaces::msg::MeasurementDirection2DToPoints>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementDirection2DToPoints_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MeasurementDirection2DToPoints)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementDirection2DToPoints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
