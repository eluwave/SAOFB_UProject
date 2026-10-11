#include "VGBulletData.h"

FVGBulletData::FVGBulletData() {
    this->Type = EVGWeaponBulletType::HG_Bullet;
    this->life_time = 0.00f;
    this->Velocity = 0.00f;
    this->Acceleration = 0.00f;
    this->Gravity = 0.00f;
    this->velocity_limit = 0.00f;
}

