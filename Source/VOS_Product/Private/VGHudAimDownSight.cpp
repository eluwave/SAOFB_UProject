#include "VGHudAimDownSight.h"

UVGHudAimDownSight::UVGHudAimDownSight() {
    this->m_BindPlayer = NULL;
    this->m_AimTarget = NULL;
    this->m_BasePanel = NULL;
    this->m_SightRoot = NULL;
    this->m_CircleBase = NULL;
    this->m_CircleColor = NULL;
    this->m_Reticle = NULL;
    this->m_ReticleFrame = NULL;
    this->m_ReticleCenter = NULL;
    this->m_CircleFrameBase = NULL;
    this->m_AmmoWarning = NULL;
    this->m_HeavyWarning = NULL;
}

void UVGHudAimDownSight::UpdateAssistTarget(bool is_ads, bool is_aim_assist, bool has_target) {
}

void UVGHudAimDownSight::Show() {
}

void UVGHudAimDownSight::SetSightArea(FVector2D Size) {
}

void UVGHudAimDownSight::SetReticleSize(float Size) {
}

void UVGHudAimDownSight::SetReticlePosition(const FVector2D& pos) {
}

void UVGHudAimDownSight::SetBulletCircleSize(float Size) {
}

void UVGHudAimDownSight::SetBulletCirclePosition(const FVector2D& pos) {
}

void UVGHudAimDownSight::LeaveBulletCircle() {
}

bool UVGHudAimDownSight::IsDispScopeReticle() {
    return false;
}

bool UVGHudAimDownSight::IsDispBulletCircle() {
    return false;
}

void UVGHudAimDownSight::Hide() {
}

void UVGHudAimDownSight::EnterBulletCircle() {
}

void UVGHudAimDownSight::BindCharacter(AVGPlayer* Target) {
}

