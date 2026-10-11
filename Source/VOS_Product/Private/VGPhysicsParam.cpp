#include "VGPhysicsParam.h"

FVGPhysicsParam::FVGPhysicsParam() {
    this->m_velocity_damping_control = false;
    this->m_velocity = 0.00f;
    this->m_linear_damping_normal = 0.00f;
    this->m_angular_damping_normal = 0.00f;
    this->m_linear_damping_fast = 0.00f;
    this->m_angular_damping_fast = 0.00f;
    this->m_velocity_brake = 0.00f;
    this->m_linear_damping_brake = 0.00f;
    this->m_angular_damping_brake = 0.00f;
    this->m_keep_linear_damping_brake = 0;
    this->m_velocity_back = 0.00f;
    this->m_linear_damping_back = 0.00f;
    this->m_angular_damping_back = 0.00f;
    this->m_velocity_up = 0.00f;
    this->m_linear_damping_up = 0.00f;
    this->m_angular_damping_up = 0.00f;
    this->m_velocity_down = 0.00f;
    this->m_linear_damping_down = 0.00f;
    this->m_angular_damping_down = 0.00f;
    this->m_velocity_factor_stop = 0.00f;
    this->m_linear_damping_stop = 0.00f;
    this->m_angular_damping_stop = 0.00f;
    this->m_velocity_start = 0.00f;
    this->m_velocity_factor_start = 0.00f;
    this->m_linear_damping_start = 0.00f;
    this->m_angular_damping_start = 0.00f;
    this->m_keep_linear_damping_start = 0;
    this->m_controll_turn = false;
    this->m_controll_turn_out = false;
    this->m_velocity_factor_turn = 0.00f;
    this->m_linear_damping_turn = 0.00f;
    this->m_angular_damping_turn = 0.00f;
    this->m_restore_control = false;
    this->m_linear_distance_restore = 0.00f;
    this->m_angular_distance_restore = 0.00f;
    this->m_linear_distance_pushed = 0.00f;
    this->m_angular_distance_pushed = 0.00f;
    this->m_pitch_limit_upper = 0.00f;
    this->m_pitch_limit_lower = 0.00f;
    this->m_pitch_scale = 0.00f;
    this->m_pitch_offset = 0.00f;
    this->m_collision_disable = 0;
    this->m_reset_distance_actor = 0.00f;
    this->m_change_base_bone_to_head = false;
    this->m_reset_distance_base = 0.00f;
    this->m_max_depenetration_velocity = 0.00f;
}

