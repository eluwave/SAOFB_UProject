#include "VGBTT_FlyToKey.h"

UVGBTT_FlyToKey::UVGBTT_FlyToKey() {
    this->NodeName = TEXT("VGBTT FlyToKey");
    this->m_is_abort_sensed_target = false;
    this->m_is_abort_damage_reaction = true;
    this->m_is_abort_damage = false;
    this->m_is_abort_dead = true;
    this->m_exec_time = 5.00f;
    this->m_is_track_target = false;
    this->m_track_target_type = EVGBTActorTarget::AttackTarget;
}

