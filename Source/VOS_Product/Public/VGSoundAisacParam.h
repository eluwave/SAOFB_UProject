#pragma once
#include "CoreMinimal.h"
#include "VGSoundAisacParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSoundAisacParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    FVGSoundAisacParam();
};

