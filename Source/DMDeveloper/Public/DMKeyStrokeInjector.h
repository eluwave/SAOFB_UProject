#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DMKeyStrokeInjector.generated.h"

UCLASS(Blueprintable, Config=DevOnly)
class DMDEVELOPER_API UDMKeyStrokeInjector : public UObject {
    GENERATED_BODY()
public:
    UDMKeyStrokeInjector();

private:
    UFUNCTION(BlueprintCallable)
    static void EnableInputProcessor();
    
    UFUNCTION(BlueprintCallable)
    static void DisableInputProcessor();
    
};

