#pragma once
#include "CoreMinimal.h"

#include "VGMeshVisualCustomizeColorPattern.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMeshVisualCustomizeColorPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor display_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> parameter_values;
    
    FVGMeshVisualCustomizeColorPattern();
};

