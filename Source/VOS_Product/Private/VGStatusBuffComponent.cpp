#include "VGStatusBuffComponent.h"

UVGStatusBuffComponent::UVGStatusBuffComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UVGStatusBuffComponent::GetValue() const {
    return 0.0f;
}

EVGStatusBuff UVGStatusBuffComponent::GetType() const {
    return EVGStatusBuff::Attack;
}

float UVGStatusBuffComponent::GetTime() const {
    return 0.0f;
}

EVGStatusBuffOp UVGStatusBuffComponent::GetOp() const {
    return EVGStatusBuffOp::Up;
}

AVGBattleCharacter* UVGStatusBuffComponent::GetCharacter() const {
    return NULL;
}

AVGBattleCharacter* UVGStatusBuffComponent::GetCauser() const {
    return NULL;
}

