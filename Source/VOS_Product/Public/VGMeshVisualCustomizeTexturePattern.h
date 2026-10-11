#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGMeshVisualCustomizeTexturePattern.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeTexturePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> parameter_values;
    
    FVGMeshVisualCustomizeTexturePattern();
};

