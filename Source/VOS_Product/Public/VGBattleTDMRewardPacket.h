#pragma once
#include "CoreMinimal.h"
#include "VGBattleTDMRewardPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleTDMRewardPacket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 winner;
    
    VOS_PRODUCT_API FVGBattleTDMRewardPacket();
};

