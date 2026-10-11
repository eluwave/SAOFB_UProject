#include "VGAnimInstance.h"

UVGAnimInstance::UVGAnimInstance() {
    this->m_figure_setting = NULL;
    this->m_lookat_default_duration = 0.30f;
    this->m_ik_context.AddDefaulted(1);
}

void UVGAnimInstance::SetLookAtPosition(FVector pos, float Duration) {
}

void UVGAnimInstance::SetLookAtEnabled(bool value) {
}

void UVGAnimInstance::SetIKState(EVGIKType::Type Type, EVGIKLayer::Type Layer, EVGIKState::Type State, float lerpTime, bool addCount) {
}

bool UVGAnimInstance::IsLoop(EVGAnimSlot::Type Slot) const {
    return false;
}

AVGCharacter* UVGAnimInstance::GetVGCharacter() const {
    return NULL;
}

FVGLookAtContext UVGAnimInstance::GetLookAtContext() const {
    return FVGLookAtContext{};
}

float UVGAnimInstance::GetIKLerp(EVGIKType::Type Type, bool enabledCheck) const {
    return 0.0f;
}

float UVGAnimInstance::GetIdleAnimationStartPosition() const {
    return 0.0f;
}

UVGCharacterFigureSetting* UVGAnimInstance::GetFigureSetting() const {
    return NULL;
}

float UVGAnimInstance::GetBlendTime(EVGAnimSlot::Type Slot) const {
    return 0.0f;
}

UBlendSpaceBase* UVGAnimInstance::GetBlendSpace(EVGAnimSlot::Type Slot, EVGAnimAsset::Type asset_type, float& param_x, float& param_y, float& play_rate, bool& is_loop) const {
    return NULL;
}

int32 UVGAnimInstance::GetBlendConfigId(EVGAnimSlot::Type Slot) const {
    return 0;
}

UAnimSequence* UVGAnimInstance::GetAnimSequence(EVGAnimSlot::Type Slot, EVGAnimAsset::Type asset_type, float& play_rate) const {
    return NULL;
}

EVGAnimAsset::Type UVGAnimInstance::GetAnimAssetType(EVGAnimSlot::Type Slot) const {
    return EVGAnimAsset::Invalid;
}

FName UVGAnimInstance::GetAdditiveFilterBoneName() const {
    return NAME_None;
}

void UVGAnimInstance::ApplyFigureSetting(UVGCharacterFigureSetting* setting) {
}

