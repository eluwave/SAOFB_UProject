#pragma once
#include "CoreMinimal.h"
#include "VGGameEventGenericTriggerParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventGenericTriggerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Command;
    
    FVGGameEventGenericTriggerParam();
};

