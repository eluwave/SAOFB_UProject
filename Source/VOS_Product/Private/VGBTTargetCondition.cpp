#include "VGBTTargetCondition.h"

FVGBTTargetCondition::FVGBTTargetCondition() {
    this->Type = EVGBTTargetCondition::Hate;
    this->eval = EVGBTEval::Equal;
    this->value = 0.00f;
}

