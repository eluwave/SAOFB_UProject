#pragma once
#include "CoreMinimal.h"
#include "VGGameEventFixedCameraBlueprintBroker.h"
#include "VGGameEventFixedCameraLightControl.generated.h"

UCLASS(Blueprintable)
class AVGGameEventFixedCameraLightControl : public AVGGameEventFixedCameraBlueprintBroker {
    GENERATED_BODY()
public:
    AVGGameEventFixedCameraLightControl(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TurnOnLight();
    
    UFUNCTION(BlueprintCallable)
    void TurnOffLight();
    
};

