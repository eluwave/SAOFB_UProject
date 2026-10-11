#include "VGBTT_MoveToTargetRoll.h"

UVGBTT_MoveToTargetRoll::UVGBTT_MoveToTargetRoll() {
    this->NodeName = TEXT("VGBTT MoveToTargetRoll");
    this->bProjectGoalLocation = false;
    this->m_target = EVGBTActorTarget::AttackTarget;
    this->m_distance = 500.00f;
    this->m_target_radius = false;
    this->m_self_radius = false;
    this->m_reflesh_interval = 0.05f;
    this->m_is_track_target = false;
    this->m_roll_speed = 1.00f;
    this->m_roll_update_distance = 200.00f;
    this->m_is_abort_damage_reaction = true;
    this->m_is_abort_damage = false;
    this->m_is_abort_dead = true;
    this->m_exec_time = 5.00f;
    this->m_exec_rand_time = 2.00f;
    this->m_draw_circle = false;
}

