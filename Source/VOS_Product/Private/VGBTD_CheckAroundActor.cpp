#include "VGBTD_CheckAroundActor.h"

UVGBTD_CheckAroundActor::UVGBTD_CheckAroundActor() {
    this->NodeName = TEXT("VGBTD CheckAroundActor");
    this->m_center = EVGBTLocationTargetBB::Self;
    this->m_target = (EVGBTTargetTeam)0;
    this->m_radius = 0.00f;
    this->m_count_self = false;
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value = 0;
}

