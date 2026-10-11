#include "VGBTD_CheckAmmo.h"

UVGBTD_CheckAmmo::UVGBTD_CheckAmmo() {
    this->NodeName = TEXT("VGBTD CheckAmmo");
    this->m_target = EVGBTActorTargetBB::Self;
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value = 0.00f;
}

