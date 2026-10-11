#pragma once
#include "CoreMinimal.h"

#include "EVGGameEventStepCommandFCPositionBase.h"
#include "VGGameEventStepCommandFCPosition.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameEventStepCommandFCPositionBase base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    FVGGameEventStepCommandFCPosition();
};

