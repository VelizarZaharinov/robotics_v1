# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_cleaner_interfaces:msg/UserAuthenticate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserAuthenticate(type):
    """Metaclass of message 'UserAuthenticate'."""

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
                'robo_cleaner_interfaces.msg.UserAuthenticate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__user_authenticate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__user_authenticate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__user_authenticate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__user_authenticate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__user_authenticate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserAuthenticate(metaclass=Metaclass_UserAuthenticate):
    """Message class 'UserAuthenticate'."""

    __slots__ = [
        '_user',
        '_repository',
        '_commit_sha',
    ]

    _fields_and_field_types = {
        'user': 'string',
        'repository': 'string',
        'commit_sha': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.user = kwargs.get('user', str())
        self.repository = kwargs.get('repository', str())
        self.commit_sha = kwargs.get('commit_sha', str())

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
        if self.user != other.user:
            return False
        if self.repository != other.repository:
            return False
        if self.commit_sha != other.commit_sha:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def user(self):
        """Message field 'user'."""
        return self._user

    @user.setter
    def user(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user' field must be of type 'str'"
        self._user = value

    @property
    def repository(self):
        """Message field 'repository'."""
        return self._repository

    @repository.setter
    def repository(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'repository' field must be of type 'str'"
        self._repository = value

    @property
    def commit_sha(self):
        """Message field 'commit_sha'."""
        return self._commit_sha

    @commit_sha.setter
    def commit_sha(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'commit_sha' field must be of type 'str'"
        self._commit_sha = value
