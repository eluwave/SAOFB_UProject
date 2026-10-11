#pragma once
#include "CoreMinimal.h"
#include "VGPrizeEnemyLv.generated.h"

USTRUCT(BlueprintType)
struct FVGPrizeEnemyLv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prize;
    
    VOS_PRODUCT_API FVGPrizeEnemyLv();
};

