#pragma once
#include "CoreMinimal.h"
#include "VGAfasysBankMoneyRate.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysBankMoneyRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 voice_id;
    
    FVGAfasysBankMoneyRate();
};

