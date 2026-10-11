#include "VGTriggerComponent.h"

UVGTriggerComponent::UVGTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbsoluteLocation = true;
    this->bAbsoluteRotation = true;
    this->bAbsoluteScale = true;
}

