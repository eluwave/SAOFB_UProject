#include "VGBTS_InputVector.h"

UVGBTS_InputVector::UVGBTS_InputVector() {
    this->NodeName = TEXT("VGBTS InputVector");
    this->m_target_type = EVGBTTargetTypeBB::Enemy;
    this->m_press_time = 0.00f;
    this->m_input_priority = 5;
}

