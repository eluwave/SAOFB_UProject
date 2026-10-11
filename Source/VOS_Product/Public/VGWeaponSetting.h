#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponDivision.h"
#include "EVGWeaponOption.h"
#include "VGInventoryEntryId.h"
#include "VGMeshMaterialOverride.h"
#include "VGWeaponVariableParam.h"
#include "VGWeaponSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGWeaponSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId m_inventory_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision m_division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_classify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponVariableParam m_variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_initial_ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponOption m_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride m_material;
    
    FVGWeaponSetting();
};

