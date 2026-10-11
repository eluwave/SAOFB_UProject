#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EVGBTActorTarget.h"
#include "VGBTT_AddHate.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_AddHate : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
public:
    UVGBTT_AddHate();

};

