#include "VGBTD_CheckSkill.h"

UVGBTD_CheckSkill::UVGBTD_CheckSkill() {
    this->NodeName = TEXT("VGBTD CheckSkill");
    this->m_check_target = false;
    this->m_target = EVGBTActorTargetBBNearestEnemy::AttackTarget;
    this->m_change_weapon = false;
}

