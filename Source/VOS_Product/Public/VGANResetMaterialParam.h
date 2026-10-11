#pragma once
#include "CoreMinimal.h"
#include "EVGMaterialPriority.h"
#include "VGAnimNotify.h"
#include "VGMaterialParamDesc.h"
#include "VGANResetMaterialParam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANResetMaterialParam : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMaterialPriority main_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sub_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMaterialParamDesc> params;
    
    UVGANResetMaterialParam();

};

