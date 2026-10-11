#include "VGPlayerController.h"
#include "VGAIUnitComponent.h"
#include "VGCharacterTrackingFogComponent.h"

AVGPlayerController::AVGPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_camera_x_axis_reverse = false;
    this->m_camera_y_axis_reverse = false;
    this->k_camera_speed_coef_x_max = 2.50f;
    this->k_camera_speed_coef_x_min = 0.50f;
    this->k_camera_speed_coef_y_max = 2.50f;
    this->k_camera_speed_coef_y_min = 0.50f;
    this->k_camera_speed_coef_ads_x_max = 0.90f;
    this->k_camera_speed_coef_ads_x_min = 0.10f;
    this->k_camera_speed_coef_ads_y_max = 0.90f;
    this->k_camera_speed_coef_ads_y_min = 0.10f;
    this->k_camera_speed_coef_scope_x_max = 1.25f;
    this->k_camera_speed_coef_scope_x_min = 0.05f;
    this->k_camera_speed_coef_scope_y_max = 1.25f;
    this->k_camera_speed_coef_scope_y_min = 0.05f;
    this->m_camera_pitch_resettable = false;
    this->m_tracking_fog_component = CreateDefaultSubobject<UVGCharacterTrackingFogComponent>(TEXT("TrackingFog"));
    this->m_ai_unit_component = CreateDefaultSubobject<UVGAIUnitComponent>(TEXT("VGAIUnitComponent"));
}

void AVGPlayerController::SetUnit(UVGAIUnit* unit) {
}

void AVGPlayerController::Server_SetItemDropEffectEnabled_Implementation(EVGItemDropEffectType Type, const FString& User, bool value) {
}
bool AVGPlayerController::Server_SetItemDropEffectEnabled_Validate(EVGItemDropEffectType Type, const FString& User, bool value) {
    return true;
}

FVGAIUnitParam AVGPlayerController::GetUnitParam() const {
    return FVGAIUnitParam{};
}

UVGAIUnit* AVGPlayerController::GetUnit() {
    return NULL;
}

AVGAITeam* AVGPlayerController::GetTeam() {
    return NULL;
}

void AVGPlayerController::ApplyUnitParam() const {
}

