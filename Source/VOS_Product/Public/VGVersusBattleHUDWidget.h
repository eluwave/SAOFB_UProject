#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGVersusBattleHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVersusBattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGVersusBattleHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerString(const FString& time_str);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimer(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageRate(float alpha, float bravo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowDamageRate(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTeamChange(bool left_right);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

