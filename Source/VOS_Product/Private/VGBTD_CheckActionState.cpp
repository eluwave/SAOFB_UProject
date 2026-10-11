#include "VGBTD_CheckActionState.h"

UVGBTD_CheckActionState::UVGBTD_CheckActionState() {
    this->NodeName = TEXT("VGBTD CheckActionState");
    this->m_is_self = false;
    this->m_is_target = false;
    this->m_is_nearest_friend = false;
    this->m_is_nearest_enemy = false;
    this->m_is_leader = false;
}

