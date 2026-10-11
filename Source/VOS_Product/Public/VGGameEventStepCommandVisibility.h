#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandVisibilityEntry.h"
#include "VGGameEventStepCommandVisibility.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandVisibilityEntry> entries;
    
    FVGGameEventStepCommandVisibility();
};

