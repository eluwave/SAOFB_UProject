#include "VGANWeaponFire.h"

UVGANWeaponFire::UVGANWeaponFire() {
    this->enable_consume_ammo = false;
    this->along_muzzle = false;
    this->dodge_action = true;
    this->dodge_action_type = EVGDodgeAction::Rolling;
}

