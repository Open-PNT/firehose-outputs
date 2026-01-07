
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementSatnavSubframe.h"

Aspn23MeasurementSatnavSubframe* ASPN_NULLABLE
aspn23_measurement_satnav_subframe_new(Aspn23TypeHeader* header,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       int64_t gnss_message_id,
                                       int32_t prn,
                                       Aspn23TypeSatnavSatelliteSystem* satellite_system,
                                       int32_t freq_slot_id,
                                       uint16_t num_bytes,
                                       int8_t* data_vector,
                                       uint8_t num_integrity,
                                       Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementSatnavSubframe* self =
	    (struct Aspn23MeasurementSatnavSubframe*)malloc(sizeof(Aspn23MeasurementSatnavSubframe));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->gnss_message_id = gnss_message_id;
	self->prn             = prn;

	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(satellite_system);
	self->satellite_system = *satellite_system_prep;
	free(satellite_system_prep);

	self->freq_slot_id = freq_slot_id;
	self->num_bytes    = num_bytes;

	self->data_vector = NULL;
	if (data_vector != NULL && num_bytes != 0) {
		if (num_bytes == 0)
			self->data_vector = NULL;
		else if (num_bytes > 0) {

			self->data_vector = (int8_t*)calloc(num_bytes, sizeof(int8_t));
			memcpy(self->data_vector, data_vector, sizeof(int8_t) * num_bytes);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_bytes",
			    "data_vector");
			aspn23_measurement_satnav_subframe_free(self);
			return NULL;
		}
	}

	self->num_integrity = num_integrity;

	self->integrity = NULL;
	if (integrity != NULL && num_integrity != 0) {
		if (num_integrity == 0)
			self->integrity = NULL;
		else if (num_integrity > 0) {

			self->integrity =
			    (Aspn23TypeIntegrity*)calloc(num_integrity, sizeof(Aspn23TypeIntegrity));
			for (size_t ii = 0; ii < num_integrity; ii++) {
				Aspn23TypeIntegrity* pointer = aspn23_type_integrity_copy(&integrity[ii]);
				self->integrity[ii]          = *pointer;
				free(pointer);
			}

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_integrity",
			    "integrity");
			aspn23_measurement_satnav_subframe_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementSatnavSubframe* ASPN_NULLABLE
aspn23_measurement_satnav_subframe_copy(Aspn23MeasurementSatnavSubframe* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(&input->satellite_system);
	Aspn23MeasurementSatnavSubframe* out =
	    aspn23_measurement_satnav_subframe_new(header_prep,
	                                           time_of_validity_prep,
	                                           input->gnss_message_id,
	                                           input->prn,
	                                           satellite_system_prep,
	                                           input->freq_slot_id,
	                                           input->num_bytes,
	                                           input->data_vector,
	                                           input->num_integrity,
	                                           input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_satellite_system_free(satellite_system_prep);
	return out;
}

void aspn23_measurement_satnav_subframe_free(void* pointer) {
	Aspn23MeasurementSatnavSubframe* self = (Aspn23MeasurementSatnavSubframe*)pointer;
	if (NULL == self) return;
	aspn23_measurement_satnav_subframe_free_members(self);
	free(self);
}

void aspn23_measurement_satnav_subframe_free_members(Aspn23MeasurementSatnavSubframe* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_satellite_system_free_members(&self->satellite_system);

	if (self->data_vector != NULL && self->num_bytes != 0) {
		free(self->data_vector);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
