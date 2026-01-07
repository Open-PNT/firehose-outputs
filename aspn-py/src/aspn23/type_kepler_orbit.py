"""
This code is generated via firehose.
DO NOT hand edit code.  Make any changes required using the firehose repo instead.
"""


from dataclasses import dataclass
from typing import Optional

from numpy.typing import NDArray


@dataclass
class TypeKeplerOrbit:
    """
    Keplerian orbit parameters required to calculate satellite position

    ### Attributes

    m_0 - float:
            Mean anomaly at reference time.

    delta_n - float:
            Mean motion difference from computed value.

    e - float:
            Eccentricity.

    sqrt_a - float:
            Square root of semi-major axis.

    omega_0 - float:
            Longitude of ascending node of orbit plane at weekly epoch

    i_0 - float:
            Inclination angle at reference time.

    i_dot - float:
            Rate of change of inclination angle.

    omega - float:
            Argument of perigee.

    omega_dot - float:
            Rate of right ascension.

    c_uc - float:
            Amplitude of cosine harmonic correction terms to the argument of latitude.

    c_us - float:
            Amplitude of sine harmonic correction terms to the argument of latitude.

    c_rc - float:
            Amplitude of cosine harmonic correction terms to the orbit radius.

    c_rs - float:
            Amplitude of sine harmonic correction terms to the orbit radius.

    c_ic - float:
            Amplitude of cosine harmonic correction terms to the angle of inclination.

    c_is - float:
            Amplitude of sine harmonic correction terms to the angle of inclination.

    t_oe - float:
            Ephemeris reference time.
    """

    m_0: float
    delta_n: float
    e: float
    sqrt_a: float
    omega_0: float
    i_0: float
    i_dot: float
    omega: float
    omega_dot: float
    c_uc: float
    c_us: float
    c_rc: float
    c_rs: float
    c_ic: float
    c_is: float
    t_oe: float
