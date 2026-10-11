#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EVGActionState.h"
#include "VGBTT_WaitActionStateBegin.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_WaitActionStateBegin : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGActionState> m_states;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_time_out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_time_out_result;
    
public:
    UVGBTT_WaitActionStateBegin();

};

