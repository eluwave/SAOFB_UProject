#include "VGBTT_ConditionalWait.h"

UVGBTT_ConditionalWait::UVGBTT_ConditionalWait() {
    this->NodeName = TEXT("VGBTT ConditionalWait");
    this->m_is_abort_sensed_target = false;
    this->m_is_abort_damage_reaction = false;
    this->m_is_abort_damage = false;
    this->m_is_abort_dead = true;
    this->m_is_abort_hate_stocked = false;
    this->m_is_allow_unperception = true;
    this->m_is_allow_unknown = true;
    this->m_specific_finish = false;
    this->m_id = 1;
}

