#pragma once
#include "CoreMinimal.h"
#include "VGQuestVersusSetting.h"
#include "VGWidget.h"
#include "VGTDMQuestDialog.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTDMQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGTDMQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetQuestInfo(UVGQuestAsset* Asset, UVGQuestRecord* record, const FVGQuestVersusSetting& versussetting);
    
};

