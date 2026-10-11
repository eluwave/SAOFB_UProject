#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudRuleTimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudRuleTimer : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHudRuleTimer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerValue(float value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerString(const FString& TimerString);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

