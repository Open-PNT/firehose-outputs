# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TypeSatnavTime(type):
    """Metaclass of message 'TypeSatnavTime'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS': 0,
        'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO': 1,
        'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU': 2,
        'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS': 3,
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
                'aspn23_ros_interfaces.msg.TypeSatnavTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__type_satnav_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__type_satnav_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__type_satnav_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__type_satnav_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__type_satnav_time

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS': cls.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS'],
            'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO': cls.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO'],
            'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU': cls.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU'],
            'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS': cls.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS'],
        }

    @property
    def ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS(self):
        """Message constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS'."""
        return Metaclass_TypeSatnavTime.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS']

    @property
    def ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO(self):
        """Message constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO'."""
        return Metaclass_TypeSatnavTime.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO']

    @property
    def ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU(self):
        """Message constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU'."""
        return Metaclass_TypeSatnavTime.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU']

    @property
    def ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS(self):
        """Message constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS'."""
        return Metaclass_TypeSatnavTime.__constants['ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS']


class TypeSatnavTime(metaclass=Metaclass_TypeSatnavTime):
    """
    Message class 'TypeSatnavTime'.

    Constants:
      ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS
      ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO
      ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU
      ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS
    """

    __slots__ = [
        '_week_number',
        '_seconds_of_week',
        '_time_reference',
    ]

    _fields_and_field_types = {
        'week_number': 'uint16',
        'seconds_of_week': 'double',
        'time_reference': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.week_number = kwargs.get('week_number', int())
        self.seconds_of_week = kwargs.get('seconds_of_week', float())
        self.time_reference = kwargs.get('time_reference', int())

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
        if self.week_number != other.week_number:
            return False
        if self.seconds_of_week != other.seconds_of_week:
            return False
        if self.time_reference != other.time_reference:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def week_number(self):
        """Message field 'week_number'."""
        return self._week_number

    @week_number.setter
    def week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'week_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'week_number' field must be an unsigned integer in [0, 65535]"
        self._week_number = value

    @builtins.property
    def seconds_of_week(self):
        """Message field 'seconds_of_week'."""
        return self._seconds_of_week

    @seconds_of_week.setter
    def seconds_of_week(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'seconds_of_week' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'seconds_of_week' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._seconds_of_week = value

    @builtins.property
    def time_reference(self):
        """Message field 'time_reference'."""
        return self._time_reference

    @time_reference.setter
    def time_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_reference' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_reference' field must be an unsigned integer in [0, 255]"
        self._time_reference = value
