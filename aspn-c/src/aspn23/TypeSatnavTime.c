
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavTime.h"

Aspn23TypeSatnavTime* ASPN_NULLABLE
aspn23_type_satnav_time_new(uint16_t week_number,
                            double seconds_of_week,
                            enum Aspn23TypeSatnavTimeTimeReference time_reference) {
	Aspn23TypeSatnavTime* self = (struct Aspn23TypeSatnavTime*)malloc(sizeof(Aspn23TypeSatnavTime));
	if (NULL == self) return NULL;
	self->week_number     = week_number;
	self->seconds_of_week = seconds_of_week;
	self->time_reference  = time_reference;
	return self;
}

Aspn23TypeSatnavTime* ASPN_NULLABLE aspn23_type_satnav_time_copy(Aspn23TypeSatnavTime* input) {

	Aspn23TypeSatnavTime* out = aspn23_type_satnav_time_new(
	    input->week_number, input->seconds_of_week, input->time_reference);

	return out;
}

void aspn23_type_satnav_time_free(void* pointer) {
	Aspn23TypeSatnavTime* self = (Aspn23TypeSatnavTime*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_time_free_members(self);
	free(self);
}

void aspn23_type_satnav_time_free_members(Aspn23TypeSatnavTime* self) {
	if (NULL == self) return;
}
