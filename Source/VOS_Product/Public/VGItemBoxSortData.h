#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsSortType.h"
#include "VGTextSymbol.h"
#include "VGItemBoxSortData.generated.h"

USTRUCT(BlueprintType)
struct FVGItemBoxSortData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGoodsSortType sort_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol sort_text;
    
    VOS_PRODUCT_API FVGItemBoxSortData();
};

