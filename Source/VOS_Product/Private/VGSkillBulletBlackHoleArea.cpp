#include "VGSkillBulletBlackHoleArea.h"

AVGSkillBulletBlackHoleArea::AVGSkillBulletBlackHoleArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_range_effective = 2000.00f;
    this->m_range_attenuation = 1000.00f;
    this->m_suction_speed = 200.00f;
    this->m_damage_interval = 1.00f;
}

