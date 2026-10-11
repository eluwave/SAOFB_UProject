#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "VGGameEventCollisionCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGGameEventCollisionCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UVGGameEventCollisionCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

