#pragma once
#include "CoreMinimal.h"
#include "VGMatchingManager.h"
#include "VGCoopMatchingManager.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoopMatchingManager : public AVGMatchingManager {
    GENERATED_BODY()
public:
    AVGCoopMatchingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

