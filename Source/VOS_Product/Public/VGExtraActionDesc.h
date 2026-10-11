#pragma once
#include "CoreMinimal.h"
#include "VGExtraActionCoeff.h"
#include "VGMaterialParamDesc.h"
#include "VGExtraActionDesc.generated.h"

class UVGActionLibrary;
class UVGTriggerLibrary;

USTRUCT(BlueprintType)
struct FVGExtraActionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGActionLibrary* action_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTriggerLibrary* trigger_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMaterialParamDesc> material_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGExtraActionCoeff coeff;
    
    VOS_PRODUCT_API FVGExtraActionDesc();
};

