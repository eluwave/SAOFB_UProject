#pragma once
#include "CoreMinimal.h"
#include "VGInventoryEntryAccessorySetting.h"
#include "VGInventoryEntryCostumeSetting.h"
#include "VGInventoryEntrySetting.h"
#include "VGInventoryEntryWeaponSetting.h"
#include "VGAdditionalContentItemEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAdditionalContentItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName shop_item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntrySetting base_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryWeaponSetting weapon_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryCostumeSetting costume_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryAccessorySetting accessory_setting;
    
    FVGAdditionalContentItemEntry();
};

