#include "VGAfasysAICustomizeRecovery.h"

FVGAfasysAICustomizeRecovery::FVGAfasysAICustomizeRecovery() {
    this->Type = EVGAfasysAIRecovery::Safety;
    this->recovery_range = 0.00f;
    this->recovery_priority = 0.00f;
    this->Heal_Hp = 0.00f;
    this->self_recovery_priority = 0.00f;
    this->self_heal_hp = 0.00f;
}

