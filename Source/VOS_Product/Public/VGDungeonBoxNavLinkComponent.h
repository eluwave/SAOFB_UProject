#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkComponent.h"
#include "VGDungeonBoxNavLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDungeonBoxNavLinkComponent : public UNavLinkComponent {
    GENERATED_BODY()
public:
    UVGDungeonBoxNavLinkComponent(const FObjectInitializer& ObjectInitializer);

};

