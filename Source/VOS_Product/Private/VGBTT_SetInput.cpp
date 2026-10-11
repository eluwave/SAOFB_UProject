#include "VGBTT_SetInput.h"

UVGBTT_SetInput::UVGBTT_SetInput() {
    this->NodeName = TEXT("VGBTT SetInput");
    this->m_input_type = EVGBTTInputType::Press;
    this->m_press_time = 0.10f;
    this->m_dodge_action = false;
    this->m_dodge_action_type = EVGDodgeAction::Rolling;
    this->m_dodge_action_time = 0.10f;
    this->m_dodge_probability = 100.00f;
}

