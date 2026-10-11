#pragma once
#include "CoreMinimal.h"
#include "VGMeshVisualCustomizeColorPalette.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeColorPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> parameter_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> patterns;
    
    FVGMeshVisualCustomizeColorPalette();
};

