#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGItemCategory.h"
#include "VGGoodsListCategoryIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGoodsListCategoryIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FVGGoodsListCategoryIcon();
};

