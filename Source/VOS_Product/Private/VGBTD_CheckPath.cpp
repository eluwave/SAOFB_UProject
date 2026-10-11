#include "VGBTD_CheckPath.h"

UVGBTD_CheckPath::UVGBTD_CheckPath() {
    this->NodeName = TEXT("VG CheckPath");
    this->m_target = EVGBTActorTargetBB::AttackTarget;
    this->m_check_inverse = false;
    this->m_allow_partial_path = true;
    this->m_partial_goal_distance = 0.00f;
    this->m_ignore_partial_goal_height = false;
    this->m_check_direct = false;
    this->m_check_length = 0.00f;
}

