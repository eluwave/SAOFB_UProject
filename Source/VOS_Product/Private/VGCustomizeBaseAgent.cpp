#include "VGCustomizeBaseAgent.h"
#include "VGSoundComponent.h"

AVGCustomizeBaseAgent::AVGCustomizeBaseAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_camera_near = 0.10f;
    this->m_camera_far = 1.00f;
    this->m_figure_base_height = 160.00f;
    this->m_figure_camera_influence = 1.00f;
    this->m_camera = NULL;
    this->m_sound_component = CreateDefaultSubobject<UVGSoundComponent>(TEXT("SoundComponent"));
    this->m_ZoomSEHandle = NULL;
}

void AVGCustomizeBaseAgent::ZoomSEFinishedHandler() {
}

void AVGCustomizeBaseAgent::BindCamera(ACameraActor* Camera) {
}

void AVGCustomizeBaseAgent::AddCameraSpline(AActor* Actor) {
}

