#pragma once
#include "CoreMinimal.h"
#include "EVGMaterialPriority.h"
#include "VGAnimNotifyState.h"
#include "VGMaterialParamDesc.h"
#include "VGANSMaterialParam.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSMaterialParam : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMaterialPriority main_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sub_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMaterialParamDesc> params;
    
    UVGANSMaterialParam();

};

