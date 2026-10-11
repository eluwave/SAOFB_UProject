#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGameEventEntry.h"
#include "VGGameEventBlueprintBroker.generated.h"

UCLASS(Blueprintable)
class AVGGameEventBlueprintBroker : public AActor {
    GENERATED_BODY()
public:
    AVGGameEventBlueprintBroker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventStart(const FVGGameEventEntry& Entry, bool IsExc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameEventEnd(const FVGGameEventEntry& Entry, bool IsExc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorVisibilityChangeRequest(const FVGGameEventEntry& Entry, bool IsVisible);
    
};

