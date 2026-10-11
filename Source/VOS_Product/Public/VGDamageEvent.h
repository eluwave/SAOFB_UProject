#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "VGDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    FVGDamageEvent();
};

