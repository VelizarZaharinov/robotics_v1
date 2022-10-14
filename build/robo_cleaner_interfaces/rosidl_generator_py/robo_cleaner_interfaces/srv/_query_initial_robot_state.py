# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:srv/QueryInitialRobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QueryInitialRobotState_Request(type):
    """Metaclass of message 'QueryInitialRobotState_Request'."""

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
                'robo_cleaner_interfaces.srv.QueryInitialRobotState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_initial_robot_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_initial_robot_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_initial_robot_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_initial_robot_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_initial_robot_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryInitialRobotState_Request(metaclass=Metaclass_QueryInitialRobotState_Request):
    """Message class 'QueryInitialRobotState_Request'."""

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


class Metaclass_QueryInitialRobotState_Response(type):
    """Metaclass of message 'QueryInitialRobotState_Response'."""

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
                'robo_cleaner_interfaces.srv.QueryInitialRobotState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__query_initial_robot_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__query_initial_robot_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__query_initial_robot_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__query_initial_robot_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__query_initial_robot_state__response

            from robo_cleaner_interfaces.msg import InitialRobotState
            if InitialRobotState.__class__._TYPE_SUPPORT is None:
                InitialRobotState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QueryInitialRobotState_Response(metaclass=Metaclass_QueryInitialRobotState_Response):
    """Message class 'QueryInitialRobotState_Response'."""

    __slots__ = [
        '_success',
        '_error_reason',
        '_initial_robot_state',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_reason': 'string',
        'initial_robot_state': 'robo_cleaner_interfaces/InitialRobotState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['robo_cleaner_interfaces', 'msg'], 'InitialRobotState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_reason = kwargs.get('error_reason', str())
        from robo_cleaner_interfaces.msg import InitialRobotState
        self.initial_robot_state = kwargs.get('initial_robot_state', InitialRobotState())

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
        if self.success != other.success:
            return False
        if self.error_reason != other.error_reason:
            return False
        if self.initial_robot_state != other.initial_robot_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def error_reason(self):
        """Message field 'error_reason'."""
        return self._error_reason

    @error_reason.setter
    def error_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_reason' field must be of type 'str'"
        self._error_reason = value

    @property
    def initial_robot_state(self):
        """Message field 'initial_robot_state'."""
        return self._initial_robot_state

    @initial_robot_state.setter
    def initial_robot_state(self, value):
        if __debug__:
            from robo_cleaner_interfaces.msg import InitialRobotState
            assert \
                isinstance(value, InitialRobotState), \
                "The 'initial_robot_state' field must be a sub message of type 'InitialRobotState'"
        self._initial_robot_state = value


class Metaclass_QueryInitialRobotState(type):
    """Metaclass of service 'QueryInitialRobotState'."""

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
                'robo_cleaner_interfaces.srv.QueryInitialRobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__query_initial_robot_state

            from robo_cleaner_interfaces.srv import _query_initial_robot_state
            if _query_initial_robot_state.Metaclass_QueryInitialRobotState_Request._TYPE_SUPPORT is None:
                _query_initial_robot_state.Metaclass_QueryInitialRobotState_Request.__import_type_support__()
            if _query_initial_robot_state.Metaclass_QueryInitialRobotState_Response._TYPE_SUPPORT is None:
                _query_initial_robot_state.Metaclass_QueryInitialRobotState_Response.__import_type_support__()


class QueryInitialRobotState(metaclass=Metaclass_QueryInitialRobotState):
    from robo_cleaner_interfaces.srv._query_initial_robot_state import QueryInitialRobotState_Request as Request
    from robo_cleaner_interfaces.srv._query_initial_robot_state import QueryInitialRobotState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
