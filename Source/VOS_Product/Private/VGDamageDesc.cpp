#include "VGDamageDesc.h"

FVGDamageDesc::FVGDamageDesc() {
    this->Damage = 0.00f;
    this->impact = EVGDamageImpact::None;
    this->hit_stop = 0.00f;
    this->owner_hit_stop = 0.00f;
    this->damage_hate = 0.00f;
    this->hit_hate = 0.00f;
    this->reaction_coeff = 0.00f;
    this->hit_cam_shake = 0;
    this->hit_force_feedback = 0;
    this->reduce_npc_damage_rate = 0.00f;
}

