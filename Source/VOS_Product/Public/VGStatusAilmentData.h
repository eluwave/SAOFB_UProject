#pragma once
#include "CoreMinimal.h"
#include "EVGStatusAilment.h"
#include "VGSoundCueInfo.h"
#include "VGStatusEffect.h"
#include "VGStatusAilmentData.generated.h"

USTRUCT(BlueprintType)
struct FVGStatusAilmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusAilment Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusEffect> effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo SE;
    
    VOS_PRODUCT_API FVGStatusAilmentData();
};

