# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:srv/QueryBatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QueryBatteryStatus_Request(type):
    """Metaclass of message 'QueryBatteryStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.srv.QueryBatteryStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_battery_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_battery_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_battery_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_battery_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_battery_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryBatteryStatus_Request(metaclass=Metaclass_QueryBatteryStatus_Request):
    """Message class 'QueryBatteryStatus_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_QueryBatteryStatus_Response(type):
    """Metaclass of message 'QueryBatteryStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.srv.QueryBatteryStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_battery_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_battery_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_battery_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_battery_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_battery_status__response

            from robo_cleaner_interfaces.msg import BatteryStatus
            if BatteryStatus.__class__._TYPE_SUPPORT is None:
                BatteryStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryBatteryStatus_Response(metaclass=Metaclass_QueryBatteryStatus_Response):
    """Message class 'QueryBatteryStatus_Response'."""

    __slots__ = [
        '_battery_status',
    ]

    _fields_and_field_types = {
        'battery_status': 'robo_cleaner_interfaces/BatteryStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robo_cleaner_interfaces', 'msg'], 'BatteryStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robo_cleaner_interfaces.msg import BatteryStatus
        self.battery_status = kwargs.get('battery_status', BatteryStatus())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.battery_status != other.battery_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def battery_status(self):
        """Message field 'battery_status'."""
        return self._battery_status

    @battery_status.setter
    def battery_status(self, value):
        if __debug__:
            from robo_cleaner_interfaces.msg import BatteryStatus
            assert \
                isinstance(value, BatteryStatus), \
                "The 'battery_status' field must be a sub message of type 'BatteryStatus'"
        self._battery_status = value


class Metaclass_QueryBatteryStatus(type):
    """Metaclass of service 'QueryBatteryStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_cleaner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_cleaner_interfaces.srv.QueryBatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__query_battery_status

            from robo_cleaner_interfaces.srv import _query_battery_status
            if _query_battery_status.Metaclass_QueryBatteryStatus_Request._TYPE_SUPPORT is None:
                _query_battery_status.Metaclass_QueryBatteryStatus_Request.__import_type_support__()
            if _query_battery_status.Metaclass_QueryBatteryStatus_Response._TYPE_SUPPORT is None:
                _query_battery_status.Metaclass_QueryBatteryStatus_Response.__import_type_support__()


class QueryBatteryStatus(metaclass=Metaclass_QueryBatteryStatus):
    from robo_cleaner_interfaces.srv._query_battery_status import QueryBatteryStatus_Request as Request
    from robo_cleaner_interfaces.srv._query_battery_status import QueryBatteryStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
