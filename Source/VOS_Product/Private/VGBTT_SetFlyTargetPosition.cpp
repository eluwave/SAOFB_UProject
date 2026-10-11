#include "VGBTT_SetFlyTargetPosition.h"

UVGBTT_SetFlyTargetPosition::UVGBTT_SetFlyTargetPosition() {
    this->NodeName = TEXT("VGBTT SetFlyTargetPosition");
    this->m_source = EVGBTLocationTargetBB::AttackTarget;
    this->m_distance = 0.00f;
    this->m_hight = 0.00f;
}

