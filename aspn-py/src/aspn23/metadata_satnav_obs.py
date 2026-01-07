"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_metadataheader import TypeMetadataheader
from .type_timestamp import TypeTimestamp


@dataclass
class MetadataSatnavObs(AspnBase):
    """
    Metadata for satnav_obs

    ### Attributes

    info - TypeMetadataheader:
            Standard ASPN metadata header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    deltarange_interval_start - Optional[Optional[float]]:
            Start time of the interval over which the deltarange is measured with respect to the
            measurement time. This value must be provided if the deltarange measurement is provided.

    deltarange_interval_stop - Optional[Optional[float]]:
            Stop time of the interval over which the deltarange is measured with respect to the
            measurement time. This value must be provided if the deltarange measurement is provided.
            If the deltarange integration period is the same as the measurement time, this value
            should be 0.
    """

    info: TypeMetadataheader
    time_of_validity: TypeTimestamp
    deltarange_interval_start: Optional[float]
    deltarange_interval_stop: Optional[float]
