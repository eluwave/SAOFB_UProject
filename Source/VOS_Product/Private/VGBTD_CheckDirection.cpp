#include "VGBTD_CheckDirection.h"

UVGBTD_CheckDirection::UVGBTD_CheckDirection() {
    this->NodeName = TEXT("VGBTD Check Direction");
    this->m_base_actor = EVGBTActorTarget::Self;
    this->m_target_location = EVGBTLocationTargetBB::AttackTarget;
    this->m_angle = 0.00f;
    this->m_range = 90.00f;
    this->m_check_type = EVGBTDirectionType::Yaw;
}

