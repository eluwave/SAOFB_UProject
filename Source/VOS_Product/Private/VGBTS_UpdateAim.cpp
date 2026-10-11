#include "VGBTS_UpdateAim.h"

UVGBTS_UpdateAim::UVGBTS_UpdateAim() {
    this->NodeName = TEXT("VG UpdateAim");
    this->m_target = EVGBTActorTargetBB::AttackTarget;
    this->m_aim_mode = EVGAIAimMode::Normal;
    this->m_homing_rate = 0.00f;
}

