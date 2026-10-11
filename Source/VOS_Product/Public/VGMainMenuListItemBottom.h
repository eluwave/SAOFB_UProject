#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGMainMenuListItemBottom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuListItemBottom : public UVGWidget {
    GENERATED_BODY()
public:
    UVGMainMenuListItemBottom();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
};

