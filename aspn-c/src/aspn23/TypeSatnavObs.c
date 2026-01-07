
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavObs.h"

Aspn23TypeSatnavObs* ASPN_NULLABLE
aspn23_type_satnav_obs_new(Aspn23TypeSatnavSatelliteSystem* satellite_system,
                           Aspn23TypeSatnavSignalDescriptor* signal_descriptor,
                           int16_t prn,
                           double frequency,
                           double pseudorange,
                           float pseudorange_variance,
                           enum Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type,
                           double pseudorange_rate,
                           float pseudorange_rate_variance,
                           double carrier_phase,
                           float carrier_phase_variance,
                           float c_n0,
                           int32_t lock_count,
                           enum Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source,
                           bool iono_correction_applied,
                           bool tropo_correction_applied,
                           bool signal_bias_correction_applied,
                           uint8_t num_integrity,
                           Aspn23TypeIntegrity* integrity) {
	Aspn23TypeSatnavObs* self = (struct Aspn23TypeSatnavObs*)malloc(sizeof(Aspn23TypeSatnavObs));
	if (NULL == self) return NULL;

	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(satellite_system);
	self->satellite_system = *satellite_system_prep;
	free(satellite_system_prep);

	Aspn23TypeSatnavSignalDescriptor* signal_descriptor_prep =
	    aspn23_type_satnav_signal_descriptor_copy(signal_descriptor);
	self->signal_descriptor = *signal_descriptor_prep;
	free(signal_descriptor_prep);

	self->prn                            = prn;
	self->frequency                      = frequency;
	self->pseudorange                    = pseudorange;
	self->pseudorange_variance           = pseudorange_variance;
	self->pseudorange_rate_type          = pseudorange_rate_type;
	self->pseudorange_rate               = pseudorange_rate;
	self->pseudorange_rate_variance      = pseudorange_rate_variance;
	self->carrier_phase                  = carrier_phase;
	self->carrier_phase_variance         = carrier_phase_variance;
	self->c_n0                           = c_n0;
	self->lock_count                     = lock_count;
	self->iono_correction_source         = iono_correction_source;
	self->iono_correction_applied        = iono_correction_applied;
	self->tropo_correction_applied       = tropo_correction_applied;
	self->signal_bias_correction_applied = signal_bias_correction_applied;
	self->num_integrity                  = num_integrity;

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
			aspn23_type_satnav_obs_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23TypeSatnavObs* ASPN_NULLABLE aspn23_type_satnav_obs_copy(Aspn23TypeSatnavObs* input) {
	Aspn23TypeSatnavSatelliteSystem* satellite_system_prep =
	    aspn23_type_satnav_satellite_system_copy(&input->satellite_system);
	Aspn23TypeSatnavSignalDescriptor* signal_descriptor_prep =
	    aspn23_type_satnav_signal_descriptor_copy(&input->signal_descriptor);
	Aspn23TypeSatnavObs* out = aspn23_type_satnav_obs_new(satellite_system_prep,
	                                                      signal_descriptor_prep,
	                                                      input->prn,
	                                                      input->frequency,
	                                                      input->pseudorange,
	                                                      input->pseudorange_variance,
	                                                      input->pseudorange_rate_type,
	                                                      input->pseudorange_rate,
	                                                      input->pseudorange_rate_variance,
	                                                      input->carrier_phase,
	                                                      input->carrier_phase_variance,
	                                                      input->c_n0,
	                                                      input->lock_count,
	                                                      input->iono_correction_source,
	                                                      input->iono_correction_applied,
	                                                      input->tropo_correction_applied,
	                                                      input->signal_bias_correction_applied,
	                                                      input->num_integrity,
	                                                      input->integrity);
	aspn23_type_satnav_satellite_system_free(satellite_system_prep);
	aspn23_type_satnav_signal_descriptor_free(signal_descriptor_prep);
	return out;
}

void aspn23_type_satnav_obs_free(void* pointer) {
	Aspn23TypeSatnavObs* self = (Aspn23TypeSatnavObs*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_obs_free_members(self);
	free(self);
}

void aspn23_type_satnav_obs_free_members(Aspn23TypeSatnavObs* self) {
	if (NULL == self) return;
	aspn23_type_satnav_satellite_system_free_members(&self->satellite_system);
	aspn23_type_satnav_signal_descriptor_free_members(&self->signal_descriptor);

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
