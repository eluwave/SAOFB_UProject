#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsListCategory.h"
#include "EVGGoodsSortType.h"
#include "EVGWeaponDivision.h"
#include "VGTextSymbol.h"
#include "VGMemoryChipChangeTabParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGMemoryChipChangeTabParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tab_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGoodsListCategory goods_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision weapon_division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGGoodsSortType> sort_type;
    
    VOS_PRODUCT_API FVGMemoryChipChangeTabParam();
};

