#include "VGOptionSpinBox.h"

UVGOptionSpinBox::UVGOptionSpinBox() {
    this->m_status_value = 0;
    this->m_up_value = 0;
    this->m_up_value_visibility = ESlateVisibility::Visible;
    this->m_param_text = NULL;
}

void UVGOptionSpinBox::SetValue(int32 value, bool send_event) {
}

void UVGOptionSpinBox::Init() {
}

