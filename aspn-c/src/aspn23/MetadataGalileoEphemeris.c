
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGalileoEphemeris.h"

Aspn23MetadataGalileoEphemeris* ASPN_NULLABLE
aspn23_metadata_galileo_ephemeris_new(Aspn23TypeMetadataheader* info,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      enum Aspn23MetadataGalileoEphemerisNavMsgType nav_msg_type,
                                      int32_t prn,
                                      Aspn23TypeSatnavClock* clock,
                                      Aspn23TypeKeplerOrbit* orbit,
                                      double bgd) {
	Aspn23MetadataGalileoEphemeris* self =
	    (struct Aspn23MetadataGalileoEphemeris*)malloc(sizeof(Aspn23MetadataGalileoEphemeris));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->nav_msg_type = nav_msg_type;
	self->prn          = prn;

	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(clock);
	self->clock                       = *clock_prep;
	free(clock_prep);

	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(orbit);
	self->orbit                       = *orbit_prep;
	free(orbit_prep);

	self->bgd = bgd;
	return self;
}

Aspn23MetadataGalileoEphemeris* ASPN_NULLABLE
aspn23_metadata_galileo_ephemeris_copy(Aspn23MetadataGalileoEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(&input->clock);
	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(&input->orbit);
	Aspn23MetadataGalileoEphemeris* out =
	    aspn23_metadata_galileo_ephemeris_new(info_prep,
	                                          time_of_validity_prep,
	                                          input->nav_msg_type,
	                                          input->prn,
	                                          clock_prep,
	                                          orbit_prep,
	                                          input->bgd);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_clock_free(clock_prep);
	aspn23_type_kepler_orbit_free(orbit_prep);
	return out;
}

void aspn23_metadata_galileo_ephemeris_free(void* pointer) {
	Aspn23MetadataGalileoEphemeris* self = (Aspn23MetadataGalileoEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_galileo_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_galileo_ephemeris_free_members(Aspn23MetadataGalileoEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_clock_free_members(&self->clock);
	aspn23_type_kepler_orbit_free_members(&self->orbit);
}
