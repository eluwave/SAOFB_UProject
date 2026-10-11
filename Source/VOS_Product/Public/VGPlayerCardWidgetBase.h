#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGPlayerCardWidgetBase.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlayerCardWidgetBase : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_badge_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_codename_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_comment_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_tab_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_sp_effect_data_table;
    
public:
    UVGPlayerCardWidgetBase();

};

