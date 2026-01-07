
#include <aspn23/aspn.h>
#include "types.h"

void aspn23_free(void* pointer) {
	Aspn23TypeHeader* self = (Aspn23TypeHeader*)pointer;
	if (NULL == self) return;

	switch (self->message_type) {
	case ASPN_UNDEFINED:
		break;

	case ASPN_METADATA_BEIDOU_EPHEMERIS:
		aspn23_metadata_beidou_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_GLONASS_EPHEMERIS:
		aspn23_metadata_glonass_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS:
		aspn23_metadata_gps_cnav_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS:
		aspn23_metadata_gps_lnav_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS:
		aspn23_metadata_gps_mnav_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS:
		aspn23_metadata_gps_iono_utc_parameters_free(pointer);
		break;

	case ASPN_METADATA_GALILEO_EPHEMERIS:
		aspn23_metadata_galileo_ephemeris_free(pointer);
		break;

	case ASPN_METADATA_IMU:
		aspn23_metadata_imu_free(pointer);
		break;

	case ASPN_METADATA_GENERIC:
		aspn23_metadata_generic_free(pointer);
		break;

	case ASPN_METADATA_IMAGE_FEATURES:
		aspn23_metadata_image_features_free(pointer);
		break;

	case ASPN_METADATA_MAGNETIC_FIELD:
		aspn23_metadata_magnetic_field_free(pointer);
		break;

	case ASPN_METADATA_SATNAV_OBS:
		aspn23_metadata_satnav_obs_free(pointer);
		break;

	case ASPN_MEASUREMENT_IMU:
		aspn23_measurement_imu_free(pointer);
		break;

	case ASPN_MEASUREMENT_TDOA_1TX_2RX:
		aspn23_measurement_tdoa_1tx_2rx_free(pointer);
		break;

	case ASPN_MEASUREMENT_TDOA_2TX_1RX:
		aspn23_measurement_tdoa_2tx_1rx_free(pointer);
		break;

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED:
		aspn23_measurement_accumulated_distance_traveled_free(pointer);
		break;

	case ASPN_MEASUREMENT_ALTITUDE:
		aspn23_measurement_altitude_free(pointer);
		break;

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY:
		aspn23_measurement_angular_velocity_free(pointer);
		break;

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D:
		aspn23_measurement_angular_velocity_1d_free(pointer);
		break;

	case ASPN_MEASUREMENT_ATTITUDE_2D:
		aspn23_measurement_attitude_2d_free(pointer);
		break;

	case ASPN_MEASUREMENT_ATTITUDE_3D:
		aspn23_measurement_attitude_3d_free(pointer);
		break;

	case ASPN_MEASUREMENT_BAROMETER:
		aspn23_measurement_barometer_free(pointer);
		break;

	case ASPN_MEASUREMENT_DELTA_POSITION:
		aspn23_measurement_delta_position_free(pointer);
		break;

	case ASPN_MEASUREMENT_DELTA_RANGE:
		aspn23_measurement_delta_range_free(pointer);
		break;

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT:
		aspn23_measurement_delta_range_to_point_free(pointer);
		break;

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS:
		aspn23_measurement_direction_2d_to_points_free(pointer);
		break;

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS:
		aspn23_measurement_direction_3d_to_points_free(pointer);
		break;

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D:
		aspn23_measurement_direction_of_motion_2d_free(pointer);
		break;

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D:
		aspn23_measurement_direction_of_motion_3d_free(pointer);
		break;

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE:
		aspn23_measurement_frequency_difference_free(pointer);
		break;

	case ASPN_MEASUREMENT_HEADING:
		aspn23_measurement_heading_free(pointer);
		break;

	case ASPN_MEASUREMENT_IMAGE:
		aspn23_measurement_image_free(pointer);
		break;

	case ASPN_MEASUREMENT_MAGNETIC_FIELD:
		aspn23_measurement_magnetic_field_free(pointer);
		break;

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE:
		aspn23_measurement_magnetic_field_magnitude_free(pointer);
		break;

	case ASPN_MEASUREMENT_POSITION:
		aspn23_measurement_position_free(pointer);
		break;

	case ASPN_MEASUREMENT_POSITION_ATTITUDE:
		aspn23_measurement_position_attitude_free(pointer);
		break;

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE:
		aspn23_measurement_position_velocity_attitude_free(pointer);
		break;

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT:
		aspn23_measurement_range_rate_to_point_free(pointer);
		break;

	case ASPN_MEASUREMENT_RANGE_TO_POINT:
		aspn23_measurement_range_to_point_free(pointer);
		break;

	case ASPN_MEASUREMENT_SATNAV:
		aspn23_measurement_satnav_free(pointer);
		break;

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME:
		aspn23_measurement_satnav_subframe_free(pointer);
		break;

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA:
		aspn23_measurement_satnav_with_sv_data_free(pointer);
		break;

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D:
		aspn23_measurement_specific_force_1d_free(pointer);
		break;

	case ASPN_MEASUREMENT_SPEED:
		aspn23_measurement_speed_free(pointer);
		break;

	case ASPN_MEASUREMENT_TEMPERATURE:
		aspn23_measurement_temperature_free(pointer);
		break;

	case ASPN_MEASUREMENT_TIME:
		aspn23_measurement_time_free(pointer);
		break;

	case ASPN_MEASUREMENT_TIME_DIFFERENCE:
		aspn23_measurement_time_difference_free(pointer);
		break;

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE:
		aspn23_measurement_time_frequency_difference_free(pointer);
		break;

	case ASPN_MEASUREMENT_VELOCITY:
		aspn23_measurement_velocity_free(pointer);
		break;

	default: {
		printf("aspn23_free: cannot free message of type %i\n", self->message_type);
		break;
	}
	}
}

char* aspn23_runtime_type_get_name(Aspn23MessageType type) {
	switch (type) {
	case ASPN_UNDEFINED:
		return "UNDEFINED";

	case ASPN_METADATA_BEIDOU_EPHEMERIS:
		return "ASPN23_METADATA_BEIDOU_EPHEMERIS";

	case ASPN_METADATA_GLONASS_EPHEMERIS:
		return "ASPN23_METADATA_GLONASS_EPHEMERIS";

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS:
		return "ASPN23_METADATA_GPS_CNAV_EPHEMERIS";

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS:
		return "ASPN23_METADATA_GPS_LNAV_EPHEMERIS";

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS:
		return "ASPN23_METADATA_GPS_MNAV_EPHEMERIS";

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS:
		return "ASPN23_METADATA_GPS_IONO_UTC_PARAMETERS";

	case ASPN_METADATA_GALILEO_EPHEMERIS:
		return "ASPN23_METADATA_GALILEO_EPHEMERIS";

	case ASPN_METADATA_IMU:
		return "ASPN23_METADATA_IMU";

	case ASPN_METADATA_GENERIC:
		return "ASPN23_METADATA_GENERIC";

	case ASPN_METADATA_IMAGE_FEATURES:
		return "ASPN23_METADATA_IMAGE_FEATURES";

	case ASPN_METADATA_MAGNETIC_FIELD:
		return "ASPN23_METADATA_MAGNETIC_FIELD";

	case ASPN_METADATA_SATNAV_OBS:
		return "ASPN23_METADATA_SATNAV_OBS";

	case ASPN_MEASUREMENT_IMU:
		return "ASPN23_MEASUREMENT_IMU";

	case ASPN_MEASUREMENT_TDOA_1TX_2RX:
		return "ASPN23_MEASUREMENT_TDOA_1TX_2RX";

	case ASPN_MEASUREMENT_TDOA_2TX_1RX:
		return "ASPN23_MEASUREMENT_TDOA_2TX_1RX";

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED:
		return "ASPN23_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED";

	case ASPN_MEASUREMENT_ALTITUDE:
		return "ASPN23_MEASUREMENT_ALTITUDE";

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY:
		return "ASPN23_MEASUREMENT_ANGULAR_VELOCITY";

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D:
		return "ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D";

	case ASPN_MEASUREMENT_ATTITUDE_2D:
		return "ASPN23_MEASUREMENT_ATTITUDE_2D";

	case ASPN_MEASUREMENT_ATTITUDE_3D:
		return "ASPN23_MEASUREMENT_ATTITUDE_3D";

	case ASPN_MEASUREMENT_BAROMETER:
		return "ASPN23_MEASUREMENT_BAROMETER";

	case ASPN_MEASUREMENT_DELTA_POSITION:
		return "ASPN23_MEASUREMENT_DELTA_POSITION";

	case ASPN_MEASUREMENT_DELTA_RANGE:
		return "ASPN23_MEASUREMENT_DELTA_RANGE";

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT:
		return "ASPN23_MEASUREMENT_DELTA_RANGE_TO_POINT";

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS:
		return "ASPN23_MEASUREMENT_DIRECTION_2D_TO_POINTS";

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS:
		return "ASPN23_MEASUREMENT_DIRECTION_3D_TO_POINTS";

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D:
		return "ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D";

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D:
		return "ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D";

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE:
		return "ASPN23_MEASUREMENT_FREQUENCY_DIFFERENCE";

	case ASPN_MEASUREMENT_HEADING:
		return "ASPN23_MEASUREMENT_HEADING";

	case ASPN_MEASUREMENT_IMAGE:
		return "ASPN23_MEASUREMENT_IMAGE";

	case ASPN_MEASUREMENT_MAGNETIC_FIELD:
		return "ASPN23_MEASUREMENT_MAGNETIC_FIELD";

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE:
		return "ASPN23_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE";

	case ASPN_MEASUREMENT_POSITION:
		return "ASPN23_MEASUREMENT_POSITION";

	case ASPN_MEASUREMENT_POSITION_ATTITUDE:
		return "ASPN23_MEASUREMENT_POSITION_ATTITUDE";

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE:
		return "ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE";

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT:
		return "ASPN23_MEASUREMENT_RANGE_RATE_TO_POINT";

	case ASPN_MEASUREMENT_RANGE_TO_POINT:
		return "ASPN23_MEASUREMENT_RANGE_TO_POINT";

	case ASPN_MEASUREMENT_SATNAV:
		return "ASPN23_MEASUREMENT_SATNAV";

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME:
		return "ASPN23_MEASUREMENT_SATNAV_SUBFRAME";

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA:
		return "ASPN23_MEASUREMENT_SATNAV_WITH_SV_DATA";

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D:
		return "ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D";

	case ASPN_MEASUREMENT_SPEED:
		return "ASPN23_MEASUREMENT_SPEED";

	case ASPN_MEASUREMENT_TEMPERATURE:
		return "ASPN23_MEASUREMENT_TEMPERATURE";

	case ASPN_MEASUREMENT_TIME:
		return "ASPN23_MEASUREMENT_TIME";

	case ASPN_MEASUREMENT_TIME_DIFFERENCE:
		return "ASPN23_MEASUREMENT_TIME_DIFFERENCE";

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE:
		return "ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE";

	case ASPN_MEASUREMENT_VELOCITY:
		return "ASPN23_MEASUREMENT_VELOCITY";

	default: {
		printf("aspn23_runtime_type_get_name: cannot get name from message of type %i\n", type);
		return NULL;
	}
	}
}
