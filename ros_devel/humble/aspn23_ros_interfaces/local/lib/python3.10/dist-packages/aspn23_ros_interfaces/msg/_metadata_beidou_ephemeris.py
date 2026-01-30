# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MetadataBeidouEphemeris(type):
    """Metaclass of message 'MetadataBeidouEphemeris'."""

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
            module = import_type_support('aspn23_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aspn23_ros_interfaces.msg.MetadataBeidouEphemeris')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metadata_beidou_ephemeris
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metadata_beidou_ephemeris
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metadata_beidou_ephemeris
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metadata_beidou_ephemeris
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metadata_beidou_ephemeris

            from aspn23_ros_interfaces.msg import TypeKeplerOrbit
            if TypeKeplerOrbit.__class__._TYPE_SUPPORT is None:
                TypeKeplerOrbit.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeMetadataheader
            if TypeMetadataheader.__class__._TYPE_SUPPORT is None:
                TypeMetadataheader.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeSatnavClock
            if TypeSatnavClock.__class__._TYPE_SUPPORT is None:
                TypeSatnavClock.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeTimestamp
            if TypeTimestamp.__class__._TYPE_SUPPORT is None:
                TypeTimestamp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MetadataBeidouEphemeris(metaclass=Metaclass_MetadataBeidouEphemeris):
    """Message class 'MetadataBeidouEphemeris'."""

    __slots__ = [
        '_info',
        '_time_of_validity',
        '_prn',
        '_clock',
        '_orbit',
        '_t_gd1',
        '_t_gd2',
        '_aodc',
        '_aode',
    ]

    _fields_and_field_types = {
        'info': 'aspn23_ros_interfaces/TypeMetadataheader',
        'time_of_validity': 'aspn23_ros_interfaces/TypeTimestamp',
        'prn': 'int32',
        'clock': 'aspn23_ros_interfaces/TypeSatnavClock',
        'orbit': 'aspn23_ros_interfaces/TypeKeplerOrbit',
        't_gd1': 'double',
        't_gd2': 'double',
        'aodc': 'int16',
        'aode': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeMetadataheader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeTimestamp'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeSatnavClock'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeKeplerOrbit'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeMetadataheader
        self.info = kwargs.get('info', TypeMetadataheader())
        from aspn23_ros_interfaces.msg import TypeTimestamp
        self.time_of_validity = kwargs.get('time_of_validity', TypeTimestamp())
        self.prn = kwargs.get('prn', int())
        from aspn23_ros_interfaces.msg import TypeSatnavClock
        self.clock = kwargs.get('clock', TypeSatnavClock())
        from aspn23_ros_interfaces.msg import TypeKeplerOrbit
        self.orbit = kwargs.get('orbit', TypeKeplerOrbit())
        self.t_gd1 = kwargs.get('t_gd1', float())
        self.t_gd2 = kwargs.get('t_gd2', float())
        self.aodc = kwargs.get('aodc', int())
        self.aode = kwargs.get('aode', int())

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
        if self.prn != other.prn:
            return False
        if self.clock != other.clock:
            return False
        if self.orbit != other.orbit:
            return False
        if self.t_gd1 != other.t_gd1:
            return False
        if self.t_gd2 != other.t_gd2:
            return False
        if self.aodc != other.aodc:
            return False
        if self.aode != other.aode:
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
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prn' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'prn' field must be an integer in [-2147483648, 2147483647]"
        self._prn = value

    @builtins.property
    def clock(self):
        """Message field 'clock'."""
        return self._clock

    @clock.setter
    def clock(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeSatnavClock
            assert \
                isinstance(value, TypeSatnavClock), \
                "The 'clock' field must be a sub message of type 'TypeSatnavClock'"
        self._clock = value

    @builtins.property
    def orbit(self):
        """Message field 'orbit'."""
        return self._orbit

    @orbit.setter
    def orbit(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeKeplerOrbit
            assert \
                isinstance(value, TypeKeplerOrbit), \
                "The 'orbit' field must be a sub message of type 'TypeKeplerOrbit'"
        self._orbit = value

    @builtins.property
    def t_gd1(self):
        """Message field 't_gd1'."""
        return self._t_gd1

    @t_gd1.setter
    def t_gd1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_gd1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_gd1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_gd1 = value

    @builtins.property
    def t_gd2(self):
        """Message field 't_gd2'."""
        return self._t_gd2

    @t_gd2.setter
    def t_gd2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_gd2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't_gd2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t_gd2 = value

    @builtins.property
    def aodc(self):
        """Message field 'aodc'."""
        return self._aodc

    @aodc.setter
    def aodc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aodc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'aodc' field must be an integer in [-32768, 32767]"
        self._aodc = value

    @builtins.property
    def aode(self):
        """Message field 'aode'."""
        return self._aode

    @aode.setter
    def aode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'aode' field must be an integer in [-32768, 32767]"
        self._aode = value
