#include "VGBattleSatelliteComponent.h"

UVGBattleSatelliteComponent::UVGBattleSatelliteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_scan_effect = NULL;
    this->k_scan_interval = 120.00f;
    this->k_scan_offset = 60.00f;
    this->k_effective_time = 10.00f;
}

