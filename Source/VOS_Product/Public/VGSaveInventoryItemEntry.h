#pragma once
#include "CoreMinimal.h"
#include "EVGItemCategory.h"
#include "VGInventoryEntryId.h"
#include "VGMeshMaterialOverride.h"
#include "VGSaveInventoryAccessoryParam.h"
#include "VGSaveInventoryWeaponParam.h"
#include "VGSaveInventoryItemEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveInventoryItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId entry_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 possession_amount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveInventoryWeaponParam weapon_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveInventoryAccessoryParam accessory_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride material_override;
    
    FVGSaveInventoryItemEntry();
};

