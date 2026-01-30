// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
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
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_mnav_ephemeris__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

bool aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_satnav_clock__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_satnav_clock__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_kepler_orbit__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_kepler_orbit__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("aspn23_ros_interfaces.msg._metadata_gps_mnav_ephemeris."
                   "MetadataGpsMnavEphemeris",
                   full_classname_dest, 79) == 0);
  }
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *ros_message =
      _ros_message;
  { // info
    PyObject *field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
            field, &ros_message->info)) {
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
  { // week_number
    PyObject *field = PyObject_GetAttrString(_pymsg, "week_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->week_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // prn
    PyObject *field = PyObject_GetAttrString(_pymsg, "prn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prn = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // clock
    PyObject *field = PyObject_GetAttrString(_pymsg, "clock");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_satnav_clock__convert_from_py(
            field, &ros_message->clock)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // orbit
    PyObject *field = PyObject_GetAttrString(_pymsg, "orbit");
    if (!field) {
      return false;
    }
    if (!aspn23_ros_interfaces__msg__type_kepler_orbit__convert_from_py(
            field, &ros_message->orbit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  { // a_dot
    PyObject *field = PyObject_GetAttrString(_pymsg, "a_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a_dot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_af_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_af_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_af_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_af_1
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_af_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_af_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_gamma
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_gamma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_gamma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_i
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_i");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_i = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_omega
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_omega");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_omega = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_a
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isc_l1_m_e
    PyObject *field = PyObject_GetAttrString(_pymsg, "isc_l1_m_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isc_l1_m_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isc_l2_m_e
    PyObject *field = PyObject_GetAttrString(_pymsg, "isc_l2_m_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isc_l2_m_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isc_l1_m_s
    PyObject *field = PyObject_GetAttrString(_pymsg, "isc_l1_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isc_l1_m_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isc_l2_m_s
    PyObject *field = PyObject_GetAttrString(_pymsg, "isc_l2_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isc_l2_m_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isa_l2_py
    PyObject *field = PyObject_GetAttrString(_pymsg, "isa_l2_py");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isa_l2_py = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isa_l1_m_e
    PyObject *field = PyObject_GetAttrString(_pymsg, "isa_l1_m_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isa_l1_m_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isa_l2_m_e
    PyObject *field = PyObject_GetAttrString(_pymsg, "isa_l2_m_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isa_l2_m_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isa_l1_m_s
    PyObject *field = PyObject_GetAttrString(_pymsg, "isa_l1_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isa_l1_m_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // isa_l2_m_s
    PyObject *field = PyObject_GetAttrString(_pymsg, "isa_l2_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->isa_l2_m_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_mnav_ephemeris__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MetadataGpsMnavEphemeris */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._metadata_gps_mnav_ephemeris");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "MetadataGpsMnavEphemeris");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *)raw_ros_message;
  { // info
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
        &ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
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
  { // week_number
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->week_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "week_number", field);
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
  { // clock
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_satnav_clock__convert_to_py(
        &ros_message->clock);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // orbit
    PyObject *field = NULL;
    field = aspn23_ros_interfaces__msg__type_kepler_orbit__convert_to_py(
        &ros_message->orbit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "orbit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // a_dot
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->a_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_af_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_af_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_af_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_af_1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_af_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_af_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_gamma
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_gamma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_gamma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_i
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_omega
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_omega);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_omega", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_a
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isc_l1_m_e
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isc_l1_m_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isc_l1_m_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isc_l2_m_e
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isc_l2_m_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isc_l2_m_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isc_l1_m_s
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isc_l1_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isc_l1_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isc_l2_m_s
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isc_l2_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isc_l2_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isa_l2_py
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isa_l2_py);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isa_l2_py", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isa_l1_m_e
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isa_l1_m_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isa_l1_m_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isa_l2_m_e
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isa_l2_m_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isa_l2_m_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isa_l1_m_s
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isa_l1_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isa_l1_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // isa_l2_m_s
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->isa_l2_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isa_l2_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
