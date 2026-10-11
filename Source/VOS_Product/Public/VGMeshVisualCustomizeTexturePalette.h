#pragma once
#include "CoreMinimal.h"
#include "VGMeshVisualCustomizeTexturePalette.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeTexturePalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> parameter_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> patterns;
    
    FVGMeshVisualCustomizeTexturePalette();
};

