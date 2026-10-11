#pragma once
#include "CoreMinimal.h"
#include "VGMeshVisualCustomizeFacePaintParam.h"
#include "VGTextSymbol.h"
#include "VGMeshVisualCustomizeFacePaintPattern.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeFacePaintPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshVisualCustomizeFacePaintParam param;
    
    FVGMeshVisualCustomizeFacePaintPattern();
};

