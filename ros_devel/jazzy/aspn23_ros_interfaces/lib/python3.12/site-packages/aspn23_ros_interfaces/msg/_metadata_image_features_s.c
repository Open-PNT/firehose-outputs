// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
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
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__struct.h"
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
bool aspn23_ros_interfaces__msg__metadata_image_features__convert_from_py(
    PyObject *_pymsg, void *_ros_message) {
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("aspn23_ros_interfaces.msg._metadata_image_features."
                   "MetadataImageFeatures",
                   full_classname_dest, 72) == 0);
  }
  aspn23_ros_interfaces__msg__MetadataImageFeatures *ros_message = _ros_message;
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
  { // keypoint_detector
    PyObject *field = PyObject_GetAttrString(_pymsg, "keypoint_detector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keypoint_detector = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // orientation_calculated
    PyObject *field = PyObject_GetAttrString(_pymsg, "orientation_calculated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->orientation_calculated = (Py_True == field);
    Py_DECREF(field);
  }
  { // descriptor_extractor
    PyObject *field = PyObject_GetAttrString(_pymsg, "descriptor_extractor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->descriptor_extractor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // is_bigendian
    PyObject *field = PyObject_GetAttrString(_pymsg, "is_bigendian");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_bigendian = (Py_True == field);
    Py_DECREF(field);
  }
  { // descriptor_type
    PyObject *field = PyObject_GetAttrString(_pymsg, "descriptor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->descriptor_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  { // descriptor_number_of_elements
    PyObject *field =
        PyObject_GetAttrString(_pymsg, "descriptor_number_of_elements");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->descriptor_number_of_elements =
        (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject *aspn23_ros_interfaces__msg__metadata_image_features__convert_to_py(
    void *raw_ros_message) {
  /* NOTE(esteve): Call constructor of MetadataImageFeatures */
  PyObject *_pymessage = NULL;
  {
    PyObject *pymessage_module = PyImport_ImportModule(
        "aspn23_ros_interfaces.msg._metadata_image_features");
    assert(pymessage_module);
    PyObject *pymessage_class =
        PyObject_GetAttrString(pymessage_module, "MetadataImageFeatures");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aspn23_ros_interfaces__msg__MetadataImageFeatures *ros_message =
      (aspn23_ros_interfaces__msg__MetadataImageFeatures *)raw_ros_message;
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
  { // keypoint_detector
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keypoint_detector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keypoint_detector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // orientation_calculated
    PyObject *field = NULL;
    field = PyBool_FromLong(ros_message->orientation_calculated ? 1 : 0);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "orientation_calculated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // descriptor_extractor
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->descriptor_extractor);
    {
      int rc =
          PyObject_SetAttrString(_pymessage, "descriptor_extractor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // is_bigendian
    PyObject *field = NULL;
    field = PyBool_FromLong(ros_message->is_bigendian ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_bigendian", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // descriptor_type
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->descriptor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "descriptor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  { // descriptor_number_of_elements
    PyObject *field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->descriptor_number_of_elements);
    {
      int rc = PyObject_SetAttrString(_pymessage,
                                      "descriptor_number_of_elements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
