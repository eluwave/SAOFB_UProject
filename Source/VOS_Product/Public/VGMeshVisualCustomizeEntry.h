#pragma once
#include "CoreMinimal.h"
#include "EVGMeshVisualCustomizeCategory.h"
#include "VGMeshVisualCustomizeEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMeshVisualCustomizeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> material_indices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName color_palette_tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName texture_palette_tag;
    
    FVGMeshVisualCustomizeEntry();
};

