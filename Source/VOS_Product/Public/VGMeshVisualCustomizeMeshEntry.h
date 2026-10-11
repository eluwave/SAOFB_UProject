#pragma once
#include "CoreMinimal.h"
#include "VGMeshVisualCustomizeEntry.h"
#include "VGMeshVisualCustomizeMeshEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeMeshEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mesh_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeEntry> customize_entries;
    
    FVGMeshVisualCustomizeMeshEntry();
};

