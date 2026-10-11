#pragma once
#include "CoreMinimal.h"
#include "VGBattleBRParam.h"
#include "VGBattleBRPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGBattleBRPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clear_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleBRParam> params;
    
    VOS_PRODUCT_API FVGBattleBRPacket();
};

