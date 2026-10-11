#include "VGCameraComponent.h"

UVGCameraComponent::UVGCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = true;
    this->k_height_offset = 140.00f;
    this->k_height_offset_kneeling = 100.00f;
    this->k_height_offset_tumble = 100.00f;
    this->m_hit_correction = false;
    this->k_height_lerp = 0.20f;
    this->k_default_target_yaw = 0.00f;
    this->k_default_target_pitch = 0.00f;
}

