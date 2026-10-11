#include "VGMarksDamageReport.h"

FVGMarksDamageReport::FVGMarksDamageReport() {
    this->chara_hit_id = 0;
    this->weapon_division = EVGWeaponDivision::HandGun;
    this->Damage = 0.00f;
    this->damage_result = 0;
    this->is_invincible = false;
    this->is_dead = false;
    this->is_hit_report = false;
}

