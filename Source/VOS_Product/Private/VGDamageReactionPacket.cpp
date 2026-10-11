#include "VGDamageReactionPacket.h"

FVGDamageReactionPacket::FVGDamageReactionPacket() {
    this->attacker_id = 0;
    this->health = 0.00f;
    this->reaction_id = 0;
    this->Damage = 0.00f;
    this->damage_attr = 0;
    this->damage_result = 0;
    this->damage_impact = EVGDamageImpact::None;
    this->ailment = EVGStatusAilment::Blaze;
    this->weapon_id = 0;
    this->hit_id = 0;
    this->knock_back_yaw = 0.00f;
}

