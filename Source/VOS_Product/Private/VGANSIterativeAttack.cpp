#include "VGANSIterativeAttack.h"

UVGANSIterativeAttack::UVGANSIterativeAttack() {
    this->hit_box_class = NULL;
    this->b_hit_override = true;
    this->interval = 0.00f;
    this->is_weapon_attack = false;
    this->is_ignore_node_rotation = false;
    this->to_target = false;
    this->clamp_aim_limit = false;
    this->is_affected_mesh_scale = true;
}

