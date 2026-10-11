#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGFFAQuestDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFFAQuestDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UVGFFAQuestDialog();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRound(int32 Round, bool is_last);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDifficulty(int32 difficulty);
    
};

