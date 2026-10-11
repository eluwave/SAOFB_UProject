#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandAnimationEntry.h"
#include "VGGameEventStepCommandAnimation.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandAnimationEntry> entries;
    
    FVGGameEventStepCommandAnimation();
};

