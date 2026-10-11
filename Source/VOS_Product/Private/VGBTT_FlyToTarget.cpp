#include "VGBTT_FlyToTarget.h"

UVGBTT_FlyToTarget::UVGBTT_FlyToTarget() {
    this->NodeName = TEXT("VGBTT FlyToTarget");
    this->m_target = EVGBTActorTarget::AttackTarget;
    this->m_height_type = EVGBTHeightType::TargetOffset;
    this->m_height = 150.00f;
    this->m_move_xy = true;
    this->m_distance = 500.00f;
    this->m_target_radius = false;
    this->m_self_radius = false;
    this->m_random_deviation = 100.00f;
    this->m_reflesh_interval = 0.05f;
    this->m_is_around = false;
    this->m_around_rotation = 180.00f;
    this->m_is_track_target = false;
    this->m_is_abort_damage_reaction = true;
    this->m_is_abort_damage = false;
    this->m_is_abort_dead = true;
    this->m_exec_time = 5.00f;
}

