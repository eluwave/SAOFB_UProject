#include "VGBTT_SetAnalogInput.h"

UVGBTT_SetAnalogInput::UVGBTT_SetAnalogInput() {
    this->NodeName = TEXT("VGBTT SetAnalogInput");
    this->m_input_type = EVGBTTAnalogInputType::Left;
    this->m_x_value = 0.00f;
    this->m_y_value = 0.00f;
    this->m_press_time = 0.10f;
}

