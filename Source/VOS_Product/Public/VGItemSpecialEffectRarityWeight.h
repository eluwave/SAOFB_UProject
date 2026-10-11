#pragma once
#include "CoreMinimal.h"
#include "VGItemSpecialEffectRarityWeight.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGItemSpecialEffectRarityWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 uncommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 super_rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ultra_rare;
    
    FVGItemSpecialEffectRarityWeight();
};

