#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EVGBattleTalkTrigger.h"
#include "VGBTT_RequestBattleTalk.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_RequestBattleTalk : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleTalkTrigger m_trigger_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_main_character_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_character_key;
    
public:
    UVGBTT_RequestBattleTalk();

};

