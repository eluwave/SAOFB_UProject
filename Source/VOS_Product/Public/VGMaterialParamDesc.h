#pragma once
#include "CoreMinimal.h"

#include "EVGMaterialParamType.h"
#include "VGMaterialParamDesc.generated.h"

USTRUCT(BlueprintType)
struct FVGMaterialParamDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName material_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName param_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMaterialParamType param_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scalar_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor color_value;
    
    VOS_PRODUCT_API FVGMaterialParamDesc();
};

