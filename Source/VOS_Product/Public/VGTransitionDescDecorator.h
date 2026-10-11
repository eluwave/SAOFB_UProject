#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGTransitionDescBP.h"
#include "VGTransitionDescDecorator.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTransitionDescDecorator : public UObject {
    GENERATED_BODY()
public:
    UVGTransitionDescDecorator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVGTransitionDescBP Process(const FVGTransitionDescBP& In);
    
};

