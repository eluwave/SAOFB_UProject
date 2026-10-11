#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EVGActionState.h"
#include "VGBTT_WaitCover.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_WaitCover : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGActionState> m_states;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_inverse_state;
    
public:
    UVGBTT_WaitCover();

};

