#pragma once
#include "CoreMinimal.h"
#include "EVGCharaType.h"
#include "EVGStatusEffectSize.h"
#include "VGRimLightParamDesc.h"
#include "VGStatusEffect.generated.h"

class UVGVfxSignalAsset;

USTRUCT(BlueprintType)
struct FVGStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGStatusEffectSize Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_chara_check;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaType chara_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_use_rim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGRimLightParamDesc rim_param;
    
    VOS_PRODUCT_API FVGStatusEffect();
};

