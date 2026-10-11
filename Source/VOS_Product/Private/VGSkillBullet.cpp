#include "VGSkillBullet.h"

AVGSkillBullet::AVGSkillBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_target_type = EVGSkillBulletTarget::Field;
    this->m_is_damage = true;
    this->m_heal = 0.00f;
    this->m_cure = false;
    this->m_resurrect = false;
    this->m_is_homing = false;
    this->m_homing_rate = 0.00f;
    this->m_area_rotator = EVGBulletAreaRotator::Direction;
    this->m_area_bullet = NULL;
}

