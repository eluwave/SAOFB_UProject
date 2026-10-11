#pragma once
#include "CoreMinimal.h"
#include "VGGameInstance.h"
#include "VGShowGameInstance.generated.h"

class UObject;
class UVGShowGameInstance;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGShowGameInstance : public UVGGameInstance {
    GENERATED_BODY()
public:
    UVGShowGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UVGShowGameInstance* Get(UObject* WorldContext);
    
};

