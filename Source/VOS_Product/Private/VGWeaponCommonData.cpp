#include "VGWeaponCommonData.h"

FVGWeaponCommonData::FVGWeaponCommonData() {
    this->division = EVGWeaponDivision::HandGun;
    this->classify = 0;
    this->variation = 0;
    this->attack = 0;
    this->posture = EVGWeaponPosture::WG1;
    this->Format = EVGWeaponFormat::Physics;
    this->str = 0;
    this->DEX = 0;
    this->weight = 0;
    this->speed_walk = 0.00f;
    this->speed_jog = 0.00f;
    this->speed_run = 0.00f;
    this->speed_kneeling = 0.00f;
    this->speed_back = 0.00f;
    this->speed_back_jog = 0.00f;
    this->speed_ADS = 0.00f;
    this->speed_fire = 0.00f;
    this->critical_probability = 0.00f;
    this->critical_factor = 0.00f;
}

