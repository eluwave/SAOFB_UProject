#include "VGBTD_CheckHeatGauge.h"

UVGBTD_CheckHeatGauge::UVGBTD_CheckHeatGauge() {
    this->NodeName = TEXT("VGBTD CheckHeatGauge");
    this->m_over_threshold = 1.00f;
    this->m_release_threshold = 0.00f;
}

