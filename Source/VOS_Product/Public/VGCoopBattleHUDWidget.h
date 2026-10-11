#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGCoopBattleHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopBattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGCoopBattleHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimer(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnMax(int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRespawnCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

