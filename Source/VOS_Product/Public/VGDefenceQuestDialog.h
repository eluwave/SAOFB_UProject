#pragma once
#include "CoreMinimal.h"
#include "VGQuestReward.h"
#include "VGWidget.h"
#include "VGDefenceQuestDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGDefenceQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGDefenceQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRewardParam(const TArray<FVGQuestReward>& rewards);
    
};

