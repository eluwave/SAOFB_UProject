#include "VGBTD_CheckSpecFlag.h"

UVGBTD_CheckSpecFlag::UVGBTD_CheckSpecFlag() {
    this->NodeName = TEXT("VGBTD CheckSpecFlag");
    this->m_target = EVGBTActorTargetBB::Self;
    this->m_spec = 0;
}

