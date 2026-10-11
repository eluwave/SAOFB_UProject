#pragma once
#include "CoreMinimal.h"
#include "EVGTriggerStateCondition.h"
#include "EVGTriggerStateConditionEval.h"
#include "VGTriggerStateCondition.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGTriggerStateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTriggerStateCondition Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTriggerStateConditionEval eval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    FVGTriggerStateCondition();
};

