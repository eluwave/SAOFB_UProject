#pragma once
#include "CoreMinimal.h"
#include "VGAfasysShopingItemGrandTotalPocketMoneyBonus.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysShopingItemGrandTotalPocketMoneyBonus {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 value;
    
    FVGAfasysShopingItemGrandTotalPocketMoneyBonus();
};

