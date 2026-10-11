#include "VGBTD_CheckPlayerDistance.h"

UVGBTD_CheckPlayerDistance::UVGBTD_CheckPlayerDistance() {
    this->NodeName = TEXT("VGBTD CheckPlayerDistance");
    this->m_comparision = EVGBTComparision::Equal;
    this->m_value = 0.00f;
}

