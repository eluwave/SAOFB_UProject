#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsSortType.h"
#include "VGTextSymbol.h"
#include "VGItemListSortData.generated.h"

USTRUCT(BlueprintType)
struct FVGItemListSortData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGoodsSortType sort_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol sort_text;
    
    VOS_PRODUCT_API FVGItemListSortData();
};

