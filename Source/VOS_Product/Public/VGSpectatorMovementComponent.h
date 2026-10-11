#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawnMovement.h"
#include "VGSpectatorMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSpectatorMovementComponent : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
    UVGSpectatorMovementComponent(const FObjectInitializer& ObjectInitializer);

};

