#pragma once
#include "CoreMinimal.h"
#include "VGGridViewItem.h"
#include "VGMainMenuListItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuListItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
    UVGMainMenuListItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetParam(int32 param00, int32 param01);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
};

