#include "VGBTT_InputKeyBB.h"

UVGBTT_InputKeyBB::UVGBTT_InputKeyBB() {
    this->NodeName = TEXT("VGBTT InputKeyBB");
    this->m_option = EVGInputKeyOption::None;
    this->m_press_time = 0.10f;
    this->m_random_press_time = 0.00f;
    this->m_input_priority = 5;
    this->m_dodge_action = false;
    this->m_dodge_action_type = EVGDodgeAction::Rolling;
    this->m_dodge_action_time = 0.10f;
    this->m_dodge_probability = 100.00f;
}

