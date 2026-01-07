
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGpsMnavEphemeris.h"

Aspn23MetadataGpsMnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_mnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double a_dot,
                                       double delta_af_0,
                                       double delta_af_1,
                                       double delta_gamma,
                                       double delta_i,
                                       double delta_omega,
                                       double delta_a,
                                       double isc_l1_m_e,
                                       double isc_l2_m_e,
                                       double isc_l1_m_s,
                                       double isc_l2_m_s,
                                       double isa_l2_py,
                                       double isa_l1_m_e,
                                       double isa_l2_m_e,
                                       double isa_l1_m_s,
                                       double isa_l2_m_s) {
	Aspn23MetadataGpsMnavEphemeris* self =
	    (struct Aspn23MetadataGpsMnavEphemeris*)malloc(sizeof(Aspn23MetadataGpsMnavEphemeris));
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

	self->a_dot       = a_dot;
	self->delta_af_0  = delta_af_0;
	self->delta_af_1  = delta_af_1;
	self->delta_gamma = delta_gamma;
	self->delta_i     = delta_i;
	self->delta_omega = delta_omega;
	self->delta_a     = delta_a;
	self->isc_l1_m_e  = isc_l1_m_e;
	self->isc_l2_m_e  = isc_l2_m_e;
	self->isc_l1_m_s  = isc_l1_m_s;
	self->isc_l2_m_s  = isc_l2_m_s;
	self->isa_l2_py   = isa_l2_py;
	self->isa_l1_m_e  = isa_l1_m_e;
	self->isa_l2_m_e  = isa_l2_m_e;
	self->isa_l1_m_s  = isa_l1_m_s;
	self->isa_l2_m_s  = isa_l2_m_s;
	return self;
}

Aspn23MetadataGpsMnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_mnav_ephemeris_copy(Aspn23MetadataGpsMnavEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavClock* clock_prep = aspn23_type_satnav_clock_copy(&input->clock);
	Aspn23TypeKeplerOrbit* orbit_prep = aspn23_type_kepler_orbit_copy(&input->orbit);
	Aspn23MetadataGpsMnavEphemeris* out =
	    aspn23_metadata_gps_mnav_ephemeris_new(info_prep,
	                                           time_of_validity_prep,
	                                           input->week_number,
	                                           input->prn,
	                                           clock_prep,
	                                           orbit_prep,
	                                           input->a_dot,
	                                           input->delta_af_0,
	                                           input->delta_af_1,
	                                           input->delta_gamma,
	                                           input->delta_i,
	                                           input->delta_omega,
	                                           input->delta_a,
	                                           input->isc_l1_m_e,
	                                           input->isc_l2_m_e,
	                                           input->isc_l1_m_s,
	                                           input->isc_l2_m_s,
	                                           input->isa_l2_py,
	                                           input->isa_l1_m_e,
	                                           input->isa_l2_m_e,
	                                           input->isa_l1_m_s,
	                                           input->isa_l2_m_s);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_clock_free(clock_prep);
	aspn23_type_kepler_orbit_free(orbit_prep);
	return out;
}

void aspn23_metadata_gps_mnav_ephemeris_free(void* pointer) {
	Aspn23MetadataGpsMnavEphemeris* self = (Aspn23MetadataGpsMnavEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_gps_mnav_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_gps_mnav_ephemeris_free_members(Aspn23MetadataGpsMnavEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_clock_free_members(&self->clock);
	aspn23_type_kepler_orbit_free_members(&self->orbit);
}
