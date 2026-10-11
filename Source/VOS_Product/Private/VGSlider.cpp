#include "VGSlider.h"

UVGSlider::UVGSlider() {
    this->value = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->HighStepRate = 100.00f;
    this->Orientation = Orient_Horizontal;
    this->IndentHandle = false;
    this->locked = false;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

void UVGSlider::SetValue(float InValue) {
}

void UVGSlider::SetStepSize(float InValue) {
}

void UVGSlider::SetSliderHandleColor(FLinearColor InValue) {
}

void UVGSlider::SetSliderBarColor(FLinearColor InValue) {
}

void UVGSlider::SetLocked(bool InValue) {
}

void UVGSlider::SetIndentHandle(bool InValue) {
}

void UVGSlider::SetCaptureState(bool capture) {
}

float UVGSlider::GetValue() const {
    return 0.0f;
}

