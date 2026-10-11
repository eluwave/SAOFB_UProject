#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusRewardParam.h"
#include "VGBattleVersusRewardPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleVersusRewardPacket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_needs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleVersusRewardParam> params;
    
    VOS_PRODUCT_API FVGBattleVersusRewardPacket();
};

