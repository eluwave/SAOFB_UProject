#pragma once
#include "CoreMinimal.h"
#include "VGInventoryEntryId.h"
#include "VGSaveCharacterEquipmentEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveCharacterEquipmentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId main_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId sub_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId accessory0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId accessory1;
    
    FVGSaveCharacterEquipmentEntry();
};

