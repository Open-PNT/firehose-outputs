
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGlonassEphemeris.h"

Aspn23MetadataGlonassEphemeris* ASPN_NULLABLE
aspn23_metadata_glonass_ephemeris_new(Aspn23TypeMetadataheader* info,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      int32_t slot_number,
                                      int32_t freq_o,
                                      int32_t n_t,
                                      double t_k,
                                      double t_b,
                                      double gamma_n,
                                      double tau_n,
                                      double sv_pos_x,
                                      double sv_vel_x,
                                      double sv_accel_x,
                                      double sv_pos_y,
                                      double sv_vel_y,
                                      double sv_accel_y,
                                      double sv_pos_z,
                                      double sv_vel_z,
                                      double sv_accel_z) {
	Aspn23MetadataGlonassEphemeris* self =
	    (struct Aspn23MetadataGlonassEphemeris*)malloc(sizeof(Aspn23MetadataGlonassEphemeris));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->slot_number = slot_number;
	self->freq_o      = freq_o;
	self->n_t         = n_t;
	self->t_k         = t_k;
	self->t_b         = t_b;
	self->gamma_n     = gamma_n;
	self->tau_n       = tau_n;
	self->sv_pos_x    = sv_pos_x;
	self->sv_vel_x    = sv_vel_x;
	self->sv_accel_x  = sv_accel_x;
	self->sv_pos_y    = sv_pos_y;
	self->sv_vel_y    = sv_vel_y;
	self->sv_accel_y  = sv_accel_y;
	self->sv_pos_z    = sv_pos_z;
	self->sv_vel_z    = sv_vel_z;
	self->sv_accel_z  = sv_accel_z;
	return self;
}

Aspn23MetadataGlonassEphemeris* ASPN_NULLABLE
aspn23_metadata_glonass_ephemeris_copy(Aspn23MetadataGlonassEphemeris* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MetadataGlonassEphemeris* out =
	    aspn23_metadata_glonass_ephemeris_new(info_prep,
	                                          time_of_validity_prep,
	                                          input->slot_number,
	                                          input->freq_o,
	                                          input->n_t,
	                                          input->t_k,
	                                          input->t_b,
	                                          input->gamma_n,
	                                          input->tau_n,
	                                          input->sv_pos_x,
	                                          input->sv_vel_x,
	                                          input->sv_accel_x,
	                                          input->sv_pos_y,
	                                          input->sv_vel_y,
	                                          input->sv_accel_y,
	                                          input->sv_pos_z,
	                                          input->sv_vel_z,
	                                          input->sv_accel_z);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_metadata_glonass_ephemeris_free(void* pointer) {
	Aspn23MetadataGlonassEphemeris* self = (Aspn23MetadataGlonassEphemeris*)pointer;
	if (NULL == self) return;
	aspn23_metadata_glonass_ephemeris_free_members(self);
	free(self);
}

void aspn23_metadata_glonass_ephemeris_free_members(Aspn23MetadataGlonassEphemeris* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
}
