
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataBeidouEphemeris.h"

Aspn23MetadataBeidouEphemeris* ASPN_NULLABLE
aspn23_metadata_beidou_ephemeris_new(Aspn23TypeMetadataheader* info,
                                     Aspn23TypeTimestamp* time_of_validity,
                                     int32_t prn,
                                     Aspn23TypeSatnavClock* clock,
                                     Aspn23TypeKeplerOrbit* orbit,
                                     double t_gd1,
                                     double t_gd2,
                                     int16_t aodc,
                                     int16_t aode) {
	Aspn23MetadataBeidouEphemeris* self =
	    (struct Aspn23MetadataBeidouEphemeris*)malloc(sizeof(Aspn23MetadataBeidouEphemeris));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->prn = prn;

	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(clock);
	self->clock                       = *clock_prep;
	free(clock_prep);

	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(orbit);
	self->orbit                       = *orbit_prep;
	free(orbit_prep);

	self->t_gd1 = t_gd1;
	self->t_gd2 = t_gd2;
	self->aodc  = aodc;
	self->aode  = aode;
	return self;
}

Aspn23MetadataBeidouEphemeris* ASPN_NULLABLE
aspn23_metadata_beidou_ephemeris_copy(Aspn23MetadataBeidouEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavClock* clock_prep  = aspn23_type_satnav_clock_copy(&input->clock);
	Aspn23TypeKeplerOrbit* orbit_prep  = aspn23_type_kepler_orbit_copy(&input->orbit);
	Aspn23MetadataBeidouEphemeris* out = aspn23_metadata_beidou_ephemeris_new(info_prep,
	                                                                          time_of_validity_prep,
	                                                                          input->prn,
	                                                                          clock_prep,
	                                                                          orbit_prep,
	                                                                          input->t_gd1,
	                                                                          input->t_gd2,
	                                                                          input->aodc,
	                                                                          input->aode);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_clock_free(clock_prep);
	aspn23_type_kepler_orbit_free(orbit_prep);
	return out;
}

void aspn23_metadata_beidou_ephemeris_free(void* pointer) {
	Aspn23MetadataBeidouEphemeris* self = (Aspn23MetadataBeidouEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_beidou_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_beidou_ephemeris_free_members(Aspn23MetadataBeidouEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_clock_free_members(&self->clock);
	aspn23_type_kepler_orbit_free_members(&self->orbit);
}
