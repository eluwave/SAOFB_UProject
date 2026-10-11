#pragma once
#include "CoreMinimal.h"
#include "VGQuestVersusSetting.h"
#include "VGWidget.h"
#include "VGVersusQuestDialog.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVersusQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGVersusQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetQuestInfo(UVGQuestAsset* Asset, UVGQuestRecord* record, const FVGQuestVersusSetting& versussetting);
    
};

