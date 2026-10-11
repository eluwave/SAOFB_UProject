#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGWeaponSetting.h"
#include "VGHeroStruggleWeaponSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleWeaponSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponSetting main_weapon_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponSetting sub_weapon_setting;
    
    VOS_PRODUCT_API FVGHeroStruggleWeaponSetting();
};

