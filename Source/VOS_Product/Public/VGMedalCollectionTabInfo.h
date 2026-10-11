#pragma once
#include "CoreMinimal.h"
#include "EVGMedal.h"
#include "VGTextSymbol.h"
#include "VGMedalCollectionTabInfo.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMedalCollectionTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMedal Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    FVGMedalCollectionTabInfo();
};

