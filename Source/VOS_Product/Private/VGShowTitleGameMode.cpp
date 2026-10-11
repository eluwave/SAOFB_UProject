#include "VGShowTitleGameMode.h"

AVGShowTitleGameMode::AVGShowTitleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_title_widget_class = NULL;
    this->m_bgm_volume = 1.00f;
    this->m_se_volume = 1.00f;
    this->m_voice_volume = 1.00f;
    this->m_cam_speed = 0.25f;
    this->m_aim_speed = 0.25f;
    this->m_lr_camera = EVGCameraControl::Normal;
    this->m_ud_camera = EVGCameraControl::Normal;
    this->m_title_widget = NULL;
}

