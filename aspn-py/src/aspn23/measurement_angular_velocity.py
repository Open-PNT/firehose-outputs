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


class MeasurementAngularVelocityReferenceFrame(Enum):

    """
    Defines measurement reference.
    """

    """
    Angular velocity with respect to earth-centered inertial frame, expressed in an earth-centered
    inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
    """
    ECI = 0

    """
    Angular velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed
    (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
    """
    ECEF = 1

    """
    Angular velocity with respect to earth-fixed frame expressed in the North-East-Down (NED),
    local level frame. See also NED coordinate frame definition for N, E, and D definitions.
    """
    NED = 2

    """
    Angular velocity with respect to an inertial frame expressed in sensor coordinate frame.
    Sensor coordinate frame is defined in sensor metadataHeader.
    """
    SENSOR = 3


class MeasurementAngularVelocityImuType(Enum):

    """
    IMU type
    """

    """
    delta rotation measurements. Angular rate integrated over last measurement period expressed in
    radians. Time of validity is the end of the integration period. Integration period is from the
    previous measurement to the current measurement.
    """
    INTEGRATED = 0

    """
    sampled rotation rates. Angular rate is sampled and expressed in rad/s.
    """
    SAMPLED = 1


class MeasurementAngularVelocityErrorModel(Enum):

    """
    Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    """

    """
    No additional error model provided (num_error_model_params = 0).
    """
    NONE = 0


@dataclass
class MeasurementAngularVelocity(AspnBase):
    """
    Three dimensional angular velocity relative to and expressed in a user-defined reference frame.

    ### Attributes

    header - TypeHeader:
            Standard ASPN measurement header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    reference_frame - MeasurementAngularVelocityReferenceFrame:
            Defines measurement reference.

    imu_type - MeasurementAngularVelocityImuType:
            IMU type

    meas - NDArray[np.float64]:
            Angular velocity in 3 axes per enumerated definition.

    covariance - NDArray[np.float64]:
            Measurement error covariance.

    error_model - MeasurementAngularVelocityErrorModel:
            Defines an optional error model for other than zero-mean, additive, white Gaussian
            noise (AWGN).

    error_model_params - NDArray[np.float64]:
            Error model parameters that characterize the optional error model.

    integrity - List[TypeIntegrity]:
            Measurement integrity. Includes the integrity method used and an integrity value
            (which is to be interpreted based upon the integrity method). The intent of allowing
            num_integrity > 1 is to report multiple integrity values based on multiple integrity
            methods.
    """

    header: TypeHeader
    time_of_validity: TypeTimestamp
    reference_frame: MeasurementAngularVelocityReferenceFrame
    imu_type: MeasurementAngularVelocityImuType
    meas: NDArray[np.float64]
    covariance: NDArray[np.float64]
    error_model: MeasurementAngularVelocityErrorModel
    error_model_params: NDArray[np.float64]
    integrity: List[TypeIntegrity]
