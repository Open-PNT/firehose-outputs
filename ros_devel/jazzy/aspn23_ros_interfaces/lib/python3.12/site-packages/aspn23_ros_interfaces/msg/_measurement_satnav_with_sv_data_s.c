// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
#pragma GCC diagnostic pop
#endif
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
// end nested array functions include
bool aspn23_ros_interfaces__msg__type_header__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_header__convert_to_py(void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_obs__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_satnav_obs__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_integrity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[87];
    {
      char *class_name = NULL;
      char *module_name = NULL;
      {
        PyObject *class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject *name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject *module_attr =
              PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s",
               module_name, class_name);
    }
    assert(strncmp("aspn23_ros_interfaces.msg._measurement_satnav_with_sv_data."
                   "MeasurementSatnavWithSvData",
                   full_classname_dest, 86) == 0);
  }
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData *ros_message =
      _ros_message;
  { // header
    PyObject *field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_header__convert_from_py(
            field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // time_of_validity
    PyObject *field = PyObject_GetAttrString(_pymsg, "time_of_validity");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
            field, &ros_message->time_of_validity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // receiver_clock_time
    PyObject *field = PyObject_GetAttrString(_pymsg, "receiver_clock_time");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_time__convert_from_py(
            field, &ros_message->receiver_clock_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // num_signal_types
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_signal_types");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_signal_types = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // num_signals_tracked
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_signals_tracked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_signals_tracked = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // obs
    PyObject *field = PyObject_GetAttrString(_pymsg, "obs");
    if (!field) {
      return false;
    }
    PyObject *seq_field =
        PySequence_Fast(field, "expected a sequence in 'obs'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence__init(
            &(ros_message->obs), size)) {
      PyErr_SetString(
          PyExc_RuntimeError,
          "unable to create "
          "aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aspn23_ros_interfaces__msg__TypeSatnavObs *dest = ros_message->obs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aspn23_ros_interfaces__msg__type_satnav_obs__convert_from_py(
              PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  { // sv_data
    PyObject *field = PyObject_GetAttrString(_pymsg, "sv_data");
    if (!field) {
      return false;
    }
    PyObject *seq_field =
        PySequence_Fast(field, "expected a sequence in 'sv_data'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence__init(
            &(ros_message->sv_data), size)) {
      PyErr_SetString(
          PyExc_RuntimeError,
          "unable to create "
          "aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aspn23_ros_interfaces__msg__TypeSatnavSvData *dest =
        ros_message->sv_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_from_py(
              PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  { // num_integrity
    PyObject *field = PyObject_GetAttrString(_pymsg, "num_integrity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_integrity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // integrity
    PyObject *field = PyObject_GetAttrString(_pymsg, "integrity");
    if (!field) {
      return false;
    }
    PyObject *seq_field =
        PySequence_Fast(field, "expected a sequence in 'integrity'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
            &(ros_message->integrity), size)) {
      PyErr_SetString(
          PyExc_RuntimeError,
          "unable to create "
          "aspn23_ros_interfaces__msg__TypeIntegrity__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    aspn23_ros_interfaces__msg__TypeIntegrity *dest =
        ros_message->integrity.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
              PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *
aspn23_ros_interfaces__msg__measurement_satnav_with_sv_data__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MeasurementSatnavWithSvData */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._measurement_satnav_with_sv_data");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "MeasurementSatnavWithSvData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData *ros_message =
      (aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData *)
          raw_ros_message;
  { // header
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_header__convert_to_py(
        &ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // time_of_validity
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
        &ros_message->time_of_validity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // receiver_clock_time
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_satnav_time__convert_to_py(
        &ros_message->receiver_clock_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "receiver_clock_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_signal_types
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_signal_types);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_signal_types", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_signals_tracked
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_signals_tracked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_signals_tracked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // obs
    PyObject *field = NULL;
    size_t size = ros_message->obs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aspn23_ros_interfaces__msg__TypeSatnavObs *item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obs.data[i]);
      PyObject *pyitem =
          aspn23_ros_interfaces__msg__type_satnav_obs__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // sv_data
    PyObject *field = NULL;
    size_t size = ros_message->sv_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aspn23_ros_interfaces__msg__TypeSatnavSvData *item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sv_data.data[i]);
      PyObject *pyitem =
          aspn23_ros_interfaces__msg__type_satnav_sv_data__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "sv_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // num_integrity
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_integrity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_integrity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // integrity
    PyObject *field = NULL;
    size_t size = ros_message->integrity.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    aspn23_ros_interfaces__msg__TypeIntegrity *item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->integrity.data[i]);
      PyObject *pyitem =
          aspn23_ros_interfaces__msg__type_integrity__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "integrity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
