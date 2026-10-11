#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysMenuPriorityItem.h"
#include "EVGAfasysMenuShoping.h"
#include "VGAfasysShopingBonus.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysShopingBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuShoping::Type> old_shoping_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysMenuPriorityItem::Type> old_priority_item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 add_special_effect_num;
    
    FVGAfasysShopingBonus();
};

