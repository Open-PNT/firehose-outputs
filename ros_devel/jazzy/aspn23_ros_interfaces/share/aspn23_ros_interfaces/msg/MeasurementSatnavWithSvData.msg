
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Raw measurements from a satnav receiver.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
# pseudorange observations must refer to one receiver clock only. The receiver clock time of the
# measurement is the receiver clock time of the received signals. It is identical for the phase and
# range measurements and is identical for all satellites observed in a given epoch.
# Units: none
TypeSatnavTime receiver_clock_time

# Description: Number of different signal types tracked in the current epoch. Examples of signal types
# include GPS L1 C/A code, Galileo E1B.
# Units: none
uint16 num_signal_types

# Description: Total number of signals tracked across all PRNs and signal types.
# Units: none
uint16 num_signals_tracked

# Description: Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
# Units: none
# Note: array length is num_signals_tracked
TypeSatnavObs[] obs

# Description: Array of satellite position, velocity, and clock information. These line up precisely
# with the obs, such that sv_data[N] is the satellite information for observations obs[N] for any
# valid N.
# Units: none
# Note: array length is num_signals_tracked
TypeSatnavSvData[] sv_data

# Description: Number of integrity values.
# Units: none
uint8 num_integrity

# Description: Measurement integrity at the sensor level. Integrity is also available for each
# observable, which is found in the observable type definition. Includes the integrity method used and
# an integrity value (which is to be interpreted based upon the integrity method). The intent of
# allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
# methods.
# Units: none
# Note: array length is num_integrity
TypeIntegrity[] integrity
