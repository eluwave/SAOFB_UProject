#include "VGSkeletalMeshComponent.h"

UVGSkeletalMeshComponent::UVGSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_physics_param_asset = NULL;
}

