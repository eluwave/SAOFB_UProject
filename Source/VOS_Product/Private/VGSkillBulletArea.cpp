#include "VGSkillBulletArea.h"

AVGSkillBulletArea::AVGSkillBulletArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_target_type = EVGSkillBulletTarget::Field;
    this->m_is_damage = false;
    this->m_heal = 0.00f;
    this->m_cure = false;
    this->m_life_time = 0.10f;
}

