#include "VGBTT_SetRotation.h"

UVGBTT_SetRotation::UVGBTT_SetRotation() {
    this->NodeName = TEXT("VGBTT SetRotation");
    this->m_target_location = EVGBTLocationTargetBB::AttackTarget;
    this->m_time = 0.00f;
    this->m_horming = false;
}

