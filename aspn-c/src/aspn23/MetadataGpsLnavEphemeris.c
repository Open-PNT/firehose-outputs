
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGpsLnavEphemeris.h"

Aspn23MetadataGpsLnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_lnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double t_gd,
                                       uint16_t iodc,
                                       uint8_t iode) {
	Aspn23MetadataGpsLnavEphemeris* self =
	    (struct Aspn23MetadataGpsLnavEphemeris*)malloc(sizeof(Aspn23MetadataGpsLnavEphemeris));
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

	self->t_gd = t_gd;
	self->iodc = iodc;
	self->iode = iode;
	return self;
}

Aspn23MetadataGpsLnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_lnav_ephemeris_copy(Aspn23MetadataGpsLnavEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(&input->clock);
	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(&input->orbit);
	Aspn23MetadataGpsLnavEphemeris* out =
	    aspn23_metadata_gps_lnav_ephemeris_new(info_prep,
	                                           time_of_validity_prep,
	                                           input->week_number,
	                                           input->prn,
	                                           clock_prep,
	                                           orbit_prep,
	                                           input->t_gd,
	                                           input->iodc,
	                                           input->iode);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_clock_free(clock_prep);
	aspn23_type_kepler_orbit_free(orbit_prep);
	return out;
}

void aspn23_metadata_gps_lnav_ephemeris_free(void* pointer) {
	Aspn23MetadataGpsLnavEphemeris* self = (Aspn23MetadataGpsLnavEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_gps_lnav_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_gps_lnav_ephemeris_free_members(Aspn23MetadataGpsLnavEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_clock_free_members(&self->clock);
	aspn23_type_kepler_orbit_free_members(&self->orbit);
}
