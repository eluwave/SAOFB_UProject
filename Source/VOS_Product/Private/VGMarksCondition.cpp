#include "VGMarksCondition.h"

FVGMarksCondition::FVGMarksCondition() {
    this->Type = EVGMarksCondition::Killed;
    this->eval = EVGMarksConditionEval::b_True;
    this->value = 0.00f;
    this->grace_period = 0.00f;
}

