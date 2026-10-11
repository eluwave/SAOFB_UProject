#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTActorTarget.h"
#include "EVGBTWeaponCategory.h"
#include "VGBTD_CheckWeaponCategory.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponCategory : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_check_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_check_subweapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTWeaponCategory> m_weapon_category;
    
public:
    UVGBTD_CheckWeaponCategory();

};

