# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aspn23_ros_interfaces:msg/MeasurementTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'clock_id'
# Member 'elapsed_nsec'
# Member 'elapsed_attosec'
# Member 'covariance'
# Member 'error_model_params'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MeasurementTime(type):
    """Metaclass of message 'MeasurementTime'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE': 0,
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
                'aspn23_ros_interfaces.msg.MeasurementTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__measurement_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__measurement_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__measurement_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__measurement_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__measurement_time

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
            'ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE': cls.__constants['ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE'],
        }

    @property
    def ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE(self):
        """Message constant 'ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE'."""
        return Metaclass_MeasurementTime.__constants['ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE']


class MeasurementTime(metaclass=Metaclass_MeasurementTime):
    """
    Message class 'MeasurementTime'.

    Constants:
      ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE
    """

    __slots__ = [
        '_header',
        '_time_of_validity',
        '_time_of_validity_attosec',
        '_num_obs',
        '_clock_id',
        '_elapsed_nsec',
        '_elapsed_attosec',
        '_digits_of_precision',
        '_covariance',
        '_error_model',
        '_num_error_model_params',
        '_error_model_params',
        '_num_integrity',
        '_integrity',
    ]

    _fields_and_field_types = {
        'header': 'aspn23_ros_interfaces/TypeHeader',
        'time_of_validity': 'aspn23_ros_interfaces/TypeTimestamp',
        'time_of_validity_attosec': 'int32',
        'num_obs': 'uint8',
        'clock_id': 'sequence<uint8>',
        'elapsed_nsec': 'sequence<int64>',
        'elapsed_attosec': 'sequence<int32>',
        'digits_of_precision': 'uint8',
        'covariance': 'sequence<double>',
        'error_model': 'uint8',
        'num_error_model_params': 'uint16',
        'error_model_params': 'sequence<double>',
        'num_integrity': 'uint8',
        'integrity': 'sequence<aspn23_ros_interfaces/TypeIntegrity>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aspn23_ros_interfaces', 'msg'], 'TypeTimestamp'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
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
        self.time_of_validity_attosec = kwargs.get('time_of_validity_attosec', int())
        self.num_obs = kwargs.get('num_obs', int())
        self.clock_id = array.array('B', kwargs.get('clock_id', []))
        self.elapsed_nsec = array.array('q', kwargs.get('elapsed_nsec', []))
        self.elapsed_attosec = array.array('i', kwargs.get('elapsed_attosec', []))
        self.digits_of_precision = kwargs.get('digits_of_precision', int())
        self.covariance = array.array('d', kwargs.get('covariance', []))
        self.error_model = kwargs.get('error_model', int())
        self.num_error_model_params = kwargs.get('num_error_model_params', int())
        self.error_model_params = array.array('d', kwargs.get('error_model_params', []))
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
        if self.time_of_validity_attosec != other.time_of_validity_attosec:
            return False
        if self.num_obs != other.num_obs:
            return False
        if self.clock_id != other.clock_id:
            return False
        if self.elapsed_nsec != other.elapsed_nsec:
            return False
        if self.elapsed_attosec != other.elapsed_attosec:
            return False
        if self.digits_of_precision != other.digits_of_precision:
            return False
        if self.covariance != other.covariance:
            return False
        if self.error_model != other.error_model:
            return False
        if self.num_error_model_params != other.num_error_model_params:
            return False
        if self.error_model_params != other.error_model_params:
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
    def time_of_validity_attosec(self):
        """Message field 'time_of_validity_attosec'."""
        return self._time_of_validity_attosec

    @time_of_validity_attosec.setter
    def time_of_validity_attosec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_of_validity_attosec' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_of_validity_attosec' field must be an integer in [-2147483648, 2147483647]"
        self._time_of_validity_attosec = value

    @builtins.property
    def num_obs(self):
        """Message field 'num_obs'."""
        return self._num_obs

    @num_obs.setter
    def num_obs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_obs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_obs' field must be an unsigned integer in [0, 255]"
        self._num_obs = value

    @builtins.property
    def clock_id(self):
        """Message field 'clock_id'."""
        return self._clock_id

    @clock_id.setter
    def clock_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'clock_id' array.array() must have the type code of 'B'"
            self._clock_id = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'clock_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._clock_id = array.array('B', value)

    @builtins.property
    def elapsed_nsec(self):
        """Message field 'elapsed_nsec'."""
        return self._elapsed_nsec

    @elapsed_nsec.setter
    def elapsed_nsec(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'elapsed_nsec' array.array() must have the type code of 'q'"
            self._elapsed_nsec = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'elapsed_nsec' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._elapsed_nsec = array.array('q', value)

    @builtins.property
    def elapsed_attosec(self):
        """Message field 'elapsed_attosec'."""
        return self._elapsed_attosec

    @elapsed_attosec.setter
    def elapsed_attosec(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'elapsed_attosec' array.array() must have the type code of 'i'"
            self._elapsed_attosec = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'elapsed_attosec' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._elapsed_attosec = array.array('i', value)

    @builtins.property
    def digits_of_precision(self):
        """Message field 'digits_of_precision'."""
        return self._digits_of_precision

    @digits_of_precision.setter
    def digits_of_precision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'digits_of_precision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'digits_of_precision' field must be an unsigned integer in [0, 255]"
        self._digits_of_precision = value

    @builtins.property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'covariance' array.array() must have the type code of 'd'"
            self._covariance = value
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
                "The 'covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._covariance = array.array('d', value)

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
