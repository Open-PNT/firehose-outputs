// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
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
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
// end nested array functions include
bool aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *
aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_integrity__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_integrity__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__type_satnav_obs__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("aspn23_ros_interfaces.msg._type_satnav_obs.TypeSatnavObs",
                   full_classname_dest, 56) == 0);
  }
  aspn23_ros_interfaces__msg__TypeSatnavObs *ros_message = _ros_message;
  { // satellite_system
    PyObject *field = PyObject_GetAttrString(_pymsg, "satellite_system");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_from_py(
            field, &ros_message->satellite_system)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // signal_descriptor
    PyObject *field = PyObject_GetAttrString(_pymsg, "signal_descriptor");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_from_py(
            field, &ros_message->signal_descriptor)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // prn
    PyObject *field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // frequency
    PyObject *field = PyObject_GetAttrString(_pymsg, "frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frequency = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // pseudorange
    PyObject *field = PyObject_GetAttrString(_pymsg, "pseudorange");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pseudorange = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // pseudorange_variance
    PyObject *field = PyObject_GetAttrString(_pymsg, "pseudorange_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pseudorange_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // pseudorange_rate_type
    PyObject *field = PyObject_GetAttrString(_pymsg, "pseudorange_rate_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pseudorange_rate_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // pseudorange_rate
    PyObject *field = PyObject_GetAttrString(_pymsg, "pseudorange_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pseudorange_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // pseudorange_rate_variance
    PyObject *field =
        PyObject_GetAttrString(_pymsg, "pseudorange_rate_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pseudorange_rate_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // carrier_phase
    PyObject *field = PyObject_GetAttrString(_pymsg, "carrier_phase");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carrier_phase = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // carrier_phase_variance
    PyObject *field = PyObject_GetAttrString(_pymsg, "carrier_phase_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->carrier_phase_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // c_n0
    PyObject *field = PyObject_GetAttrString(_pymsg, "c_n0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c_n0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // lock_count
    PyObject *field = PyObject_GetAttrString(_pymsg, "lock_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lock_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // iono_correction_source
    PyObject *field = PyObject_GetAttrString(_pymsg, "iono_correction_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iono_correction_source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // iono_correction_applied
    PyObject *field = PyObject_GetAttrString(_pymsg, "iono_correction_applied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->iono_correction_applied = (Py_True == field);
    Py_DECREF(field);
  }
  { // tropo_correction_applied
    PyObject *field =
        PyObject_GetAttrString(_pymsg, "tropo_correction_applied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tropo_correction_applied = (Py_True == field);
    Py_DECREF(field);
  }
  { // signal_bias_correction_applied
    PyObject *field =
        PyObject_GetAttrString(_pymsg, "signal_bias_correction_applied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_bias_correction_applied = (Py_True == field);
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
PyObject *aspn23_ros_interfaces__msg__type_satnav_obs__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of TypeSatnavObs */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module =
        PyImport_ImportModule("aspn23_ros_interfaces.msg._type_satnav_obs");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "TypeSatnavObs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__TypeSatnavObs *ros_message =
      (aspn23_ros_interfaces__msg__TypeSatnavObs *)raw_ros_message;
  { // satellite_system
    PyObject *field = NULL;
    field =
        aspn23_ros_interfaces__msg__type_satnav_satellite_system__convert_to_py(
            &ros_message->satellite_system);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "satellite_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // signal_descriptor
    PyObject *field = NULL;
    field =
        aspn23_ros_interfaces__msg__type_satnav_signal_descriptor__convert_to_py(
            &ros_message->signal_descriptor);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_descriptor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // prn
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->prn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // frequency
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // pseudorange
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->pseudorange);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pseudorange", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // pseudorange_variance
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->pseudorange_variance);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "pseudorange_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // pseudorange_rate_type
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pseudorange_rate_type);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "pseudorange_rate_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // pseudorange_rate
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->pseudorange_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pseudorange_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // pseudorange_rate_variance
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->pseudorange_rate_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pseudorange_rate_variance",
                                      field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // carrier_phase
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->carrier_phase);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_phase", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // carrier_phase_variance
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->carrier_phase_variance);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "carrier_phase_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // c_n0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->c_n0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c_n0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // lock_count
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->lock_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lock_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // iono_correction_source
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->iono_correction_source);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "iono_correction_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // iono_correction_applied
    PyObject *field = NULL;
    field = PyBool_FromLong(ros_message->iono_correction_applied ? 1 : 0);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "iono_correction_applied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // tropo_correction_applied
    PyObject *field = NULL;
    field = PyBool_FromLong(ros_message->tropo_correction_applied ? 1 : 0);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "tropo_correction_applied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // signal_bias_correction_applied
    PyObject *field = NULL;
    field =
        PyBool_FromLong(ros_message->signal_bias_correction_applied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage,
                                      "signal_bias_correction_applied", field);
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
