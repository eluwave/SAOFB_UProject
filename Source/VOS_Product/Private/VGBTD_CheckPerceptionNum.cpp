#include "VGBTD_CheckPerceptionNum.h"

UVGBTD_CheckPerceptionNum::UVGBTD_CheckPerceptionNum() {
    this->NodeName = TEXT("VGBTD CheckPerceptionNum");
    this->m_target = EVGBTActorTarget::AttackTarget;
    this->m_check_num = 0;
    this->m_comparision = EVGBTComparision::Equal;
}

