#pragma once
#include "CoreMinimal.h"
#include "VGMaterialParamDesc.h"
#include "VGMaterialParamGroup.generated.h"

USTRUCT(BlueprintType)
struct FVGMaterialParamGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 main_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sub_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMaterialParamDesc> params;
    
    VOS_PRODUCT_API FVGMaterialParamGroup();
};

