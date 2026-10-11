#include "VGBTD_CheckLineOfFire.h"

UVGBTD_CheckLineOfFire::UVGBTD_CheckLineOfFire() {
    this->NodeName = TEXT("VG CheckLineOfFire");
    this->m_target = EVGBTActorTargetBB::AttackTarget;
    this->m_check_type = EVGBTCheckLineType::AimTarget;
    this->m_check_inverse = false;
}

