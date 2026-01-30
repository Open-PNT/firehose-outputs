// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl generated code does
// not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__struct.hpp"
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

void TypeSatnavSvData_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::TypeSatnavSvData(_init);
}

void TypeSatnavSvData_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::TypeSatnavSvData *>(
          message_memory);
  typed_message->~TypeSatnavSvData();
}

size_t size_function__TypeSatnavSvData__sv_pos(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__TypeSatnavSvData__sv_pos(const void *untyped_member,
                                             size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeSatnavSvData__sv_pos(void *untyped_member,
                                             size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeSatnavSvData__sv_pos(const void *untyped_member,
                                              size_t index,
                                              void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeSatnavSvData__sv_pos(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeSatnavSvData__sv_pos(void *untyped_member,
                                               size_t index,
                                               const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeSatnavSvData__sv_pos(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__TypeSatnavSvData__sv_vel(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__TypeSatnavSvData__sv_vel(const void *untyped_member,
                                             size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeSatnavSvData__sv_vel(void *untyped_member,
                                             size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeSatnavSvData__sv_vel(const void *untyped_member,
                                              size_t index,
                                              void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeSatnavSvData__sv_vel(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeSatnavSvData__sv_vel(void *untyped_member,
                                               size_t index,
                                               const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeSatnavSvData__sv_vel(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member) {
  (void)untyped_member;
  return 4;
}

const void *get_const_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeSatnavSvData__group_delay_vector(void *untyped_member,
                                                         size_t index) {
  auto &member = *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeSatnavSvData__group_delay_vector(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const float *>(
      get_const_function__TypeSatnavSvData__group_delay_vector(untyped_member,
                                                               index));
  auto &value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__TypeSatnavSvData__group_delay_vector(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<float *>(
      get_function__TypeSatnavSvData__group_delay_vector(untyped_member,
                                                         index));
  const auto &value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    TypeSatnavSvData_message_member_array[11] = {
        {
            "prn",                                                  // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
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
            "satellite_system",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::
                        TypeSatnavSatelliteSystem>(), // members of sub message
            false,                                    // is key
            false,                                    // is array
            0,                                        // array size
            false,                                    // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     satellite_system), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "ephemeris_type",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     ephemeris_type), // bytes offset in struct
            nullptr,                  // default value
            nullptr,                  // size() function pointer
            nullptr,                  // get_const(index) function pointer
            nullptr,                  // get(index) function pointer
            nullptr,                  // fetch(index, &value) function pointer
            nullptr,                  // assign(index, value) function pointer
            nullptr                   // resize(index) function pointer
        },
        {
            "sv_data_time",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeSatnavTime>(), // members of
                                                                   // sub
                                                                   // message
            false,                                                 // is key
            false,                                                 // is array
            0,                                                     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     sv_data_time), // bytes offset in struct
            nullptr,                // default value
            nullptr,                // size() function pointer
            nullptr,                // get_const(index) function pointer
            nullptr,                // get(index) function pointer
            nullptr,                // fetch(index, &value) function pointer
            nullptr,                // assign(index, value) function pointer
            nullptr                 // resize(index) function pointer
        },
        {
            "coordinate_frame",                                     // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     coordinate_frame), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "sv_pos",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     sv_pos),                        // bytes offset in struct
            nullptr,                                 // default value
            size_function__TypeSatnavSvData__sv_pos, // size() function pointer
            get_const_function__TypeSatnavSvData__sv_pos, // get_const(index)
                                                          // function pointer
            get_function__TypeSatnavSvData__sv_pos,       // get(index) function
                                                          // pointer
            fetch_function__TypeSatnavSvData__sv_pos,  // fetch(index, &value)
                                                       // function pointer
            assign_function__TypeSatnavSvData__sv_pos, // assign(index, value)
                                                       // function pointer
            nullptr // resize(index) function pointer
        },
        {
            "sv_vel",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     sv_vel),                        // bytes offset in struct
            nullptr,                                 // default value
            size_function__TypeSatnavSvData__sv_vel, // size() function pointer
            get_const_function__TypeSatnavSvData__sv_vel, // get_const(index)
                                                          // function pointer
            get_function__TypeSatnavSvData__sv_vel,       // get(index) function
                                                          // pointer
            fetch_function__TypeSatnavSvData__sv_vel,  // fetch(index, &value)
                                                       // function pointer
            assign_function__TypeSatnavSvData__sv_vel, // assign(index, value)
                                                       // function pointer
            nullptr // resize(index) function pointer
        },
        {
            "sv_clock_bias",                                         // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     sv_clock_bias), // bytes offset in struct
            nullptr,                 // default value
            nullptr,                 // size() function pointer
            nullptr,                 // get_const(index) function pointer
            nullptr,                 // get(index) function pointer
            nullptr,                 // fetch(index, &value) function pointer
            nullptr,                 // assign(index, value) function pointer
            nullptr                  // resize(index) function pointer
        },
        {
            "sv_clock_drift",                                        // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     sv_clock_drift), // bytes offset in struct
            nullptr,                  // default value
            nullptr,                  // size() function pointer
            nullptr,                  // get_const(index) function pointer
            nullptr,                  // get(index) function pointer
            nullptr,                  // fetch(index, &value) function pointer
            nullptr,                  // assign(index, value) function pointer
            nullptr                   // resize(index) function pointer
        },
        {
            "group_delay_enum",                                     // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     group_delay_enum), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "group_delay_vector",                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            4,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeSatnavSvData,
                     group_delay_vector), // bytes offset in struct
            nullptr,                      // default value
            size_function__TypeSatnavSvData__group_delay_vector, // size()
                                                                 // function
                                                                 // pointer
            get_const_function__TypeSatnavSvData__group_delay_vector, // get_const(index)
                                                                      // function
                                                                      // pointer
            get_function__TypeSatnavSvData__group_delay_vector,   // get(index)
                                                                  // function
                                                                  // pointer
            fetch_function__TypeSatnavSvData__group_delay_vector, // fetch(index,
                                                                  // &value)
                                                                  // function
                                                                  // pointer
            assign_function__TypeSatnavSvData__group_delay_vector, // assign(index,
                                                                   // value)
                                                                   // function
                                                                   // pointer
            nullptr // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    TypeSatnavSvData_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "TypeSatnavSvData",           // message name
        11,                           // number of fields
        sizeof(aspn23_ros_interfaces::msg::TypeSatnavSvData),
        false,                                 // has_any_key_member_
        TypeSatnavSvData_message_member_array, // message members
        TypeSatnavSvData_init_function, // function to initialize message memory
                                        // (memory has to be allocated)
        TypeSatnavSvData_fini_function // function to terminate message instance
                                       // (will not free memory)
};

static const rosidl_message_type_support_t
    TypeSatnavSvData_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &TypeSatnavSvData_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_hash,
        &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description,
        &aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::TypeSatnavSvData>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeSatnavSvData_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    TypeSatnavSvData)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeSatnavSvData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
