#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysEmotionSituation.h"
#include "VGTextSymbol.h"
#include "VGAfasysSituation.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysSituation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysEmotionSituation::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Description;
    
    VOS_PRODUCT_API FVGAfasysSituation();
};

