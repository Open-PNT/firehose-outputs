
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavSvData.h"

Aspn23TypeSatnavSvData* ASPN_NULLABLE
aspn23_type_satnav_sv_data_new(int16_t prn,
                               Aspn23TypeSatnavSatelliteSystem* satellite_system,
                               enum Aspn23TypeSatnavSvDataEphemerisType ephemeris_type,
                               Aspn23TypeSatnavTime* sv_data_time,
                               enum Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame,
                               double sv_pos[3],
                               double sv_vel[3],
                               double sv_clock_bias,
                               double sv_clock_drift,
                               enum Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum,
                               float group_delay_vector[4]) {
	Aspn23TypeSatnavSvData* self =
	    (struct Aspn23TypeSatnavSvData*)malloc(sizeof(Aspn23TypeSatnavSvData));
	if (NULL == self) return NULL;
	self->prn = prn;

	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(satellite_system);
	self->satellite_system = *satellite_system_prep;
	free(satellite_system_prep);

	self->ephemeris_type = ephemeris_type;

	Aspn23TypeSatnavTime* sv_data_time_prep = aspn23_type_satnav_time_copy(sv_data_time);
	self->sv_data_time                      = *sv_data_time_prep;
	free(sv_data_time_prep);

	self->coordinate_frame = coordinate_frame;

	if (sv_pos != NULL)
		memcpy(self->sv_pos, sv_pos, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->sv_pos[ii] = NAN;

	if (sv_vel != NULL)
		memcpy(self->sv_vel, sv_vel, 3 * sizeof(double));
	else
		for (size_t ii = 0; ii < 3; ii++) self->sv_vel[ii] = NAN;

	self->sv_clock_bias    = sv_clock_bias;
	self->sv_clock_drift   = sv_clock_drift;
	self->group_delay_enum = group_delay_enum;

	if (group_delay_vector != NULL)
		memcpy(self->group_delay_vector, group_delay_vector, 4 * sizeof(float));
	else
		for (size_t ii = 0; ii < 4; ii++) self->group_delay_vector[ii] = NAN;

	return self;
}

Aspn23TypeSatnavSvData* ASPN_NULLABLE
aspn23_type_satnav_sv_data_copy(Aspn23TypeSatnavSvData* input) {
	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(&input->satellite_system);
	Aspn23TypeSatnavTime* sv_data_time_prep = aspn23_type_satnav_time_copy(&input->sv_data_time);
	Aspn23TypeSatnavSvData* out             = aspn23_type_satnav_sv_data_new(input->prn,
                                                                 satellite_system_prep,
                                                                 input->ephemeris_type,
                                                                 sv_data_time_prep,
                                                                 input->coordinate_frame,
                                                                 input->sv_pos,
                                                                 input->sv_vel,
                                                                 input->sv_clock_bias,
                                                                 input->sv_clock_drift,
                                                                 input->group_delay_enum,
                                                                 input->group_delay_vector);
	aspn23_type_satnav_satellite_system_free(satellite_system_prep);
	aspn23_type_satnav_time_free(sv_data_time_prep);
	return out;
}

void aspn23_type_satnav_sv_data_free(void* pointer) {
	Aspn23TypeSatnavSvData* self = (Aspn23TypeSatnavSvData*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_sv_data_free_members(self);
	free(self);
}

void aspn23_type_satnav_sv_data_free_members(Aspn23TypeSatnavSvData* self) {
	if (NULL == self) return;
	aspn23_type_satnav_satellite_system_free_members(&self->satellite_system);
	aspn23_type_satnav_time_free_members(&self->sv_data_time);
}
