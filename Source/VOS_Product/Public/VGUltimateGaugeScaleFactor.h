#pragma once
#include "CoreMinimal.h"
#include "VGUltimateGaugeScaleFactor.generated.h"

USTRUCT(BlueprintType)
struct FVGUltimateGaugeScaleFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float greater_equal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    VOS_PRODUCT_API FVGUltimateGaugeScaleFactor();
};

