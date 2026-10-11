#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGAdditionalContentInitializerBase.generated.h"

UCLASS(Blueprintable)
class UVGAdditionalContentInitializerBase : public UObject {
    GENERATED_BODY()
public:
    UVGAdditionalContentInitializerBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
};

