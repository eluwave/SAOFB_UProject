#pragma once
#include "CoreMinimal.h"
#include "VGPrizeReputation.generated.h"

USTRUCT(BlueprintType)
struct FVGPrizeReputation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lessthan_prize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 add_reputation;
    
    VOS_PRODUCT_API FVGPrizeReputation();
};

