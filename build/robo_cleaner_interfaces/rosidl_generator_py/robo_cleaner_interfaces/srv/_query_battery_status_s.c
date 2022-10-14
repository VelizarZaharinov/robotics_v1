// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
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
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.h"
#include "robo_cleaner_interfaces/srv/detail/query_battery_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robo_cleaner_interfaces__srv__query_battery_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("robo_cleaner_interfaces.srv._query_battery_status.QueryBatteryStatus_Request", full_classname_dest, 76) == 0);
  }
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_cleaner_interfaces__srv__query_battery_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QueryBatteryStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_cleaner_interfaces.srv._query_battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QueryBatteryStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__struct.h"
// already included above
// #include "robo_cleaner_interfaces/srv/detail/query_battery_status__functions.h"

bool robo_cleaner_interfaces__msg__battery_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * robo_cleaner_interfaces__msg__battery_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool robo_cleaner_interfaces__srv__query_battery_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("robo_cleaner_interfaces.srv._query_battery_status.QueryBatteryStatus_Response", full_classname_dest, 77) == 0);
  }
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Response * ros_message = _ros_message;
  {  // battery_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_status");
    if (!field) {
      return false;
    }
    if (!robo_cleaner_interfaces__msg__battery_status__convert_from_py(field, &ros_message->battery_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robo_cleaner_interfaces__srv__query_battery_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QueryBatteryStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robo_cleaner_interfaces.srv._query_battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QueryBatteryStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robo_cleaner_interfaces__srv__QueryBatteryStatus_Response * ros_message = (robo_cleaner_interfaces__srv__QueryBatteryStatus_Response *)raw_ros_message;
  {  // battery_status
    PyObject * field = NULL;
    field = robo_cleaner_interfaces__msg__battery_status__convert_to_py(&ros_message->battery_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
