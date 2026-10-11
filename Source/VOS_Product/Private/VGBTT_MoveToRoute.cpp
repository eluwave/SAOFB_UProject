#include "VGBTT_MoveToRoute.h"

UVGBTT_MoveToRoute::UVGBTT_MoveToRoute() {
    this->NodeName = TEXT("VGBTT MoveToRoute");
    this->bProjectGoalLocation = false;
    this->m_is_abort_damage_reaction = true;
    this->m_is_abort_damage = false;
    this->m_is_abort_target = true;
    this->m_is_abort_dead = true;
    this->m_exec_time = 5.00f;
}

