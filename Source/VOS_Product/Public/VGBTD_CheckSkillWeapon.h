#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTD_CheckSkillWeapon.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTD_CheckSkillWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_skill_layer_key;
    
public:
    UVGBTD_CheckSkillWeapon();

};

