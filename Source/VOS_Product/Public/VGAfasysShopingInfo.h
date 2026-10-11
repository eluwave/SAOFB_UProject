#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuShoping.h"
#include "VGAfasysShopingInfo.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysShopingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuShoping::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 special_effect_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float price_rate;
    
    FVGAfasysShopingInfo();
};

