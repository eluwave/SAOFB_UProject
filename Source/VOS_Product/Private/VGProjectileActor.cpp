#include "VGProjectileActor.h"
#include "VGProjectileMovementComponent.h"

AVGProjectileActor::AVGProjectileActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_projectile_movement = CreateDefaultSubobject<UVGProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->m_limit_range = 0.00f;
    this->m_end_hitbox_class = NULL;
    this->m_hitbox_rotator = EVGEndHitBoxRotator::Owner;
    this->m_radius = 0.00f;
    this->m_action = EVGDodgeAction::None;
    this->m_probability = 100.00f;
    this->m_duration = 0.10f;
}

