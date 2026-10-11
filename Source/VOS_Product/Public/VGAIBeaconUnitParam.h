#pragma once
#include "CoreMinimal.h"
#include "VGAIBeaconUnitParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIBeaconUnitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scan_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scan_radius;
    
    FVGAIBeaconUnitParam();
};

