#include "VGPowerUpAlertComponent.h"

UVGPowerUpAlertComponent::UVGPowerUpAlertComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_start_frequence = 1.00f;
    this->m_last_frequence = 1.00f;
    this->m_set_peak_time = 3.00f;
    this->m_set_base_time = 3.00f;
    this->m_change_powerup_time = 0.10f;
}

void UVGPowerUpAlertComponent::StartPowerUpAlert(float power_up_time) {
}

void UVGPowerUpAlertComponent::ResetPowerUpAlert() {
}

bool UVGPowerUpAlertComponent::IsStartAlert() const {
    return false;
}

bool UVGPowerUpAlertComponent::IsAlertPeak() const {
    return false;
}

