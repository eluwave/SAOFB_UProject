#pragma once
#include "CoreMinimal.h"
#include "EVGFacialExpressionPattern.h"
#include "VGGameEventStepCommandFacialExpressionEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFacialExpressionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use_upper_as_all;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGFacialExpressionPattern upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGFacialExpressionPattern lower;
    
    FVGGameEventStepCommandFacialExpressionEntry();
};

