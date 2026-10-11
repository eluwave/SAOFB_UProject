#include "VGCharacterHitComponent.h"

UVGCharacterHitComponent::UVGCharacterHitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisible = false;
    this->bUseAttachParentBound = true;
    this->bGenerateOverlapEvents = false;
}

