#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTD_CheckSkillBullet.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckSkillBullet : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_skill_layer_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_skill_key_key;
    
public:
    UVGBTD_CheckSkillBullet();

};

