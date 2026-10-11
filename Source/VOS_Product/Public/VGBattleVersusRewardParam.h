#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusRewardParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleVersusRewardParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    VOS_PRODUCT_API FVGBattleVersusRewardParam();
};

