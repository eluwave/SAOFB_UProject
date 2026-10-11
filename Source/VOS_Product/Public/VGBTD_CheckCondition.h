#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EVGBTTargetType.h"
#include "VGBTTargetCondition.h"
#include "VGBTD_CheckCondition.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckCondition : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetType m_target_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBTTargetCondition> m_conditions;
    
public:
    UVGBTD_CheckCondition();

};

