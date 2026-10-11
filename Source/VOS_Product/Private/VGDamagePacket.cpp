#include "VGDamagePacket.h"

FVGDamagePacket::FVGDamagePacket() {
    this->target_id = 0;
    this->weapon_id = 0;
    this->hit_id = 0;
    this->hit_melee = 0;
    this->hit_cam_shake = 0;
    this->damage_result = 0;
    this->Damage = 0.00f;
    this->damage_ratio = 0.00f;
    this->damage_attr = 0;
    this->damage_impact = EVGDamageImpact::None;
    this->factor_rotation = 0;
    this->knockback_factor = EVGKnockBackFactor::None;
    this->knockback_rotation = EVGKnockBackRotation::None;
    this->hit_stop = 0;
    this->owner_hit_stop = 0;
    this->damage_hate = 0;
    this->hit_hate = 0;
}

