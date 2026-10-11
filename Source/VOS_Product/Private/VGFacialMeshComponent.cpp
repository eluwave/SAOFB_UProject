#include "VGFacialMeshComponent.h"
#include "VGLookAtComponent.h"

UVGFacialMeshComponent::UVGFacialMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered;
    this->m_look_at_component = CreateDefaultSubobject<UVGLookAtComponent>(TEXT("LookAt"));
}

void UVGFacialMeshComponent::SetExpression(EVGFacialExpressionPattern pattern, EVGFacialPart part) {
}

