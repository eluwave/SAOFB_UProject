#pragma once
#include "CoreMinimal.h"
#include "VGQuestCoopSetting.h"
#include "VGWidget.h"
#include "VGCoopQuestDialog.generated.h"

class UVGQuestAsset;
class UVGQuestRecord;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGCoopQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetQuestInfo(UVGQuestAsset* Asset, UVGQuestRecord* record, const FVGQuestCoopSetting& coopsetting);
    
};

