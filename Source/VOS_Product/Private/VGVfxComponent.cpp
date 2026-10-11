#include "VGVfxComponent.h"

UVGVfxComponent::UVGVfxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UVGVfxComponent::SetRenderEffectAll(bool enable) {
}

void UVGVfxComponent::SetRenderEffect(FName signal_name, bool enable) {
}

void UVGVfxComponent::SetEffectRotation(FName signal_name, const FRotator& Rotation) {
}

void UVGVfxComponent::SetEffectLocation(FName signal_name, const FVector& Location) {
}

void UVGVfxComponent::SetBeamPoint(FName signal_name, const FVector& Source, const FVector& Target) {
}

void UVGVfxComponent::ResumeEffect(FName signal_name) {
}

void UVGVfxComponent::PauseEffect(FName signal_name) {
}

void UVGVfxComponent::DeleteEffect(FName signal_name) {
}

void UVGVfxComponent::CreateEffect(const FVGVfxSignalDesc& desc) {
}

void UVGVfxComponent::ClearEffects() {
}

void UVGVfxComponent::CancelEffects() {
}

void UVGVfxComponent::CancelEffect(FName signal_name) {
}

