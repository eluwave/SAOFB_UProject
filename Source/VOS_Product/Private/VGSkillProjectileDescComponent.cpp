#include "VGSkillProjectileDescComponent.h"

UVGSkillProjectileDescComponent::UVGSkillProjectileDescComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_target_type = EVGSkillBulletTarget::Field;
    this->m_is_heal_ratio = false;
    this->m_heal_value = 0.00f;
    this->m_heal_ratio = 0.00f;
    this->m_cure = false;
}

