#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTT_Warp.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_Warp : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_location_key;
    
public:
    UVGBTT_Warp();

};

