// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robo_cleaner_interfaces:msg/UserAuthenticate.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robo_cleaner_interfaces/msg/detail/user_authenticate__struct.h"
#include "robo_cleaner_interfaces/msg/detail/user_authenticate__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robo_cleaner_interfaces__msg__user_authenticate__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
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
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robo_cleaner_interfaces.msg._user_authenticate.UserAuthenticate", full_classname_dest, 63) == 0);
  }
  robo_cleaner_interfaces__msg__UserAuthenticate * ros_message = _ros_message;
  {  // user
    PyObject * field = PyObject_GetAttrString(_pymsg, "user");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->user, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // repository
    PyObject * field = PyObject_GetAttrString(_pymsg, "repository");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->repository, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // commit_sha
    PyObject * field = PyObject_GetAttrString(_pymsg, "commit_sha");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->commit_sha, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_cleaner_interfaces__msg__user_authenticate__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UserAuthenticate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_cleaner_interfaces.msg._user_authenticate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UserAuthenticate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_cleaner_interfaces__msg__UserAuthenticate * ros_message = (robo_cleaner_interfaces__msg__UserAuthenticate *)raw_ros_message;
  {  // user
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->user.data,
      strlen(ros_message->user.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "user", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // repository
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->repository.data,
      strlen(ros_message->repository.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "repository", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commit_sha
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->commit_sha.data,
      strlen(ros_message->commit_sha.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "commit_sha", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
