#pragma once
#include "CoreMinimal.h"
#include "VGShopWidgetBase.h"
#include "VGTextSymbol.h"
#include "VGMedalShopWidget.generated.h"

class UVGShopInventoryData;
class UVGTabbedListView;
class UVGWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMedalShopWidget : public UVGShopWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_shop_category_text[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_item_preview;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_ws_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGShopInventoryData* m_inventory;
    
public:
    UVGMedalShopWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreviewItem() const;
    
};

