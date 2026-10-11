#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGWeaponDivision.h"
#include "VGBTD_CheckWeaponDivision.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponDivision : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponDivision m_weapon_division;
    
public:
    UVGBTD_CheckWeaponDivision();

};

