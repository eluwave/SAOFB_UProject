#include "VGDungeonBoxNavLinkComponent.h"

UVGDungeonBoxNavLinkComponent::UVGDungeonBoxNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Links.AddDefaulted(1);
}

