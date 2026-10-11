#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGEquipListSortType.h"
#include "EVGWeaponDivision.h"
#include "VGTextSymbol.h"
#include "VGWeaponListTabParam.generated.h"

USTRUCT(BlueprintType)
struct FVGWeaponListTabParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference tab_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision weapon_division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGEquipListSortType> sort_type;
    
    VOS_PRODUCT_API FVGWeaponListTabParam();
};

