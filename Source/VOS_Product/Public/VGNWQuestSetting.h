#pragma once
#include "CoreMinimal.h"
#include "VGNWQuestSettingDisplayData.h"
#include "VGTabbedListView.h"
#include "VGNWQuestSetting.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNWQuestSetting : public UVGTabbedListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGNWQuestSettingDisplayData> m_display_item_param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_item_list;
    
public:
    UVGNWQuestSetting();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
};

