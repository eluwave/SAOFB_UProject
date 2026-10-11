#include "VGGameEventLocator.h"
#include "Components/SceneComponent.h"
AVGGameEventLocator::AVGGameEventLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->m_scene_root = (USceneComponent*)RootComponent;
}

