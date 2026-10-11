#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTD_CheckSkillLayer.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckSkillLayer : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_skill_layer_key;
    
public:
    UVGBTD_CheckSkillLayer();

};

