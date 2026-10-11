#pragma once
#include "CoreMinimal.h"
#include "VGQuestVersusSetting.h"
#include "VGWidget.h"
#include "VGBRQuestDialog.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGBRQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGBRQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetQuestInfo(UVGQuestAsset* Asset, UVGQuestRecord* record, const FVGQuestVersusSetting& setting);
    
};

