#include "VG3DHudComponent.h"

UVG3DHudComponent::UVG3DHudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNodeAttached = false;
    this->ActiveRange = 15000.00f;
    this->IconDispRange = 15000.00f;
    this->MaxDistanceForScreen = 5000.00f;
    this->MinDistanceForScreen = 1000.00f;
    this->MaxScaleForScreen = 1.00f;
    this->MinScaleForScreen = 0.75f;
    this->AimTargetDisplayTime = 3.00f;
    this->BaseHeight = 165.00f;
    this->BaseBoneHeight = 85.00f;
    this->SearchedVisibleTime = 5.00f;
    this->DamagedVisibleTime = 2.00f;
    this->m_SatelliteComponent = NULL;
    this->m_TargetPlayer = NULL;
}

