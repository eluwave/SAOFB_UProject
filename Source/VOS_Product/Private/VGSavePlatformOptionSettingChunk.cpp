#include "VGSavePlatformOptionSettingChunk.h"

FVGSavePlatformOptionSettingChunk::FVGSavePlatformOptionSettingChunk() {
    this->window_mode = EWindowMode::Fullscreen;
    this->screen_percentage = 0.00f;
    this->vsync = false;
    this->frame_rate_type = EVGFrameRateType::FrameRate_30;
    this->ssao = false;
    this->dof = false;
    this->motion_blur = false;
    this->anti_aliasing_quality = EVGGraphicsQualityLevel::Low;
    this->shadow_quality = EVGGraphicsQualityLevel::Low;
    this->texture_quality = EVGGraphicsQualityLevel::Low;
}

