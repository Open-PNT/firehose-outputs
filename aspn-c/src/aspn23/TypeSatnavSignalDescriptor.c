
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavSignalDescriptor.h"

Aspn23TypeSatnavSignalDescriptor* ASPN_NULLABLE aspn23_type_satnav_signal_descriptor_new(
    enum Aspn23TypeSatnavSignalDescriptorSignalDescriptor signal_descriptor) {
	Aspn23TypeSatnavSignalDescriptor* self =
	    (struct Aspn23TypeSatnavSignalDescriptor*)malloc(sizeof(Aspn23TypeSatnavSignalDescriptor));
	if (NULL == self) return NULL;
	self->signal_descriptor = signal_descriptor;
	return self;
}

Aspn23TypeSatnavSignalDescriptor* ASPN_NULLABLE
aspn23_type_satnav_signal_descriptor_copy(Aspn23TypeSatnavSignalDescriptor* input) {

	Aspn23TypeSatnavSignalDescriptor* out =
	    aspn23_type_satnav_signal_descriptor_new(input->signal_descriptor);

	return out;
}

void aspn23_type_satnav_signal_descriptor_free(void* pointer) {
	Aspn23TypeSatnavSignalDescriptor* self = (Aspn23TypeSatnavSignalDescriptor*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_signal_descriptor_free_members(self);
	free(self);
}

void aspn23_type_satnav_signal_descriptor_free_members(Aspn23TypeSatnavSignalDescriptor* self) {
	if (NULL == self) return;
}
