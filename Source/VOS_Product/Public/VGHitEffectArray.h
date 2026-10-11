#pragma once
#include "CoreMinimal.h"
#include "VGHitEffect.h"
#include "VGHitEffectArray.generated.h"

USTRUCT(BlueprintType)
struct FVGHitEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHitEffect> effect;
    
    VOS_PRODUCT_API FVGHitEffectArray();
};

