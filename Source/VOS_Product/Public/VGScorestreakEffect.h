#pragma once
#include "CoreMinimal.h"
#include "VGANVfxSignalSetting.h"
#include "VGSoundCueInfo.h"
#include "VGTextSymbol.h"
#include "VGScorestreakEffect.generated.h"

USTRUCT(BlueprintType)
struct FVGScorestreakEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float promotion_gauge_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float demotion_gauge_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Log;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGANVfxSignalSetting> vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundCueInfo> Sound;
    
    VOS_PRODUCT_API FVGScorestreakEffect();
};

