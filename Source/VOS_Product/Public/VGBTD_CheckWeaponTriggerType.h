#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGWeaponTriggerType.h"
#include "VGBTD_CheckWeaponTriggerType.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckWeaponTriggerType : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGWeaponTriggerType m_trigger_type;
    
public:
    UVGBTD_CheckWeaponTriggerType();

};

