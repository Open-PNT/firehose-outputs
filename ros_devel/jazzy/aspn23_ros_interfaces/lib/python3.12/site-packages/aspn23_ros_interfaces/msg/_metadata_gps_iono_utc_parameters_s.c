// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
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
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__struct.h"
#include "rosidl_runtime_c/visibility_control.h"

bool aspn23_ros_interfaces__msg__type_metadataheader__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_metadataheader__convert_to_py(
    void *raw_ros_message);
bool aspn23_ros_interfaces__msg__type_timestamp__convert_from_py(
    PyObject *_pymsg, void *_ros_message);
PyObject *aspn23_ros_interfaces__msg__type_timestamp__convert_to_py(
    void *raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[89];
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
    assert(strncmp("aspn23_ros_interfaces.msg._metadata_gps_iono_utc_"
                   "parameters.MetadataGpsIonoUtcParameters",
                   full_classname_dest, 88) == 0);
  }
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *ros_message =
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
  { // a_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "a_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // a_1
    PyObject *field = PyObject_GetAttrString(_pymsg, "a_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // delta_t_ls
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_t_ls");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->delta_t_ls = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // tot
    PyObject *field = PyObject_GetAttrString(_pymsg, "tot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tot = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // wn_t
    PyObject *field = PyObject_GetAttrString(_pymsg, "wn_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wn_t = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // wn_lsf
    PyObject *field = PyObject_GetAttrString(_pymsg, "wn_lsf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wn_lsf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // dn
    PyObject *field = PyObject_GetAttrString(_pymsg, "dn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // delta_t_lsf
    PyObject *field = PyObject_GetAttrString(_pymsg, "delta_t_lsf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->delta_t_lsf = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  { // alpha_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "alpha_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // alpha_1
    PyObject *field = PyObject_GetAttrString(_pymsg, "alpha_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // alpha_2
    PyObject *field = PyObject_GetAttrString(_pymsg, "alpha_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // alpha_3
    PyObject *field = PyObject_GetAttrString(_pymsg, "alpha_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // beta_0
    PyObject *field = PyObject_GetAttrString(_pymsg, "beta_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // beta_1
    PyObject *field = PyObject_GetAttrString(_pymsg, "beta_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // beta_2
    PyObject *field = PyObject_GetAttrString(_pymsg, "beta_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  { // beta_3
    PyObject *field = PyObject_GetAttrString(_pymsg, "beta_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *
aspn23_ros_interfaces__msg__metadata_gps_iono_utc_parameters__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MetadataGpsIonoUtcParameters */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._metadata_gps_iono_utc_parameters");
    assert(pymessage_module);
    PyObject *pymessage_class = PyObject_GetAttrString(
        pymessage_module, "MetadataGpsIonoUtcParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *ros_message =
      (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *)
          raw_ros_message;
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
  { // a_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->a_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // a_1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->a_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_t_ls
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->delta_t_ls);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_t_ls", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // tot
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // wn_t
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wn_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wn_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // wn_lsf
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wn_lsf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wn_lsf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // dn
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // delta_t_lsf
    PyObject *field = NULL;
    field = PyLong_FromLong(ros_message->delta_t_lsf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_t_lsf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // alpha_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // alpha_1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // alpha_2
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // alpha_3
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // beta_0
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // beta_1
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // beta_2
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // beta_3
    PyObject *field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
