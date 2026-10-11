#include "VGANSWeaponAttack.h"

UVGANSWeaponAttack::UVGANSWeaponAttack() {
    this->group_id = 0;
    this->hit_melee = 0;
    this->shape_type = EVGActionAttackShape::Box;
    this->box_half_extent_x = 0.00f;
    this->box_half_extent_y = 0.00f;
    this->box_half_extent_z = 0.00f;
    this->sphere_radius = 0.00f;
    this->capsule_radius = 0.00f;
    this->capsule_half_height = 0.00f;
}

