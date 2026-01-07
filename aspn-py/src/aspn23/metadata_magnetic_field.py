"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

import numpy as np
from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_metadataheader import TypeMetadataheader
from .type_mounting import TypeMounting
from .type_timestamp import TypeTimestamp


@dataclass
class MetadataMagneticField(AspnBase):
    """
    Metadata for a magnetic field measurement. In addition to generic metadata information,
    calibration parameters may be provided to account for effects such as soft iron, scale factor,
    non-orthogonality, zero-bias, and hard iron. In general, for an num_meas-dimensional measurement,
    the magnetic field calibration metadata (K and b) shall be used as m_calibrated = K * m_measured - b
    where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for num_meas = 1) and K is an
    num_meas x num_meas matrix (scalar for num_meas = 1). See magnetic_calibration.md for additional
    details. More sophisticated approaches that include calibration parameters such as time-varying
    effects, first-order Gauss-Markov bias models, and calibration parameter uncertainties may be
    included using an appropriate error model in the measurement message.

    ### Attributes

    info - TypeMetadataheader:
            Standard ASPN metadata header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    mounting - TypeMounting:
            Standard ASPN mounting information.

    k - Optional[Optional[NDArray[np.float64]]]:
            Optional calibration parameter to account for the combined effects of soft iron,
            scale factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional,
            but if provided, b must also be provided.

    b - Optional[Optional[NDArray[np.float64]]]:
            Optional calibration parameter to account for the combined effects of zero-bias and
            hard iron as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must
            also be provided.
    """

    info: TypeMetadataheader
    time_of_validity: TypeTimestamp
    mounting: TypeMounting
    k: Optional[NDArray[np.float64]]
    b: Optional[NDArray[np.float64]]
