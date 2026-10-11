#include "VGAIUnitComponent.h"

UVGAIUnitComponent::UVGAIUnitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_unit = NULL;
    this->m_warp_mediator_class = NULL;
}

void UVGAIUnitComponent::SetUnitParam(const FVGAIUnitParam& param) {
}

void UVGAIUnitComponent::SetUnit(UVGAIUnit* unit) {
}

void UVGAIUnitComponent::SetPerception(AActor* Actor, bool flag, bool onSight) {
}

void UVGAIUnitComponent::SetActorsPerception(AActor* Actor, const FActorPerceptionBlueprintInfo& Info) {
}

FVGAIUnitParam UVGAIUnitComponent::GetUnitParam() const {
    return FVGAIUnitParam{};
}

void UVGAIUnitComponent::GetUnit(UVGAIUnit*& unit) const {
}

void UVGAIUnitComponent::GetTeam(AVGAITeam*& Team) const {
}

void UVGAIUnitComponent::GetNavRouteEx(TArray<FVGAIUnitNavRoute>& Points) const {
}

void UVGAIUnitComponent::GetNavRoute(TArray<FVector>& Points) const {
}

