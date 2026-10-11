#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Templates/SubclassOf.h"
#include "VGAvatarCustomizeItem.h"
#include "VGAvatarCustomizePage.h"
#include "VGWidget.h"
#include "VGCustomizeWidget.generated.h"

class UVGCustomizeHeader;
class UVGGridView;
class UVGGridViewItem;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCustomizeWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGridViewItem> m_grid_item_class[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBoxStyle m_scroll_box_style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle m_scroll_bar_style;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCustomizeHeader* m_page_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGGridView*> m_gv_items;
    
public:
    UVGCustomizeWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePage(int32 index, const FVGAvatarCustomizePage& page);
    
    UFUNCTION(BlueprintCallable)
    void SetItem(int32 page, int32 index, const FVGAvatarCustomizeItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentPageCaption() const;
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
    UFUNCTION(BlueprintCallable)
    void ClearPage(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void AddPage(const FVGAvatarCustomizePage& page);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(int32 page, const FVGAvatarCustomizeItem& Item);
    
};

