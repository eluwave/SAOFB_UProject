#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuIcon : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMainMenuIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIcon(UTexture2D* in_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayWaitAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySelectAnime();
    
};

