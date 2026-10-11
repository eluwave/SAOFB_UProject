#include "VGSpectatorCameraComponent.h"

UVGSpectatorCameraComponent::UVGSpectatorCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hit_correction = true;
}

