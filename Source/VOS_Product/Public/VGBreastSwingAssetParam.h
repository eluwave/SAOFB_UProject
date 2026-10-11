#pragma once
#include "CoreMinimal.h"
#include "VGBreastSwingParam.h"
#include "VGBreastSwingAssetParam.generated.h"

USTRUCT(BlueprintType)
struct FVGBreastSwingAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_skeletal_mesh_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBreastSwingParam> m_params;
    
    VOS_PRODUCT_API FVGBreastSwingAssetParam();
};

