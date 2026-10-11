#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepSequenceEvent.h"
#include "VGGameEventStepSequenceRefEvent.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGameEventStepSequenceRefEvent : public UVGGameEventStepSequenceEvent {
    GENERATED_BODY()
public:
    UVGGameEventStepSequenceRefEvent();

private:
    UFUNCTION(BlueprintCallable)
    void onStepSequenceLoaded();
    
    UFUNCTION(BlueprintCallable)
    void onFadeCompleted();
    
};

