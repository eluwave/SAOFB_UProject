#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VGDungeonDoorInterface.generated.h"

UINTERFACE(Blueprintable)
class VOS_PRODUCT_API UVGDungeonDoorInterface : public UInterface {
    GENERATED_BODY()
};

class VOS_PRODUCT_API IVGDungeonDoorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorLocked(bool locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor();
    
};

