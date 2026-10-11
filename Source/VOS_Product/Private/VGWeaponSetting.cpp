#include "VGWeaponSetting.h"

FVGWeaponSetting::FVGWeaponSetting() {
    this->m_division = EVGWeaponDivision::HandGun;
    this->m_classify = 0;
    this->m_variation = 0;
    this->m_initial_ammo = 0;
    this->m_option = EVGWeaponOption::None;
}

