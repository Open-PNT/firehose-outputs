
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGpsCnavEphemeris.h"

Aspn23MetadataGpsCnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_cnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double t_gd,
                                       uint16_t iodc,
                                       uint8_t iode,
                                       double isc_l1_ca,
                                       double isc_l2_c,
                                       double isc_l5_i5,
                                       double isc_l5_q5,
                                       double delta_a_0,
                                       double a_dot) {
	Aspn23MetadataGpsCnavEphemeris* self =
	    (struct Aspn23MetadataGpsCnavEphemeris*)malloc(sizeof(Aspn23MetadataGpsCnavEphemeris));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->week_number = week_number;
	self->prn         = prn;

	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(clock);
	self->clock                       = *clock_prep;
	free(clock_prep);

	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(orbit);
	self->orbit                       = *orbit_prep;
	free(orbit_prep);

	self->t_gd      = t_gd;
	self->iodc      = iodc;
	self->iode      = iode;
	self->isc_l1_ca = isc_l1_ca;
	self->isc_l2_c  = isc_l2_c;
	self->isc_l5_i5 = isc_l5_i5;
	self->isc_l5_q5 = isc_l5_q5;
	self->delta_a_0 = delta_a_0;
	self->a_dot     = a_dot;
	return self;
}

Aspn23MetadataGpsCnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_cnav_ephemeris_copy(Aspn23MetadataGpsCnavEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(&input->clock);
	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(&input->orbit);
	Aspn23MetadataGpsCnavEphemeris* out =
	    aspn23_metadata_gps_cnav_ephemeris_new(info_prep,
	                                           time_of_validity_prep,
	                                           input->week_number,
	                                           input->prn,
	                                           clock_prep,
	                                           orbit_prep,
	                                           input->t_gd,
	                                           input->iodc,
	                                           input->iode,
	                                           input->isc_l1_ca,
	                                           input->isc_l2_c,
	                                           input->isc_l5_i5,
	                                           input->isc_l5_q5,
	                                           input->delta_a_0,
	                                           input->a_dot);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_clock_free(clock_prep);
	aspn23_type_kepler_orbit_free(orbit_prep);
	return out;
}

void aspn23_metadata_gps_cnav_ephemeris_free(void* pointer) {
	Aspn23MetadataGpsCnavEphemeris* self = (Aspn23MetadataGpsCnavEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_gps_cnav_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_gps_cnav_ephemeris_free_members(Aspn23MetadataGpsCnavEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_clock_free_members(&self->clock);
	aspn23_type_kepler_orbit_free_members(&self->orbit);
}
