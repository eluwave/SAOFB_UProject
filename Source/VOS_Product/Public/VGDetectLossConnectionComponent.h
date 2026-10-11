#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGDetectLossConnectionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDetectLossConnectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVGDetectLossConnectionComponent(const FObjectInitializer& ObjectInitializer);

};

