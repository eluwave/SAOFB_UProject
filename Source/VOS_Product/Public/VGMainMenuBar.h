#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuBar.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuBar : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMainMenuBar();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTabIndex(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetShoulderButtonVisivility(bool in_visivility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIcon(int32 index, UTexture2D* in_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushRightShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushLeftShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySlideOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySlideInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
};

