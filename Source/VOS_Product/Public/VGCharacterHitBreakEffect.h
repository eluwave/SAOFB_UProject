#pragma once
#include "CoreMinimal.h"
#include "VGRimLightParamDesc.h"
#include "VGCharacterHitBreakEffect.generated.h"

class UVGVfxSignalAsset;

USTRUCT(BlueprintType)
struct FVGCharacterHitBreakEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRimLightParamDesc rim_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rim_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName node_name;
    
    VOS_PRODUCT_API FVGCharacterHitBreakEffect();
};

