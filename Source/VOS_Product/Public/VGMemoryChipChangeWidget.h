#pragma once
#include "CoreMinimal.h"
#include "EVGItemCategory.h"
#include "VGItemListWidgetBase.h"
#include "VGMemotyChipChangeData.h"
#include "VGTextSymbol.h"
#include "VGMemoryChipChangeWidget.generated.h"

class UVGGoodsInfo;
class UVGItemParamWidget;
class UVGTabbedListView;
class UVGWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMemoryChipChangeWidget : public UVGItemListWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMemotyChipChangeData> m_memory_chap_change_data;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_memory_chip_change_mode_text[3];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_dialog_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_weapon_comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_weapon_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_accessory_comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_accessory_result1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGItemParamWidget* m_ui_accessory_result2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGoodsInfo* m_ui_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_weapon_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_ui_accessory_header;
    
public:
    UVGMemoryChipChangeWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGItemCategory GetItemCategory() const;
    
};

