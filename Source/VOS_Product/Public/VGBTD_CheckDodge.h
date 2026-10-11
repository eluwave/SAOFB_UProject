#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGDodgeAction.h"
#include "VGBTD_CheckDodge.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckDodge : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDodgeAction m_action;
    
public:
    UVGBTD_CheckDodge();

};

