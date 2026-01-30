// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MeasurementImu.idl generated code does
// not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/measurement_imu__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_imu__struct.hpp"
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

void MeasurementImu_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::MeasurementImu(_init);
}

void MeasurementImu_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MeasurementImu *>(message_memory);
  typed_message->~MeasurementImu();
}

size_t size_function__MeasurementImu__meas_accel(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__MeasurementImu__meas_accel(const void *untyped_member,
                                               size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__MeasurementImu__meas_accel(void *untyped_member,
                                               size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementImu__meas_accel(const void *untyped_member,
                                                size_t index,
                                                void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementImu__meas_accel(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementImu__meas_accel(void *untyped_member,
                                                 size_t index,
                                                 const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementImu__meas_accel(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MeasurementImu__meas_gyro(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__MeasurementImu__meas_gyro(const void *untyped_member,
                                              size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__MeasurementImu__meas_gyro(void *untyped_member,
                                              size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementImu__meas_gyro(const void *untyped_member,
                                               size_t index,
                                               void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementImu__meas_gyro(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementImu__meas_gyro(void *untyped_member,
                                                size_t index,
                                                const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementImu__meas_gyro(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MeasurementImu__integrity(const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return member->size();
}

const void *
get_const_function__MeasurementImu__integrity(const void *untyped_member,
                                              size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementImu__integrity(void *untyped_member,
                                              size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementImu__integrity(const void *untyped_member,
                                               size_t index,
                                               void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          get_const_function__MeasurementImu__integrity(untyped_member, index));
  auto &value = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      untyped_value);
  value = item;
}

void assign_function__MeasurementImu__integrity(void *untyped_member,
                                                size_t index,
                                                const void *untyped_value) {
  auto &item = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      get_function__MeasurementImu__integrity(untyped_member, index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementImu__integrity(void *untyped_member,
                                                size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MeasurementImu_message_member_array[7] = {
        {
            "header",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeHeader>(), // members of sub
                                                               // message
            false,                                             // is key
            false,                                             // is array
            0,                                                 // array size
            false,                                             // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
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
            false,                                                // is key
            false,                                                // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
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
            "imu_type",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
                     imu_type), // bytes offset in struct
            nullptr,            // default value
            nullptr,            // size() function pointer
            nullptr,            // get_const(index) function pointer
            nullptr,            // get(index) function pointer
            nullptr,            // fetch(index, &value) function pointer
            nullptr,            // assign(index, value) function pointer
            nullptr             // resize(index) function pointer
        },
        {
            "meas_accel",                                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
                     meas_accel),                      // bytes offset in struct
            nullptr,                                   // default value
            size_function__MeasurementImu__meas_accel, // size() function
                                                       // pointer
            get_const_function__MeasurementImu__meas_accel, // get_const(index)
                                                            // function pointer
            get_function__MeasurementImu__meas_accel,    // get(index) function
                                                         // pointer
            fetch_function__MeasurementImu__meas_accel,  // fetch(index, &value)
                                                         // function pointer
            assign_function__MeasurementImu__meas_accel, // assign(index, value)
                                                         // function pointer
            nullptr // resize(index) function pointer
        },
        {
            "meas_gyro",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
                     meas_gyro),                      // bytes offset in struct
            nullptr,                                  // default value
            size_function__MeasurementImu__meas_gyro, // size() function pointer
            get_const_function__MeasurementImu__meas_gyro, // get_const(index)
                                                           // function pointer
            get_function__MeasurementImu__meas_gyro,    // get(index) function
                                                        // pointer
            fetch_function__MeasurementImu__meas_gyro,  // fetch(index, &value)
                                                        // function pointer
            assign_function__MeasurementImu__meas_gyro, // assign(index, value)
                                                        // function pointer
            nullptr // resize(index) function pointer
        },
        {
            "num_integrity",                                        // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
                     num_integrity), // bytes offset in struct
            nullptr,                 // default value
            nullptr,                 // size() function pointer
            nullptr,                 // get_const(index) function pointer
            nullptr,                 // get(index) function pointer
            nullptr,                 // fetch(index, &value) function pointer
            nullptr,                 // assign(index, value) function pointer
            nullptr                  // resize(index) function pointer
        },
        {
            "integrity",                                              // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeIntegrity>(), // members of
                                                                  // sub message
            false,                                                // is key
            true,                                                 // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementImu,
                     integrity),                      // bytes offset in struct
            nullptr,                                  // default value
            size_function__MeasurementImu__integrity, // size() function pointer
            get_const_function__MeasurementImu__integrity, // get_const(index)
                                                           // function pointer
            get_function__MeasurementImu__integrity,    // get(index) function
                                                        // pointer
            fetch_function__MeasurementImu__integrity,  // fetch(index, &value)
                                                        // function pointer
            assign_function__MeasurementImu__integrity, // assign(index, value)
                                                        // function pointer
            resize_function__MeasurementImu__integrity // resize(index) function
                                                       // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MeasurementImu_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MeasurementImu",             // message name
        7,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MeasurementImu),
        false,                               // has_any_key_member_
        MeasurementImu_message_member_array, // message members
        MeasurementImu_init_function, // function to initialize message memory
                                      // (memory has to be allocated)
        MeasurementImu_fini_function  // function to terminate message instance
                                      // (will not free memory)
};

static const rosidl_message_type_support_t
    MeasurementImu_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MeasurementImu_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MeasurementImu__get_type_hash,
        &aspn23_ros_interfaces__msg__MeasurementImu__get_type_description,
        &aspn23_ros_interfaces__msg__MeasurementImu__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<aspn23_ros_interfaces::msg::MeasurementImu>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementImu_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MeasurementImu)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementImu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
