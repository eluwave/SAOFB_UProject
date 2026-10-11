#include "VGSkillBulletBeacon.h"
#include "EVGSkillBulletTarget.h"

AVGSkillBulletBeacon::AVGSkillBulletBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_target_type = EVGSkillBulletTarget::Enemy;
    this->m_is_damage = false;
    this->m_life_time = 1.00f;
    this->m_activate_search = false;
}

