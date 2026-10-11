#pragma once
#include "CoreMinimal.h"
#include "VGMeshMaterialOverrideEntry.h"
#include "VGMeshMaterialOverride.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshMaterialOverrideEntry> entries;
    
    FVGMeshMaterialOverride();
};

