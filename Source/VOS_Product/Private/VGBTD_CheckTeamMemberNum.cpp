#include "VGBTD_CheckTeamMemberNum.h"

UVGBTD_CheckTeamMemberNum::UVGBTD_CheckTeamMemberNum() {
    this->NodeName = TEXT("VGBTD CheckTeamMemberNum");
    this->m_check_num = 0;
    this->m_comparision = EVGBTComparision::Equal;
}

