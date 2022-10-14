# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_miner_interfaces:srv/LongestSequenceValidate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LongestSequenceValidate_Request(type):
    """Metaclass of message 'LongestSequenceValidate_Request'."""

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
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.LongestSequenceValidate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__longest_sequence_validate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__longest_sequence_validate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__longest_sequence_validate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__longest_sequence_validate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__longest_sequence_validate__request

            from robo_miner_interfaces.msg import FieldPoint
            if FieldPoint.__class__._TYPE_SUPPORT is None:
                FieldPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LongestSequenceValidate_Request(metaclass=Metaclass_LongestSequenceValidate_Request):
    """Message class 'LongestSequenceValidate_Request'."""

    __slots__ = [
        '_sequence_points',
    ]

    _fields_and_field_types = {
        'sequence_points': 'sequence<robo_miner_interfaces/FieldPoint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['robo_miner_interfaces', 'msg'], 'FieldPoint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sequence_points = kwargs.get('sequence_points', [])

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
        if self.sequence_points != other.sequence_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sequence_points(self):
        """Message field 'sequence_points'."""
        return self._sequence_points

    @sequence_points.setter
    def sequence_points(self, value):
        if __debug__:
            from robo_miner_interfaces.msg import FieldPoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, FieldPoint) for v in value) and
                 True), \
                "The 'sequence_points' field must be a set or sequence and each value of type 'FieldPoint'"
        self._sequence_points = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_LongestSequenceValidate_Response(type):
    """Metaclass of message 'LongestSequenceValidate_Response'."""

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
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.LongestSequenceValidate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__longest_sequence_validate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__longest_sequence_validate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__longest_sequence_validate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__longest_sequence_validate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__longest_sequence_validate__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LongestSequenceValidate_Response(metaclass=Metaclass_LongestSequenceValidate_Response):
    """Message class 'LongestSequenceValidate_Response'."""

    __slots__ = [
        '_success',
        '_error_reason',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_reason': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_reason = kwargs.get('error_reason', str())

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


class Metaclass_LongestSequenceValidate(type):
    """Metaclass of service 'LongestSequenceValidate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.LongestSequenceValidate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__longest_sequence_validate

            from robo_miner_interfaces.srv import _longest_sequence_validate
            if _longest_sequence_validate.Metaclass_LongestSequenceValidate_Request._TYPE_SUPPORT is None:
                _longest_sequence_validate.Metaclass_LongestSequenceValidate_Request.__import_type_support__()
            if _longest_sequence_validate.Metaclass_LongestSequenceValidate_Response._TYPE_SUPPORT is None:
                _longest_sequence_validate.Metaclass_LongestSequenceValidate_Response.__import_type_support__()


class LongestSequenceValidate(metaclass=Metaclass_LongestSequenceValidate):
    from robo_miner_interfaces.srv._longest_sequence_validate import LongestSequenceValidate_Request as Request
    from robo_miner_interfaces.srv._longest_sequence_validate import LongestSequenceValidate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
