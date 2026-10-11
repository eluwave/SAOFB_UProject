#pragma once
#include "CoreMinimal.h"

#include "VGMaterialParamDesc.h"
#include "VGDeleteAlertMaterialParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDeleteAlertMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMaterialParamDesc base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float peak_scalar_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor peak_color_value;
    
    FVGDeleteAlertMaterialParam();
};

