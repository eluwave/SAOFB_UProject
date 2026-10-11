#include "VGPlayerCameraComponent.h"

UVGPlayerCameraComponent::UVGPlayerCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hit_correction = true;
    this->k_including_target_dist = 0.87f;
    this->k_scope_sway_angle_rate = 45.00f;
    this->k_scope_sway_coef = 0.03f;
}

