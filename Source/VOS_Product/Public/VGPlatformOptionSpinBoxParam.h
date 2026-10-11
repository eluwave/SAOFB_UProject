#pragma once
#include "CoreMinimal.h"
#include "VGPlatformOptionGraphicsValue.h"
#include "VGPlatformOptionSpinBoxParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformOptionSpinBoxParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlatformOptionGraphicsValue> params;
    
    FVGPlatformOptionSpinBoxParam();
};

