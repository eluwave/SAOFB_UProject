#include "VGBTD_CheckDistByKey.h"

UVGBTD_CheckDistByKey::UVGBTD_CheckDistByKey() {
    this->NodeName = TEXT("VG CheckDistKey");
    this->m_mode = EVGBTD_CheckDistMode::IgnoreHeight;
    this->m_eval = EVGBTEval::GreaterEqual;
    this->m_value = 100.00f;
}

