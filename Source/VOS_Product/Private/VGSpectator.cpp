#include "VGSpectator.h"
#include "VGSpectatorCameraComponent.h"
#include "VGSpectatorMovementComponent.h"

AVGSpectator::AVGSpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVGSpectatorMovementComponent>(TEXT("MovementComponent0"))) {
    this->m_camera_component = CreateDefaultSubobject<UVGSpectatorCameraComponent>(TEXT("CameraComponent"));
    this->k_camera_fov_y = 65.00f;
    this->k_camera_interp_rate = 1.00f;
    this->k_camera_distance_lerp = 0.20f;
    this->k_camera_side_rotation = 0.00f;
    this->k_camera_speed = 5.00f;
    this->k_camera_pitch_upper = 45.00f;
    this->k_camera_pitch_lower = 45.00f;
}

