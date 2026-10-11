#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleGetValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleGetValue : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleGetValue();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Count();
    
};

