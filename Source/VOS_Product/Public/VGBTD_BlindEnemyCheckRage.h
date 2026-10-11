#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTD_BlindEnemyCheckRage.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_BlindEnemyCheckRage : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_threshold;
    
public:
    UVGBTD_BlindEnemyCheckRage();

};

