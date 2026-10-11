#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleLife.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleLife : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleLife();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnMax(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnCount(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

