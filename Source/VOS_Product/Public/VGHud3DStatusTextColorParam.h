#pragma once
#include "CoreMinimal.h"

#include "VGHud3DStatusTextColorParam.generated.h"

USTRUCT(BlueprintType)
struct FVGHud3DStatusTextColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerLimit;
    
    VOS_PRODUCT_API FVGHud3DStatusTextColorParam();
};

