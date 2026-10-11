#pragma once
#include "CoreMinimal.h"
#include "VGBattleBRRewardPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleBRRewardPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> winners;
    
    VOS_PRODUCT_API FVGBattleBRRewardPacket();
};

