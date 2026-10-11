#include "VGBTT_MoveToRule.h"

UVGBTT_MoveToRule::UVGBTT_MoveToRule() {
    this->NodeName = TEXT("VGBTT MoveToRule");
    this->bProjectGoalLocation = false;
    this->m_refresh_interval = 0.10f;
    this->m_duration = 0.00f;
    this->m_stagnate_wait = 1.00f;
    this->m_stagnate_range = 5.00f;
    this->m_stagnate_jump = true;
}

