#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotify.h"
#include "VGMaterialParamGroup.h"
#include "VGANUltimateLoading.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANUltimateLoading : public UVGAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMaterialParamGroup m_material_param;
    
public:
    UVGANUltimateLoading();

};

