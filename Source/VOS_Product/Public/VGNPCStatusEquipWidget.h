#pragma once
#include "CoreMinimal.h"
#include "VGNPCStatusInfoWidgetBase.h"
#include "VGNPCStatusEquipWidget.generated.h"

class UDataTable;
class UVGNPCSkillSetInfoWidget;
class UVGNPCStatusAccessoriesInfoWidget;
class UVGNPCStatusArmsInfoWidget;
class UVGNPCStatusEquipListWidget;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNPCStatusEquipWidget : public UVGNPCStatusInfoWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCSkillSetInfoWidget* m_main_arms_skill_set_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCSkillSetInfoWidget* m_sub_arms_skill_set_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_gadget_skill_set_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusAccessoriesInfoWidget* m_accessories1_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusAccessoriesInfoWidget* m_accessories2_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusArmsInfoWidget* m_main_arms_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusArmsInfoWidget* m_sub_arms_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_item_category_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_weapon_division_category_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_accessories_icon_category_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNPCStatusEquipListWidget* m_equip_list;
    
public:
    UVGNPCStatusEquipWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInfoPage();
    
};

