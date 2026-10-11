#pragma once
#include "CoreMinimal.h"
#include "VGAIWarpConfig.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIWarpConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float warp_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float warp_timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float force_warp_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float warp_timer_rescue;
    
    FVGAIWarpConfig();
};

