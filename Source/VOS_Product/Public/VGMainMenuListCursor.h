#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuListCursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuListCursor : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMainMenuListCursor();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDecideAnime();
    
};

