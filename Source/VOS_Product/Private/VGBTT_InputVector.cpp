#include "VGBTT_InputVector.h"

UVGBTT_InputVector::UVGBTT_InputVector() {
    this->NodeName = TEXT("VGBTT InputVector");
    this->m_target_type = EVGBTTargetTypeBB::Default;
    this->m_press_time = 0.10f;
    this->m_input_priority = 5;
}

