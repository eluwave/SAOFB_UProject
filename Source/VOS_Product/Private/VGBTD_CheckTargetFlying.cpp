#include "VGBTD_CheckTargetFlying.h"

UVGBTD_CheckTargetFlying::UVGBTD_CheckTargetFlying() {
    this->NodeName = TEXT("VGBTD CheckTargetFlying");
    this->m_target = EVGBTActorTarget::AttackTarget;
    this->m_height_scale = 1.00f;
}

