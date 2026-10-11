#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleGetMore.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleGetMore : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleGetMore();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

