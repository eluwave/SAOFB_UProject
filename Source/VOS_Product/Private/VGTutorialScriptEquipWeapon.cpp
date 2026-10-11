#include "VGTutorialScriptEquipWeapon.h"

UVGTutorialScriptEquipWeapon::UVGTutorialScriptEquipWeapon() {
    this->PostQuotes.AddDefaulted(4);
    this->EndTime = 0.00f;
    this->m_armed_character = NULL;
    this->m_weapon_actor = NULL;
}

