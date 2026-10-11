#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGNPCStatusInfoWidgetBase.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNPCStatusInfoWidgetBase : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_sp_effect_menu_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_shot_type_menu_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_accuracy_rank_menu_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_b_attach_able_sp_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_b_attach_able_shot_type_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_b_attach_able_accuracy_rank;
    
public:
    UVGNPCStatusInfoWidgetBase();

};

