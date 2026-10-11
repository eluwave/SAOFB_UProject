#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTMovementRule.h"
#include "VGBTD_CheckMovementRule.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckMovementRule : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTMovementRule> m_rule;
    
public:
    UVGBTD_CheckMovementRule();

};

