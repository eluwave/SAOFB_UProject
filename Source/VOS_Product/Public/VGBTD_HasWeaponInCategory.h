#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTWeaponCategory.h"
#include "VGBTD_HasWeaponInCategory.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_HasWeaponInCategory : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTWeaponCategory> m_weapon_category;
    
public:
    UVGBTD_HasWeaponInCategory();

};

