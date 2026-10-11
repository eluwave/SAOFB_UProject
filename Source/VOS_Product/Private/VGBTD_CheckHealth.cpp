#include "VGBTD_CheckHealth.h"

UVGBTD_CheckHealth::UVGBTD_CheckHealth() {
    this->NodeName = TEXT("VGBTD CheckHealth");
    this->m_target = EVGBTActorTargetBB::AttackTarget;
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value = 0.00f;
}

