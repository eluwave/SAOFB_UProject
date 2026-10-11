#include "VGBTT_DisableAttackTarget.h"

UVGBTT_DisableAttackTarget::UVGBTT_DisableAttackTarget() {
    this->NodeName = TEXT("VG Disable Attack Target");
    this->m_target = EVGBTActorTargetBB::AttackTarget;
}

