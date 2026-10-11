#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGWeaponMasterySetting.generated.h"

UCLASS(Blueprintable, Config=Game)
class UVGWeaponMasterySetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_lv_coef_low;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_lv_coef_high;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_damage_clamp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 k_integer_weight;
    
    UVGWeaponMasterySetting();

};

