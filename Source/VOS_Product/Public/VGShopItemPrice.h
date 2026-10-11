#pragma once
#include "CoreMinimal.h"
#include "EVGShopCurrency.h"
#include "VGShopItemPrice.generated.h"

USTRUCT(BlueprintType)
struct FVGShopItemPrice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGShopCurrency::Type> currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 price;
    
    VOS_PRODUCT_API FVGShopItemPrice();
};

