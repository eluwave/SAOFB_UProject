#include "VG_MissileTargetSetting.h"

FVG_MissileTargetSetting::FVG_MissileTargetSetting() {
    this->homing_target = EVGBTActorTargetBB::AttackTarget;
    this->fix_target = EVGBTActorTargetBB::AttackTarget;
    this->mode = EVGGuidedMissileMode::Straight;
}

