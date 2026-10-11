#include "VGDeadCondition.h"

FVGDeadCondition::FVGDeadCondition() {
    this->check_impact = false;
    this->impact = EVGDamageImpact::None;
    this->check_ailment = false;
    this->ailment = EVGStatusAilment::Blaze;
    this->action_id = 0;
}

