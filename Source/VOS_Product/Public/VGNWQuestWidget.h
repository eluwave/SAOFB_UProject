#pragma once
#include "CoreMinimal.h"
#include "VGQuestWidget.h"
#include "VGNWQuestWidget.generated.h"

class UVGNWQuestSetting;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNWQuestWidget : public UVGQuestWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNWQuestSetting* m_quest_setting;
    
public:
    UVGNWQuestWidget();

};

