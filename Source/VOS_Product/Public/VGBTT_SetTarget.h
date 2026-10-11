#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EVGBTTargetTypeBB.h"
#include "VGBTTargetCondition.h"
#include "VGBTT_SetTarget.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_SetTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetTypeBB m_target_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBTTargetCondition> m_conditions;
    
public:
    UVGBTT_SetTarget();

};

