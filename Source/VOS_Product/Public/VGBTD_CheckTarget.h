#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTActorTarget.h"
#include "VGBTD_CheckTarget.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTarget : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_target;
    
public:
    UVGBTD_CheckTarget();

};

