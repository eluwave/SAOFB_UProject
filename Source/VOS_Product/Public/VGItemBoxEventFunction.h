#pragma once
#include "CoreMinimal.h"
#include "EVGItemBoxFunction.h"
#include "VGTextSymbol.h"
#include "VGItemBoxEventFunction.generated.h"

USTRUCT(BlueprintType)
struct FVGItemBoxEventFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGItemBoxFunction::Type> Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol select_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_select_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol caption_text;
    
    VOS_PRODUCT_API FVGItemBoxEventFunction();
};

