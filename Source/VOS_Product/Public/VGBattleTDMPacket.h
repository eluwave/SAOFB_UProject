#pragma once
#include "CoreMinimal.h"
#include "VGBattleVersusParam.h"
#include "VGBattleTDMPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleTDMPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleVersusParam> params;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 respawn_blue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 respawn_red;
    
    VOS_PRODUCT_API FVGBattleTDMPacket();
};

