#pragma once
#include "CoreMinimal.h"
#include "VGSpeedLvInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGSpeedLvInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float weight_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 branch_agi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float sub_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float clamp_max;
    
    VOS_PRODUCT_API FVGSpeedLvInfo();
};

