#include "VGBTD_CheckEQSRunMode.h"

UVGBTD_CheckEQSRunMode::UVGBTD_CheckEQSRunMode() {
    this->NodeName = TEXT("VGBTD CheckEQSRunMode");
    this->m_category = EVGAIEQSCategory::FindFiringSpot;
    this->m_run_mode = EEnvQueryRunMode::RandomBest5Pct;
}

