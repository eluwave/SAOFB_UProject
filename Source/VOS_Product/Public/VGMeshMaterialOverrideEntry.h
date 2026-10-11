#pragma once
#include "CoreMinimal.h"
#include "EVGMeshVisualCustomizeCategory.h"
#include "VGMeshMaterialOverrideEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshMaterialOverrideEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMeshVisualCustomizeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName color_pattern_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName texture_pattern_tag;
    
    FVGMeshMaterialOverrideEntry();
};

