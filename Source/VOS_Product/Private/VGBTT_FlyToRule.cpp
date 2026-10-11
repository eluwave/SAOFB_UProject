#include "VGBTT_FlyToRule.h"

UVGBTT_FlyToRule::UVGBTT_FlyToRule() {
    this->NodeName = TEXT("VGBTT FlyToRule");
    this->m_refresh_interval = 0.10f;
    this->m_duration = 0.00f;
    this->m_stagnate_wait = 1.00f;
    this->m_stagnate_range = 5.00f;
}

