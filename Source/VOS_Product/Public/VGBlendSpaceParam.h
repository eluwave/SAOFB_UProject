#pragma once
#include "CoreMinimal.h"
#include "VGBlendSpaceParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBlendSpaceParam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 value[6];
    
public:
    VOS_PRODUCT_API FVGBlendSpaceParam();
};

