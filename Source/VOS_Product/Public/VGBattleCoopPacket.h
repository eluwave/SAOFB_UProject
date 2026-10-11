#pragma once
#include "CoreMinimal.h"
#include "VGBattleCoopParam.h"
#include "VGBattleCoopPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleCoopPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleCoopParam> params;
    
    VOS_PRODUCT_API FVGBattleCoopPacket();
};

