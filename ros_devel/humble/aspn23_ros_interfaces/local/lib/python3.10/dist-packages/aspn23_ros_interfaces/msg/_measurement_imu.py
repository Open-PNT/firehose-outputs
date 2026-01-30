# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/MeasurementImu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'meas_accel'
# Member 'meas_gyro'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeasurementImu(type):
    """Metaclass of message 'MeasurementImu'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED': 0,
        'ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED': 1,
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
                'aspn23_ros_interfaces.msg.MeasurementImu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__measurement_imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__measurement_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__measurement_imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__measurement_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__measurement_imu

            from aspn23_ros_interfaces.msg import TypeHeader
            if TypeHeader.__class__._TYPE_SUPPORT is None:
                TypeHeader.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeIntegrity
            if TypeIntegrity.__class__._TYPE_SUPPORT is None:
                TypeIntegrity.__class__.__import_type_support__()

            from aspn23_ros_interfaces.msg import TypeTimestamp
            if TypeTimestamp.__class__._TYPE_SUPPORT is None:
                TypeTimestamp.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED': cls.__constants['ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED'],
            'ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED': cls.__constants['ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED'],
        }

    @property
    def ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED(self):
        """Message constant 'ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED'."""
        return Metaclass_MeasurementImu.__constants['ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED']

    @property
    def ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED(self):
        """Message constant 'ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED'."""
        return Metaclass_MeasurementImu.__constants['ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED']


class MeasurementImu(metaclass=Metaclass_MeasurementImu):
    """
    Message class 'MeasurementImu'.

    Constants:
      ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED
      ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED
    """

    __slots__ = [
        '_header',
        '_time_of_validity',
        '_imu_type',
        '_meas_accel',
        '_meas_gyro',
        '_num_integrity',
        '_integrity',
    ]

    _fields_and_field_types = {
        'header': 'aspn23_ros_interfaces/TypeHeader',
        'time_of_validity': 'aspn23_ros_interfaces/TypeTimestamp',
        'imu_type': 'uint8',
        'meas_accel': 'double[3]',
        'meas_gyro': 'double[3]',
        'num_integrity': 'uint8',
        'integrity': 'sequence<aspn23_ros_interfaces/TypeIntegrity>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeTimestamp'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeIntegrity')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aspn23_ros_interfaces.msg import TypeHeader
        self.header = kwargs.get('header', TypeHeader())
        from aspn23_ros_interfaces.msg import TypeTimestamp
        self.time_of_validity = kwargs.get('time_of_validity', TypeTimestamp())
        self.imu_type = kwargs.get('imu_type', int())
        if 'meas_accel' not in kwargs:
            self.meas_accel = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.meas_accel = kwargs.get('meas_accel')
        if 'meas_gyro' not in kwargs:
            self.meas_gyro = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.meas_gyro = kwargs.get('meas_gyro')
        self.num_integrity = kwargs.get('num_integrity', int())
        self.integrity = kwargs.get('integrity', [])

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
        if self.header != other.header:
            return False
        if self.time_of_validity != other.time_of_validity:
            return False
        if self.imu_type != other.imu_type:
            return False
        if any(self.meas_accel != other.meas_accel):
            return False
        if any(self.meas_gyro != other.meas_gyro):
            return False
        if self.num_integrity != other.num_integrity:
            return False
        if self.integrity != other.integrity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeHeader
            assert \
                isinstance(value, TypeHeader), \
                "The 'header' field must be a sub message of type 'TypeHeader'"
        self._header = value

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
    def imu_type(self):
        """Message field 'imu_type'."""
        return self._imu_type

    @imu_type.setter
    def imu_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'imu_type' field must be an unsigned integer in [0, 255]"
        self._imu_type = value

    @builtins.property
    def meas_accel(self):
        """Message field 'meas_accel'."""
        return self._meas_accel

    @meas_accel.setter
    def meas_accel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'meas_accel' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'meas_accel' numpy.ndarray() must have a size of 3"
            self._meas_accel = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'meas_accel' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._meas_accel = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def meas_gyro(self):
        """Message field 'meas_gyro'."""
        return self._meas_gyro

    @meas_gyro.setter
    def meas_gyro(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'meas_gyro' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'meas_gyro' numpy.ndarray() must have a size of 3"
            self._meas_gyro = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'meas_gyro' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._meas_gyro = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def num_integrity(self):
        """Message field 'num_integrity'."""
        return self._num_integrity

    @num_integrity.setter
    def num_integrity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_integrity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_integrity' field must be an unsigned integer in [0, 255]"
        self._num_integrity = value

    @builtins.property
    def integrity(self):
        """Message field 'integrity'."""
        return self._integrity

    @integrity.setter
    def integrity(self, value):
        if __debug__:
            from aspn23_ros_interfaces.msg import TypeIntegrity
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
                 all(isinstance(v, TypeIntegrity) for v in value) and
                 True), \
                "The 'integrity' field must be a set or sequence and each value of type 'TypeIntegrity'"
        self._integrity = value
