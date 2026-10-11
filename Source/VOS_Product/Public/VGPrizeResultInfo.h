#pragma once
#include "CoreMinimal.h"
#include "VGPrizeResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGPrizeResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 acquisition_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 acquisition_prize;
    
    VOS_PRODUCT_API FVGPrizeResultInfo();
};

