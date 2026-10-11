#pragma once
#include "CoreMinimal.h"
#include "EVGItemCategory.h"
#include "EVGItemRarity.h"
#include "VGWeaponListItemParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGWeaponListItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemRarity rarity;
    
    VOS_PRODUCT_API FVGWeaponListItemParam();
};

