#include "VGProjectileMovementComponent.h"

UVGProjectileMovementComponent::UVGProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AccelStartTime = 0.00f;
    this->IsAccelForwardFixed = false;
}

