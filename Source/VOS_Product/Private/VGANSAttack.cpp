#include "VGANSAttack.h"

UVGANSAttack::UVGANSAttack() {
    this->hit_box_class = NULL;
    this->b_hit_override = true;
    this->is_weapon_attack = false;
    this->is_node_attached = false;
    this->is_ignore_node_rotation = false;
    this->to_target = false;
    this->clamp_aim_limit = false;
    this->is_offset_motion = false;
    this->motion_start_time = 0.00f;
    this->motion_end_time = 0.00f;
    this->group_id = -1;
    this->is_affected_mesh_scale = true;
}

