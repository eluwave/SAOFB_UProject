#pragma once
#include "CoreMinimal.h"

#include "VGBackgroundFadeParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBackgroundFadeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FVGBackgroundFadeParam();
};

