#include "VGBTT_InputKey.h"

UVGBTT_InputKey::UVGBTT_InputKey() {
    this->NodeName = TEXT("VGBTT InputKey");
    this->m_key = EVGPadKey::AL_Up;
    this->m_option = EVGInputKeyOption::None;
    this->m_press_time = 0.10f;
    this->m_random_press_time = 0.00f;
    this->m_input_priority = 5;
    this->m_dodge_action = false;
    this->m_dodge_action_type = EVGDodgeAction::Rolling;
    this->m_dodge_action_time = 0.10f;
    this->m_dodge_probability = 100.00f;
}

