#pragma once
#include "CoreMinimal.h"
#include "VGHudGoodActionInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGHudGoodActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText chara_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float life_time;
    
    VOS_PRODUCT_API FVGHudGoodActionInfo();
};

