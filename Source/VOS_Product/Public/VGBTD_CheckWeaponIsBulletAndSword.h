#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "VGBTD_CheckWeaponIsBulletAndSword.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponIsBulletAndSword : public UBTDecorator {
    GENERATED_BODY()
public:
    UVGBTD_CheckWeaponIsBulletAndSword();

};

