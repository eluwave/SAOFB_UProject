#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "VGCharacterHitComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharacterHitComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGCharacterHitComponent(const FObjectInitializer& ObjectInitializer);

};

