#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsListCategory.h"
#include "EVGGoodsSortType.h"
#include "VGTextSymbol.h"
#include "VGGoodsTabParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGGoodsTabParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tab_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGoodsListCategory goods_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGGoodsSortType> sort_type;
    
    VOS_PRODUCT_API FVGGoodsTabParam();
};

