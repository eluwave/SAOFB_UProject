#pragma once
#include "CoreMinimal.h"
#include "EVGPrizeResult.h"
#include "VGTextSymbol.h"
#include "VGPrizeResultItemDisp.generated.h"

USTRUCT(BlueprintType)
struct FVGPrizeResultItemDisp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGPrizeResult::Type> result_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol result_text;
    
    VOS_PRODUCT_API FVGPrizeResultItemDisp();
};

