#include "VGSubSceneImage.h"
#include "Templates/SubclassOf.h"

UVGSubSceneImage::UVGSubSceneImage() {
    this->m_current_actor = NULL;
}

UParticleSystemComponent* UVGSubSceneImage::SpawnEmitter(UParticleSystem* EmitterTemplate, const FTransform& SpawnTransform, bool bAutoDestroy) {
    return NULL;
}

AActor* UVGSubSceneImage::Spawn(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UVGSubSceneImage::SetViewRotation(FRotator Rotation) {
}

void UVGSubSceneImage::SetViewLocation(FVector Location) {
}

FRotator UVGSubSceneImage::GetViewRotation() const {
    return FRotator{};
}

FVector UVGSubSceneImage::GetViewLocation() const {
    return FVector{};
}

UWorld* UVGSubSceneImage::GetSubSceneWorld() const {
    return NULL;
}

AActor* UVGSubSceneImage::GetCurrentActor() const {
    return NULL;
}

void UVGSubSceneImage::AddLevel(ULevel* Level) {
}

