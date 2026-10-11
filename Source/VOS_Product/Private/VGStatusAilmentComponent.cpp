#include "VGStatusAilmentComponent.h"

UVGStatusAilmentComponent::UVGStatusAilmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_self_causer = NULL;
}

float UVGStatusAilmentComponent::GetValue() const {
    return 0.0f;
}

int32 UVGStatusAilmentComponent::GetCount(EVGStatusAilment Type) const {
    return 0;
}

AVGBattleCharacter* UVGStatusAilmentComponent::GetCharacter() const {
    return NULL;
}

AVGBattleCharacter* UVGStatusAilmentComponent::GetCauser() const {
    return NULL;
}

