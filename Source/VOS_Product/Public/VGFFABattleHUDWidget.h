#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGFFABattleHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFFABattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGFFABattleHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerString(const FString& time_str);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

