#include "VGSoundComponent.h"

UVGSoundComponent::UVGSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVGSoundComponent::SetSelectorLabel(EVGSoundAttribute::Type Type, const FString& SelectorName, const FString& LabelName) {
}

void UVGSoundComponent::SetCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet, int32 CueSheetIndex) {
}

void UVGSoundComponent::SetComponentVolume(EVGSoundAttribute::Type Type, float Volume) {
}

void UVGSoundComponent::OnChangeActionOwner() {
}

int32 UVGSoundComponent::AddCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet) {
    return 0;
}

