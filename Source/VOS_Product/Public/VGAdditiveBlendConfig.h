#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "Animation/InputScaleBias.h"
#include "VGAdditiveBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAdditiveBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputBlendPose LayerSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoneNameOverWrite;
    
    FVGAdditiveBlendConfig();
};

