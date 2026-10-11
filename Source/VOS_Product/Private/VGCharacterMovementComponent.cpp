#include "VGCharacterMovementComponent.h"

UVGCharacterMovementComponent::UVGCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickBeforeOwner = false;
    this->m_input_speed = 200.00f;
}

