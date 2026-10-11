#pragma once
#include "CoreMinimal.h"
#include "VGGameEventBlueprintBroker.h"
#include "VGGameEventEntry.h"
#include "VGGameEventFixedCameraBlueprintBroker.generated.h"

UCLASS(Blueprintable)
class AVGGameEventFixedCameraBlueprintBroker : public AVGGameEventBlueprintBroker {
    GENERATED_BODY()
public:
    AVGGameEventFixedCameraBlueprintBroker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFixedCameraEventStart(const FVGGameEventEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFixedCameraEventEnd(const FVGGameEventEntry& Entry);
    
};

