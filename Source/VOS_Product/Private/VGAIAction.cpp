#include "VGAIAction.h"

FVGAIAction::FVGAIAction() {
    this->unit = NULL;
    this->Command = EVGUnitCommand::STANDBY;
    this->Priority = 0.00f;
    this->Distance = 0.00f;
}

