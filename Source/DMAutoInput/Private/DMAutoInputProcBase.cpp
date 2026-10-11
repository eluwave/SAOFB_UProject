#include "DMAutoInputProcBase.h"

UDMAutoInputProcBase::UDMAutoInputProcBase() {
    this->m_initial_repeat_delay = 0.20f;
    this->m_repeat_delay = 0.10f;
    this->m_left_trigger_threshold = 0.30f;
    this->m_right_trigger_threshold = 0.30f;
    this->m_left_stick_deadzone = 0.25f;
    this->m_right_stick_deadzone = 0.25f;
    this->m_controller_id = 0;
}

void UDMAutoInputProcBase::ToggleDigitalInput(EDMAutoInputKeyType Key) {
}

void UDMAutoInputProcBase::SetDigitalInput(EDMAutoInputKeyType Key, bool new_state) {
}

void UDMAutoInputProcBase::SetAnalogTriggerInput(EDMAutoInputTriggerType Trigger, float value) {
}

void UDMAutoInputProcBase::SetAnalogStickInput(EDMAutoInputStickType stick, float X, float Y) {
}

