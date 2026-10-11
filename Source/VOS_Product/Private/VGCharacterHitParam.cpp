#include "VGCharacterHitParam.h"

FVGCharacterHitParam::FVGCharacterHitParam() {
    this->uid = 0;
    this->capsule_half_height = 0.00f;
    this->capsule_radius = 0.00f;
    this->Priority = 0;
    this->weak_point = false;
    this->lock_on_target = false;
    this->repel_wire = false;
    this->Breakable = false;
    this->break_type = FVGCharacterHitBreak::None;
}

