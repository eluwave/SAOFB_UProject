#include "VG3DHudMarkerComponent.h"

UVG3DHudMarkerComponent::UVG3DHudMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNodeAttached = false;
    this->ActiveRange = 15000.00f;
    this->MaxDistanceForScreen = 5000.00f;
    this->MinDistanceForScreen = 1000.00f;
    this->MaxScaleForScreen = 1.00f;
    this->MinScaleForScreen = 0.75f;
    this->BaseHeight = 165.00f;
    this->BaseBoneHeight = 85.00f;
}

