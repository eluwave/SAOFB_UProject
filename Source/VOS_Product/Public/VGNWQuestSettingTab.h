#pragma once
#include "CoreMinimal.h"
#include "VGGridViewItem.h"
#include "VGNWQuestSettingTab.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNWQuestSettingTab : public UVGGridViewItem {
    GENERATED_BODY()
public:
    UVGNWQuestSettingTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRightArrowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLeftArrowAnimation();
    
};

