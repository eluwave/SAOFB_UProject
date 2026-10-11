#pragma once
#include "CoreMinimal.h"
#include "EVGFacialExpressionPattern.h"
#include "VGFacialExpressionPatternEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGFacialExpressionPatternEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGFacialExpressionPattern pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    FVGFacialExpressionPatternEntry();
};

