
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementSatnav.h"

Aspn23MeasurementSatnav* ASPN_NULLABLE
aspn23_measurement_satnav_new(Aspn23TypeHeader* header,
                              Aspn23TypeTimestamp* time_of_validity,
                              Aspn23TypeSatnavTime* receiver_clock_time,
                              uint16_t num_signal_types,
                              uint16_t num_signals_tracked,
                              Aspn23TypeSatnavObs* obs,
                              uint8_t num_integrity,
                              Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementSatnav* self =
	    (struct Aspn23MeasurementSatnav*)malloc(sizeof(Aspn23MeasurementSatnav));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	Aspn23TypeSatnavTime* receiver_clock_time_prep =
	    aspn23_type_satnav_time_copy(receiver_clock_time);
	self->receiver_clock_time = *receiver_clock_time_prep;
	free(receiver_clock_time_prep);

	self->num_signal_types    = num_signal_types;
	self->num_signals_tracked = num_signals_tracked;

	self->obs = NULL;
	if (obs != NULL && num_signals_tracked != 0) {
		if (num_signals_tracked == 0)
			self->obs = NULL;
		else if (num_signals_tracked > 0) {

			self->obs =
			    (Aspn23TypeSatnavObs*)calloc(num_signals_tracked, sizeof(Aspn23TypeSatnavObs));
			for (size_t ii = 0; ii < num_signals_tracked; ii++) {
				Aspn23TypeSatnavObs* pointer = aspn23_type_satnav_obs_copy(&obs[ii]);
				self->obs[ii]                = *pointer;
				free(pointer);
			}

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_signals_tracked",
			    "obs");
			aspn23_measurement_satnav_free(self);
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
			aspn23_measurement_satnav_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementSatnav* ASPN_NULLABLE
aspn23_measurement_satnav_copy(Aspn23MeasurementSatnav* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeSatnavTime* receiver_clock_time_prep =
	    aspn23_type_satnav_time_copy(&input->receiver_clock_time);
	Aspn23MeasurementSatnav* out = aspn23_measurement_satnav_new(header_prep,
	                                                             time_of_validity_prep,
	                                                             receiver_clock_time_prep,
	                                                             input->num_signal_types,
	                                                             input->num_signals_tracked,
	                                                             input->obs,
	                                                             input->num_integrity,
	                                                             input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_satnav_time_free(receiver_clock_time_prep);
	return out;
}

void aspn23_measurement_satnav_free(void* pointer) {
	Aspn23MeasurementSatnav* self = (Aspn23MeasurementSatnav*)pointer;
	if (NULL == self) return;
	aspn23_measurement_satnav_free_members(self);
	free(self);
}

void aspn23_measurement_satnav_free_members(Aspn23MeasurementSatnav* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_satnav_time_free_members(&self->receiver_clock_time);

	if (self->obs != NULL && self->num_signals_tracked != 0) {
		for (size_t ii = 0; ii < self->num_signals_tracked; ii++)
			aspn23_type_satnav_obs_free_members(&self->obs[ii]);
		free(self->obs);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
