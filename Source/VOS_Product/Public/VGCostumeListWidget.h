#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGWeaponListItemParam.h"
#include "VGWeaponListTabParam.h"
#include "VGWidget.h"
#include "VGCostumeListWidget.generated.h"

class UDataTable;
class UVGGoodsInfo;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCostumeListWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWeaponListTabParam> m_tab_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_item_category_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_costume_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_left_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_costume_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_right_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGoodsInfo* m_goods_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWeaponListItemParam> m_equip_param;
    
public:
    UVGCostumeListWidget();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

