"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray

from .aspn_base import AspnBase
from .type_kepler_orbit import TypeKeplerOrbit
from .type_metadataheader import TypeMetadataheader
from .type_satnav_clock import TypeSatnavClock
from .type_timestamp import TypeTimestamp


@dataclass
class MetadataBeidouEphemeris(AspnBase):
    """
    BeiDou Ephemeris describing satellite locations. Definitions and usage are covered in
    BDS-SIS-ICD-BII-3.0, February 2019,

    ### Attributes

    info - TypeMetadataheader:
            Standard ASPN metadata header.

    time_of_validity - TypeTimestamp:
            Time at which the measurement is considered to be valid.

    prn - int:
            Satellite PRN number.

    clock - TypeSatnavClock:
            GNSS broadcast parameters required to calculate sv clock corrections.

    orbit - TypeKeplerOrbit:
            Keplerian orbit parameters required to calculate satellite position.

    t_gd1 - float:
            Group delay differential for B1I user.

    t_gd2 - float:
            Group delay differential for B2I user.

    aodc - int:
            Age of data, clock is updated at start of each hour in BDT per table 5-6 in
            BDS-SIS-ICD-BII-3.0.

    aode - int:
            Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
            BDS-SIS-ICD-BII-3.0.
    """

    info: TypeMetadataheader
    time_of_validity: TypeTimestamp
    prn: int
    clock: TypeSatnavClock
    orbit: TypeKeplerOrbit
    t_gd1: float
    t_gd2: float
    aodc: int
    aode: int
