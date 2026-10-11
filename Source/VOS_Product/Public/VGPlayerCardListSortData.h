#pragma once
#include "CoreMinimal.h"
#include "EVGPlayerCardListSort.h"
#include "VGTextSymbol.h"
#include "VGPlayerCardListSortData.generated.h"

USTRUCT(BlueprintType)
struct FVGPlayerCardListSortData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGPlayerCardListSort::Type> sort_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol sort_text;
    
    VOS_PRODUCT_API FVGPlayerCardListSortData();
};

