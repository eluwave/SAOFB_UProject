#include "VGBTD_CheckWeaponCategory.h"

UVGBTD_CheckWeaponCategory::UVGBTD_CheckWeaponCategory() {
    this->NodeName = TEXT("VGBTD CheckWeaponCategory");
    this->m_target = EVGBTActorTarget::Self;
    this->m_check_weapon = true;
    this->m_check_subweapon = false;
}

