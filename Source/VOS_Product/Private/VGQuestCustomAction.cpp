#include "VGQuestCustomAction.h"

FVGQuestCustomAction::FVGQuestCustomAction() {
    this->Trigger = EVGQuestCustomTrigger::TaskStarted;
    this->action = EVGQuestCustomAction::SetFlag;
}

