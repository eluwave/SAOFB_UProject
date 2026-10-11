#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckWeaponCanNotFire.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponCanNotFire : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckWeaponCanNotFire();

};

