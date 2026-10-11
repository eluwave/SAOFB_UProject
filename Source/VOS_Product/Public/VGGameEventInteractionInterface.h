#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VGGameEventContactParam.h"
#include "VGGameEventGenericTriggerParam.h"
#include "VGGameEventInteractionParam.h"
#include "VGGameEventInteractionInterface.generated.h"

UINTERFACE(Blueprintable)
class VOS_PRODUCT_API UVGGameEventInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class VOS_PRODUCT_API IVGGameEventInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteraction(const FVGGameEventInteractionParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenericTrigger(const FVGGameEventGenericTriggerParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnContact(const FVGGameEventContactParam& param);
    
};

