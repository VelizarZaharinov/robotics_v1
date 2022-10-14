# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_miner_interfaces:srv/RobotMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMove_Request(type):
    """Metaclass of message 'RobotMove_Request'."""

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
                'robo_miner_interfaces.srv.RobotMove_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_move__request

            from robo_miner_interfaces.msg import RobotMoveType
            if RobotMoveType.__class__._TYPE_SUPPORT is None:
                RobotMoveType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotMove_Request(metaclass=Metaclass_RobotMove_Request):
    """Message class 'RobotMove_Request'."""

    __slots__ = [
        '_robot_move_type',
    ]

    _fields_and_field_types = {
        'robot_move_type': 'robo_miner_interfaces/RobotMoveType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robo_miner_interfaces', 'msg'], 'RobotMoveType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robo_miner_interfaces.msg import RobotMoveType
        self.robot_move_type = kwargs.get('robot_move_type', RobotMoveType())

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
        if self.robot_move_type != other.robot_move_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_move_type(self):
        """Message field 'robot_move_type'."""
        return self._robot_move_type

    @robot_move_type.setter
    def robot_move_type(self, value):
        if __debug__:
            from robo_miner_interfaces.msg import RobotMoveType
            assert \
                isinstance(value, RobotMoveType), \
                "The 'robot_move_type' field must be a sub message of type 'RobotMoveType'"
        self._robot_move_type = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotMove_Response(type):
    """Metaclass of message 'RobotMove_Response'."""

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
                'robo_miner_interfaces.srv.RobotMove_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_move__response

            from robo_miner_interfaces.msg import RobotPositionResponse
            if RobotPositionResponse.__class__._TYPE_SUPPORT is None:
                RobotPositionResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotMove_Response(metaclass=Metaclass_RobotMove_Response):
    """Message class 'RobotMove_Response'."""

    __slots__ = [
        '_robot_position_response',
    ]

    _fields_and_field_types = {
        'robot_position_response': 'robo_miner_interfaces/RobotPositionResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robo_miner_interfaces', 'msg'], 'RobotPositionResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robo_miner_interfaces.msg import RobotPositionResponse
        self.robot_position_response = kwargs.get('robot_position_response', RobotPositionResponse())

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
        if self.robot_position_response != other.robot_position_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_position_response(self):
        """Message field 'robot_position_response'."""
        return self._robot_position_response

    @robot_position_response.setter
    def robot_position_response(self, value):
        if __debug__:
            from robo_miner_interfaces.msg import RobotPositionResponse
            assert \
                isinstance(value, RobotPositionResponse), \
                "The 'robot_position_response' field must be a sub message of type 'RobotPositionResponse'"
        self._robot_position_response = value


class Metaclass_RobotMove(type):
    """Metaclass of service 'RobotMove'."""

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
                'robo_miner_interfaces.srv.RobotMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_move

            from robo_miner_interfaces.srv import _robot_move
            if _robot_move.Metaclass_RobotMove_Request._TYPE_SUPPORT is None:
                _robot_move.Metaclass_RobotMove_Request.__import_type_support__()
            if _robot_move.Metaclass_RobotMove_Response._TYPE_SUPPORT is None:
                _robot_move.Metaclass_RobotMove_Response.__import_type_support__()


class RobotMove(metaclass=Metaclass_RobotMove):
    from robo_miner_interfaces.srv._robot_move import RobotMove_Request as Request
    from robo_miner_interfaces.srv._robot_move import RobotMove_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
