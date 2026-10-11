#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGOptionSpinBoxParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGOptionSpinBoxParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> param_texts;
    
    FVGOptionSpinBoxParam();
};

