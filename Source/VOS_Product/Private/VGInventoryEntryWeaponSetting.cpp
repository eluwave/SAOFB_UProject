#include "VGInventoryEntryWeaponSetting.h"

FVGInventoryEntryWeaponSetting::FVGInventoryEntryWeaponSetting() {
    this->division = EVGWeaponDivision::HandGun;
    this->classify = 0;
    this->variation = 0;
    this->initial_ammo = 0;
    this->equip_option = EVGWeaponOption::None;
}

