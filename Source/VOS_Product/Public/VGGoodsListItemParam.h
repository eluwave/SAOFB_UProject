#pragma once
#include "CoreMinimal.h"
#include "EVGGoodsListCategory.h"
#include "EVGItemCategory.h"
#include "EVGItemRarity.h"
#include "VGGoodsListItemParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGGoodsListItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGoodsListCategory list_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemRarity rarity;
    
    VOS_PRODUCT_API FVGGoodsListItemParam();
};

