#pragma once
#include "CoreMinimal.h"
#include "VGItemSpecialEffectModifyTable.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemSpecialEffectModifyTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float effect_max_factor;
    
    FVGItemSpecialEffectModifyTable();
};

