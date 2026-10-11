#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTActorTarget.h"
#include "VGBTD_CheckTargetFlying.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTargetFlying : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_height_scale;
    
public:
    UVGBTD_CheckTargetFlying();

};

