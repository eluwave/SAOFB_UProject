#pragma once
#include "CoreMinimal.h"
#include "VGTicketItemSpecialEffect.generated.h"

USTRUCT(BlueprintType)
struct FVGTicketItemSpecialEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effect_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 probability;
    
    VOS_PRODUCT_API FVGTicketItemSpecialEffect();
};

