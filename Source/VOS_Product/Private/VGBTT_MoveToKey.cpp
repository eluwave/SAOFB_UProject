#include "VGBTT_MoveToKey.h"

UVGBTT_MoveToKey::UVGBTT_MoveToKey() {
    this->NodeName = TEXT("VGBTT MoveToKey");
    this->bProjectGoalLocation = false;
    this->m_is_abort_damage_reaction = true;
    this->m_is_abort_damage = false;
    this->m_is_abort_dead = true;
    this->m_exec_time = 5.00f;
}

