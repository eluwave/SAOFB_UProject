#pragma once
#include "CoreMinimal.h"
#include "EVGMarksCondition.h"
#include "EVGMarksConditionEval.h"
#include "VGMarksCondition.generated.h"

USTRUCT(BlueprintType)
struct FVGMarksCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMarksCondition Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMarksConditionEval eval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float grace_period;
    
    VOS_PRODUCT_API FVGMarksCondition();
};

