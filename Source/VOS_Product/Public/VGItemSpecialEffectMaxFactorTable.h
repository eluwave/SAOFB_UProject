#pragma once
#include "CoreMinimal.h"
#include "EVGGameDifficulty.h"
#include "VGItemSpecialEffectMaxFactorTable.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemSpecialEffectMaxFactorTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameDifficulty difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> effect_max_factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float accessory_effect_max_factor;
    
    FVGItemSpecialEffectMaxFactorTable();
};

