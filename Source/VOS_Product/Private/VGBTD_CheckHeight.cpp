#include "VGBTD_CheckHeight.h"

UVGBTD_CheckHeight::UVGBTD_CheckHeight() {
    this->NodeName = TEXT("VGBTD CheckHeight");
    this->m_target = EVGBTLocationTargetBB::MoveTarget;
    this->m_target_radius = false;
    this->m_self_radius = false;
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value_type = EVGBTValueType::Direct;
    this->m_value = 0.00f;
    this->m_value_base = 0.00f;
}

