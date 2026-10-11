#include "VGBTD_CheckReload.h"

UVGBTD_CheckReload::UVGBTD_CheckReload() {
    this->NodeName = TEXT("VGBTD CheckReload");
    this->m_target = EVGBTActorTargetBB::Self;
    this->m_value = 0.00f;
}

