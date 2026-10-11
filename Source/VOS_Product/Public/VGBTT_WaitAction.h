#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "VGBTT_WaitAction.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_WaitAction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_check_interruptible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_check_loop;
    
public:
    UVGBTT_WaitAction();

};

