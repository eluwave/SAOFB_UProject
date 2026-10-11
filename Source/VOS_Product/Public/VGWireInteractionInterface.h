#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VGWireInteractionInterface.generated.h"

UINTERFACE(Blueprintable)
class VOS_PRODUCT_API UVGWireInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class VOS_PRODUCT_API IVGWireInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWireHit();
    
};

