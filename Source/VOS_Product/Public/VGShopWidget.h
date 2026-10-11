#pragma once
#include "CoreMinimal.h"
#include "VGShopWidgetBase.h"
#include "VGTextSymbol.h"
#include "VGShopWidget.generated.h"

class UVGGoodsInfo;
class UVGShopInventoryData;
class UVGSkillLearnInfo;
class UVGTabbedListView;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGShopWidget : public UVGShopWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_shop_category_text[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_shop_sort_methods[8];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGoodsInfo* m_ui_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillLearnInfo* m_ui_skill_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_total;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGShopInventoryData* m_inventory;
    
public:
    UVGShopWidget();

};

