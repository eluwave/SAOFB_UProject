#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGTeamRule.h"
#include "VGBTD_CheckTeamRule.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckTeamRule : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGTeamRule> m_rules;
    
public:
    UVGBTD_CheckTeamRule();

};

