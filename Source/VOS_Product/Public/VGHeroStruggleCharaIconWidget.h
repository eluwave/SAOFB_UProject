#pragma once
#include "CoreMinimal.h"
#include "VGHeroStruggleCharaIconDisplayInfo.h"
#include "VGWidget.h"
#include "VGHeroStruggleCharaIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHeroStruggleCharaIconWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UVGHeroStruggleCharaIconWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconData(const FVGHeroStruggleCharaIconDisplayInfo icon_data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorOff();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

