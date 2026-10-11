#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuSubWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuSubWindow : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMainMenuSubWindow();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushRightShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushLeftShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable)
    bool IsClose();
    
    UFUNCTION(BlueprintCallable)
    void Decide(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

