#pragma once
#include "CoreMinimal.h"
#include "EVGWeaponUnleashWidgetMode.h"
#include "VGShopWidgetBase.h"
#include "VGTextSymbol.h"
#include "VGWeaponUnleashWidget.generated.h"

class UVGGoodsInfo;
class UVGItemParamWidget;
class UVGShopInventoryData;
class UVGTabbedListView;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGWeaponUnleashWidget : public UVGShopWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_weapon_division_text[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_shop_sort_method_all;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_shop_sort_method;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGoodsInfo* m_ui_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_total_cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_remaining_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGShopInventoryData* m_inventory;
    
public:
    UVGWeaponUnleashWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModeChanged(EVGWeaponUnleashWidgetMode::Type mode);
    
};

