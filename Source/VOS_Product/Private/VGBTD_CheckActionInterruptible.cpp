#include "VGBTD_CheckActionInterruptible.h"

UVGBTD_CheckActionInterruptible::UVGBTD_CheckActionInterruptible() {
    this->NodeName = TEXT("VGBTD CheckActionInterruptible");
    this->m_target = EVGBTActorTargetBB::Self;
    this->m_target_layer_id = 0;
}

