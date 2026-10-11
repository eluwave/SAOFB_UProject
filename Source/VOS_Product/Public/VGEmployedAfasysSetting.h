#pragma once
#include "CoreMinimal.h"
#include "EVGCharaGender.h"
#include "VGBasicStatus.h"
#include "VGInventoryEntryAccessorySetting.h"
#include "VGSaveAvatarCustomizeSetting.h"
#include "VGSaveCharacterFigureSetting.h"
#include "VGSkillSetting.h"
#include "VGWeaponSetting.h"
#include "VGEmployedAfasysSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGEmployedAfasysSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAvatarCustomizeSetting avatar_costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveCharacterFigureSetting avatar_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBasicStatus alloc_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponSetting weapon_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponSetting weapon_sub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSkillSetting skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGInventoryEntryAccessorySetting> accessory_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    FVGEmployedAfasysSetting();
};

