#include "VGBTD_GetSkill.h"

UVGBTD_GetSkill::UVGBTD_GetSkill() {
    this->NodeName = TEXT("VGBTD GetSkill");
    this->m_skill_category = EVGBTSkillCategory::Heal;
    this->m_change_weapon = false;
}

