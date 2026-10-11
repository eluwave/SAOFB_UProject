#pragma once
#include "CoreMinimal.h"
#include "EVGStatusBuff.h"
#include "VGSoundCueInfo.h"
#include "VGStatusEffect.h"
#include "VGStatusBuffData.generated.h"

USTRUCT(BlueprintType)
struct FVGStatusBuffData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusBuff Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusEffect> up_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusEffect> down_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo up_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo down_se;
    
    VOS_PRODUCT_API FVGStatusBuffData();
};

