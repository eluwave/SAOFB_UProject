#pragma once
#include "CoreMinimal.h"

#include "VGClothAssetParam.generated.h"

USTRUCT(BlueprintType)
struct FVGClothAssetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_skeletal_mesh_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_params;
    
    VOS_PRODUCT_API FVGClothAssetParam();
};

