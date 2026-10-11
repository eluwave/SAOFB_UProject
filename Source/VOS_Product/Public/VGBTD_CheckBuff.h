#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EVGBTActorTargetBB.h"
#include "VGBTBuff.h"
#include "VGBTD_CheckBuff.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckBuff : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTargetBB m_target_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBTBuff> m_buffs;
    
public:
    UVGBTD_CheckBuff();

};

