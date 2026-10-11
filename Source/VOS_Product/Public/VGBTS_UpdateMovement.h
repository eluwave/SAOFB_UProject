#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "VGBTS_UpdateMovement.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTS_UpdateMovement : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_target_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_random_interval;
    
public:
    UVGBTS_UpdateMovement();

};

