#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusParam.h"
#include "VGBattleVersusPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleVersusPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleVersusParam> params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_red;
    
    VOS_PRODUCT_API FVGBattleVersusPacket();
};

