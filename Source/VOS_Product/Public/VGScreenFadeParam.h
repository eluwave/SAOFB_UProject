#pragma once
#include "CoreMinimal.h"

#include "EVGScreenFadeType.h"
#include "VGScreenFadeParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGScreenFadeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGScreenFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FVGScreenFadeParam();
};

