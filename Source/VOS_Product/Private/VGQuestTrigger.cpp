#include "VGQuestTrigger.h"

FVGQuestTrigger::FVGQuestTrigger() {
    this->Type = EVGQuestTrigger::ProgressFlag;
    this->Operation = EVGQuestOp::Equal;
}

