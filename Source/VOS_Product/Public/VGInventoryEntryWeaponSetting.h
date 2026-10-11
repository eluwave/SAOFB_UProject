#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponDivision.h"
#include "EVGWeaponOption.h"
#include "VGMeshMaterialOverride.h"
#include "VGWeaponVariableParam.h"
#include "VGInventoryEntryWeaponSetting.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGInventoryEntryWeaponSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision division;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 classify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWeaponVariableParam variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 initial_ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponOption equip_option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGMeshMaterialOverride material_override;
    
    FVGInventoryEntryWeaponSetting();
};

