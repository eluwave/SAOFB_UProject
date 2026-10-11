#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENetSocketEventID.h"
#include "NetSocketEvent.generated.h"

class UNetMessage;
class UNetSocketEvent;

UCLASS(Blueprintable)
class UNetSocketEvent : public UObject {
    GENERATED_BODY()
public:
    UNetSocketEvent();

    UFUNCTION(BlueprintCallable)
    ENetSocketEventID GetEventId();
    
    UFUNCTION(BlueprintCallable)
    UNetMessage* GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetSocketEvent* Create(UObject* WorldContextObject);
    
};

