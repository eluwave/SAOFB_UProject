#pragma once
#include "CoreMinimal.h"
#include "VGMeshMaterialOverride.h"
#include "VGInventoryEntryCostumeSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInventoryEntryCostumeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride material_override;
    
    FVGInventoryEntryCostumeSetting();
};

