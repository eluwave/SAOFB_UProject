#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudDamage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudDamage : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudDamage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Damage();
    
};

