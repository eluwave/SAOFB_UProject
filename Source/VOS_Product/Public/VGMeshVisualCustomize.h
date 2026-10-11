#pragma once
#include "CoreMinimal.h"
#include "EVGMeshVisualCustomizeMeshType.h"
#include "VGMeshVisualCustomizeMeshEntry.h"
#include "VGMeshVisualCustomize.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMeshVisualCustomizeMeshType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeMeshEntry> meshes;
    
    FVGMeshVisualCustomize();
};

