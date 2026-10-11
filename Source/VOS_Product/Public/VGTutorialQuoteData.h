#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGTutorialQuoteData.generated.h"

USTRUCT(BlueprintType)
struct FVGTutorialQuoteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol CharaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Quote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    VOS_PRODUCT_API FVGTutorialQuoteData();
};

