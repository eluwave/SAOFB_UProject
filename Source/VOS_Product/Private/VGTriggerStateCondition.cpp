#include "VGTriggerStateCondition.h"

FVGTriggerStateCondition::FVGTriggerStateCondition() {
    this->Type = EVGTriggerStateCondition::Ground;
    this->eval = EVGTriggerStateConditionEval::b_True;
    this->value = 0.00f;
}

