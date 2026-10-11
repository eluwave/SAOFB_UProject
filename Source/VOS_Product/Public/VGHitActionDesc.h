#pragma once
#include "CoreMinimal.h"
#include "VGHitActionDesc.generated.h"

USTRUCT(BlueprintType)
struct FVGHitActionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float critical_probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float critical_factor;
    
    VOS_PRODUCT_API FVGHitActionDesc();
};

