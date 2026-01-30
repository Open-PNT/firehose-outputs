# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/MetadataImu.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_model_params'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MetadataImu(type):
    """Metaclass of message 'MetadataImu'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_METADATA_IMU_ERROR_MODEL_BASIC': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aspn23_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aspn23_ros_interfaces.msg.MetadataImu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metadata_imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metadata_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metadata_imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metadata_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metadata_imu

            from aspn23_ros_interfaces.msg import TypeMetadataheader
            if TypeMetadataheader.__class__._TYPE_SUPPORT is None:
                TypeMetadataheader.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeMounting
            if TypeMounting.__class__._TYPE_SUPPORT is None:
                TypeMounting.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeTimestamp
            if TypeTimestamp.__class__._TYPE_SUPPORT is None:
                TypeTimestamp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_METADATA_IMU_ERROR_MODEL_BASIC': cls.__constants['ASPN23_METADATA_IMU_ERROR_MODEL_BASIC'],
        }

    @property
    def ASPN23_METADATA_IMU_ERROR_MODEL_BASIC(self):
        """Message constant 'ASPN23_METADATA_IMU_ERROR_MODEL_BASIC'."""
        return Metaclass_MetadataImu.__constants['ASPN23_METADATA_IMU_ERROR_MODEL_BASIC']


class MetadataImu(metaclass=Metaclass_MetadataImu):
    """
    Message class 'MetadataImu'.

    Constants:
      ASPN23_METADATA_IMU_ERROR_MODEL_BASIC
    """

    __slots__ = [
        '_info',
        '_time_of_validity',
        '_mounting',
        '_error_model',
        '_num_error_model_params',
        '_error_model_params',
    ]

    _fields_and_field_types = {
        'info': 'aspn23_ros_interfaces/TypeMetadataheader',
        'time_of_validity': 'aspn23_ros_interfaces/TypeTimestamp',
        'mounting': 'aspn23_ros_interfaces/TypeMounting',
        'error_model': 'uint8',
        'num_error_model_params': 'uint16',
        'error_model_params': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeMetadataheader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeTimestamp'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeMounting'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeMetadataheader
        self.info = kwargs.get('info', TypeMetadataheader())
        from aspn23_ros_interfaces.msg import TypeTimestamp
        self.time_of_validity = kwargs.get('time_of_validity', TypeTimestamp())
        from aspn23_ros_interfaces.msg import TypeMounting
        self.mounting = kwargs.get('mounting', TypeMounting())
        self.error_model = kwargs.get('error_model', int())
        self.num_error_model_params = kwargs.get('num_error_model_params', int())
        self.error_model_params = array.array('d', kwargs.get('error_model_params', []))

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
        if self.info != other.info:
            return False
        if self.time_of_validity != other.time_of_validity:
            return False
        if self.mounting != other.mounting:
            return False
        if self.error_model != other.error_model:
            return False
        if self.num_error_model_params != other.num_error_model_params:
            return False
        if self.error_model_params != other.error_model_params:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeMetadataheader
            assert \
                isinstance(value, TypeMetadataheader), \
                "The 'info' field must be a sub message of type 'TypeMetadataheader'"
        self._info = value

    @builtins.property
    def time_of_validity(self):
        """Message field 'time_of_validity'."""
        return self._time_of_validity

    @time_of_validity.setter
    def time_of_validity(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeTimestamp
            assert \
                isinstance(value, TypeTimestamp), \
                "The 'time_of_validity' field must be a sub message of type 'TypeTimestamp'"
        self._time_of_validity = value

    @builtins.property
    def mounting(self):
        """Message field 'mounting'."""
        return self._mounting

    @mounting.setter
    def mounting(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeMounting
            assert \
                isinstance(value, TypeMounting), \
                "The 'mounting' field must be a sub message of type 'TypeMounting'"
        self._mounting = value

    @builtins.property
    def error_model(self):
        """Message field 'error_model'."""
        return self._error_model

    @error_model.setter
    def error_model(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_model' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_model' field must be an unsigned integer in [0, 255]"
        self._error_model = value

    @builtins.property
    def num_error_model_params(self):
        """Message field 'num_error_model_params'."""
        return self._num_error_model_params

    @num_error_model_params.setter
    def num_error_model_params(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_error_model_params' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_error_model_params' field must be an unsigned integer in [0, 65535]"
        self._num_error_model_params = value

    @builtins.property
    def error_model_params(self):
        """Message field 'error_model_params'."""
        return self._error_model_params

    @error_model_params.setter
    def error_model_params(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'error_model_params' array.array() must have the type code of 'd'"
            self._error_model_params = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'error_model_params' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._error_model_params = array.array('d', value)
