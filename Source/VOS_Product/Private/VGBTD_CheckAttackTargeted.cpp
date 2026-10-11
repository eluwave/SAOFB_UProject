#include "VGBTD_CheckAttackTargeted.h"

UVGBTD_CheckAttackTargeted::UVGBTD_CheckAttackTargeted() {
    this->NodeName = TEXT("VGBTD CheckAttackTargeted");
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value = 0;
}

