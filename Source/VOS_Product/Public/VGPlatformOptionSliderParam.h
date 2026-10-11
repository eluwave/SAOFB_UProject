#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGPlatformOptionSliderParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlatformOptionSliderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 value_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 value_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 add_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol left_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol right_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol unit_text;
    
    FVGPlatformOptionSliderParam();
};

