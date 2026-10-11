#include "VGGuidedMissile.h"

AVGGuidedMissile::AVGGuidedMissile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_damage_threshold = 0.00f;
    this->m_homing_rate = 0.00f;
    this->m_fix_to_homing_time = 0.50f;
    this->m_fix_to_fall_time = 0.50f;
    this->m_init_mode = EVGGuidedMissileMode::Straight;
}

void AVGGuidedMissile::Server_SendDamage_Implementation(float Damage) {
}
bool AVGGuidedMissile::Server_SendDamage_Validate(float Damage) {
    return true;
}

void AVGGuidedMissile::Server_ChangeMode_Implementation(EVGGuidedMissileMode mode) {
}
bool AVGGuidedMissile::Server_ChangeMode_Validate(EVGGuidedMissileMode mode) {
    return true;
}

void AVGGuidedMissile::MulticastSimulated_SendDamage_Implementation(float Damage) {
}

void AVGGuidedMissile::MulticastSimulated_ChangeMode_Implementation(EVGGuidedMissileMode mode) {
}

void AVGGuidedMissile::Multicast_SendDamage_Implementation(float Damage) {
}

void AVGGuidedMissile::Multicast_ChangeMode_Implementation(EVGGuidedMissileMode mode) {
}

