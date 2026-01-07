
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeSatnavSatelliteSystem.h"

Aspn23TypeSatnavSatelliteSystem* ASPN_NULLABLE aspn23_type_satnav_satellite_system_new(
    enum Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system) {
	Aspn23TypeSatnavSatelliteSystem* self =
	    (struct Aspn23TypeSatnavSatelliteSystem*)malloc(sizeof(Aspn23TypeSatnavSatelliteSystem));
	if (NULL == self) return NULL;
	self->satellite_system = satellite_system;
	return self;
}

Aspn23TypeSatnavSatelliteSystem* ASPN_NULLABLE
aspn23_type_satnav_satellite_system_copy(Aspn23TypeSatnavSatelliteSystem* input) {

	Aspn23TypeSatnavSatelliteSystem* out =
	    aspn23_type_satnav_satellite_system_new(input->satellite_system);

	return out;
}

void aspn23_type_satnav_satellite_system_free(void* pointer) {
	Aspn23TypeSatnavSatelliteSystem* self = (Aspn23TypeSatnavSatelliteSystem*)pointer;
	if (NULL == self) return;
	aspn23_type_satnav_satellite_system_free_members(self);
	free(self);
}

void aspn23_type_satnav_satellite_system_free_members(Aspn23TypeSatnavSatelliteSystem* self) {
	if (NULL == self) return;
}
