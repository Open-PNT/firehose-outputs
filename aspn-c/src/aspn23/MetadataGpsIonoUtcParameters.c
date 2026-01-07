
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGpsIonoUtcParameters.h"

Aspn23MetadataGpsIonoUtcParameters* ASPN_NULLABLE
aspn23_metadata_gps_iono_utc_parameters_new(Aspn23TypeMetadataheader* info,
                                            Aspn23TypeTimestamp* time_of_validity,
                                            double a_0,
                                            double a_1,
                                            int8_t delta_t_ls,
                                            uint32_t tot,
                                            uint8_t wn_t,
                                            uint8_t wn_lsf,
                                            uint8_t dn,
                                            int8_t delta_t_lsf,
                                            double alpha_0,
                                            double alpha_1,
                                            double alpha_2,
                                            double alpha_3,
                                            double beta_0,
                                            double beta_1,
                                            double beta_2,
                                            double beta_3) {
	Aspn23MetadataGpsIonoUtcParameters* self = (struct Aspn23MetadataGpsIonoUtcParameters*)malloc(
	    sizeof(Aspn23MetadataGpsIonoUtcParameters));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->a_0         = a_0;
	self->a_1         = a_1;
	self->delta_t_ls  = delta_t_ls;
	self->tot         = tot;
	self->wn_t        = wn_t;
	self->wn_lsf      = wn_lsf;
	self->dn          = dn;
	self->delta_t_lsf = delta_t_lsf;
	self->alpha_0     = alpha_0;
	self->alpha_1     = alpha_1;
	self->alpha_2     = alpha_2;
	self->alpha_3     = alpha_3;
	self->beta_0      = beta_0;
	self->beta_1      = beta_1;
	self->beta_2      = beta_2;
	self->beta_3      = beta_3;
	return self;
}

Aspn23MetadataGpsIonoUtcParameters* ASPN_NULLABLE
aspn23_metadata_gps_iono_utc_parameters_copy(Aspn23MetadataGpsIonoUtcParameters* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MetadataGpsIonoUtcParameters* out =
	    aspn23_metadata_gps_iono_utc_parameters_new(info_prep,
	                                                time_of_validity_prep,
	                                                input->a_0,
	                                                input->a_1,
	                                                input->delta_t_ls,
	                                                input->tot,
	                                                input->wn_t,
	                                                input->wn_lsf,
	                                                input->dn,
	                                                input->delta_t_lsf,
	                                                input->alpha_0,
	                                                input->alpha_1,
	                                                input->alpha_2,
	                                                input->alpha_3,
	                                                input->beta_0,
	                                                input->beta_1,
	                                                input->beta_2,
	                                                input->beta_3);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_metadata_gps_iono_utc_parameters_free(void* pointer) {
	Aspn23MetadataGpsIonoUtcParameters* self = (Aspn23MetadataGpsIonoUtcParameters*)pointer;
	if (NULL == self) return;
	aspn23_metadata_gps_iono_utc_parameters_free_members(self);
	free(self);
}

void aspn23_metadata_gps_iono_utc_parameters_free_members(
    Aspn23MetadataGpsIonoUtcParameters* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
}
