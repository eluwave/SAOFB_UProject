#include "VGGameEventCollisionComponent.h"

UVGGameEventCollisionComponent::UVGGameEventCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_supervisor = NULL;
    this->m_player_controller = NULL;
}

void UVGGameEventCollisionComponent::OnGameEventStart(const FVGGameEventEntry& Entry, bool IsExclusive) {
}

void UVGGameEventCollisionComponent::OnGameEventEnd(const FVGGameEventEntry& Entry, bool IsExclusive) {
}

void UVGGameEventCollisionComponent::onEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UVGGameEventCollisionComponent::onBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

