#include "VGBTD_CheckDistance.h"

UVGBTD_CheckDistance::UVGBTD_CheckDistance() {
    this->NodeName = TEXT("VGBTD CheckDistance");
    this->m_target = EVGBTLocationTargetBB::MoveTarget;
    this->m_radius_target = EVGBTLocationTarget::MoveTarget;
    this->m_distance_type = EVGBTDistanceType::LinearDistance;
    this->m_target_radius = false;
    this->m_self_radius = false;
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value_type = EVGBTValueType::Direct;
    this->m_value = 0.00f;
}

