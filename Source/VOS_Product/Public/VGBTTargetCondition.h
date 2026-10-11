#pragma once
#include "CoreMinimal.h"
#include "EVGBTEval.h"
#include "EVGBTTargetCondition.h"
#include "VGBTTargetCondition.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBTTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetCondition Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTEval eval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    FVGBTTargetCondition();
};

