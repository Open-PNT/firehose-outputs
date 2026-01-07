"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""

from dataclasses import dataclass
from enum import Enum
from typing import List, Optional

import numpy as np
from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_header import TypeHeader
from .type_integrity import TypeIntegrity
from .type_timestamp import TypeTimestamp


class MeasurementImuImuType(Enum):

    """
    IMU type
    """

    """
    delta velocity and delta rotation measurements from the device's three axis accelerometers and
    three axis gyroscopes. Specific force integrated over last measurement period expressed as delta_v
    array in m/s. Angular rate integrated over last measurement period expressed as delta_theta array in
    radians. Time of validity is the end of integration period. Integration period is from previous
    measurement to the current measurement.
    """
    INTEGRATED = 0

    """
    sampled specific force and rotation rates from the device's three axis accelerometers and three
    axis gyroscopes. Specific force is sampled expressed as an array in m/s/s. Angular rate is sampled
    and expressed as an array in rad/s.
    """
    SAMPLED = 1


@dataclass
class MeasurementImu(AspnBase):
    """
    Inertial Measurement Unit (IMU) measurements from the device's three axis accelerometers and
    three axis gyroscopes.

    ### Attributes

    header - TypeHeader:
            Standard ASPN measurement header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    imu_type - MeasurementImuImuType:
            IMU type

    meas_accel - NDArray[np.float64]:
            Accelerometer (specific force) measurements in 3 axes per enumerated definition.

    meas_gyro - NDArray[np.float64]:
            Gyroscope measurements in 3 axes per enumerated definition.

    integrity - List[TypeIntegrity]:
            Measurement integrity. Includes the integrity method used and an integrity value
            (which is to be interpreted based upon the integrity method). The intent of allowing
            num_integrity > 1 is to report multiple integrity values based on multiple integrity
            methods.
    """

    header: TypeHeader
    time_of_validity: TypeTimestamp
    imu_type: MeasurementImuImuType
    meas_accel: NDArray[np.float64]
    meas_gyro: NDArray[np.float64]
    integrity: List[TypeIntegrity]
