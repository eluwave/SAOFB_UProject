#pragma once
#include "CoreMinimal.h"
#include "VGWeaponSetting.h"
#include "VGAcquireWeapon.generated.h"

USTRUCT(BlueprintType)
struct FVGAcquireWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponSetting weapon_setting;
    
    VOS_PRODUCT_API FVGAcquireWeapon();
};

