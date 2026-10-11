#pragma once
#include "CoreMinimal.h"
#include "VGGameEventBase.h"
#include "VGGameEventStepSequenceEvent.generated.h"

class UVGGameEventStepSequence;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventStepSequenceEvent : public UVGGameEventBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventStepSequence* m_step_sequence;
    
public:
    UVGGameEventStepSequenceEvent();

};

