#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/ContentWidget.h"
#include "EVGGridEditReason.h"
#include "Templates/SubclassOf.h"
#include "VGGridItem.h"
#include "VGGridView_CanceledDelegate.h"
#include "VGGridView_DecidedDelegate.h"
#include "VGGridView_ItemParameterChangedDelegate.h"
#include "VGGridView_SelectedIndexChangedDelegate.h"
#include "VGNavigationOverride.h"
#include "VGGridViewBase.generated.h"

class UPanelSlot;
class UPanelWidget;
class UVGGridItemImpl;
class UVGGridViewItem;
class UVGWidget;
class UWidget;

UCLASS(Abstract, Blueprintable)
class VOS_PRODUCT_API UVGGridViewBase : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGridViewItem> m_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UVGGridViewItem>> m_optional_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_cursor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_focusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_smooth_scroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGNavigationOverride m_navigation_override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData m_cursor_layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_input_mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_cached_item;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGridView_SelectedIndexChanged OnSelectedIndexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGridView_Decided OnDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGridView_Canceled OnCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGridView_ItemParameterChanged OnParameterChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGGridItemImpl*> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGridItemImpl* m_selected_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* m_into_scroll_widget;
    
public:
    UVGGridViewBase();

    UFUNCTION(BlueprintCallable)
    void SetItemValue(int32 index, int32 sub_index, const FString& value);
    
    UFUNCTION(BlueprintCallable)
    void SetItemTag(int32 index, int32 sub_index, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void SetItems(const TArray<FVGGridItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    void SetItemParameter(int32 index, int32 sub_index, FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable)
    void SetItemCheckedState(int32 index, int32 sub_index, ECheckBoxState State);
    
    UFUNCTION(BlueprintCallable)
    void SetItem(const FVGGridItem& Item, int32 index, int32 sub_index, bool appendParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentItemParameter(FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable)
    void SetAllItemParameter(FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable)
    void SelectIndex(int32 index, int32 sub_index, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void ScrollItemIntoView(UVGGridViewItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(int32 index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItemParameter(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void PutItems(const TArray<FVGGridItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    bool MoveIndex(int32 value, int32 subValue, bool loop);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ItemParameterChangedHandler(FName Key, const FString& value, UVGGridViewItem* payload);
    
    UFUNCTION(BlueprintCallable)
    void ItemFocusedHandler(UVGGridViewItem* payload);
    
    UFUNCTION(BlueprintCallable)
    void ItemEditModeChangedHandler(bool mode, EVGGridEditReason Reason, UVGGridViewItem* payload);
    
    UFUNCTION(BlueprintCallable)
    void ItemDecideFailedHandler(UVGGridViewItem* payload);
    
    UFUNCTION(BlueprintCallable)
    void ItemDecidedHandler(UVGGridViewItem* payload);
    
    UFUNCTION(BlueprintCallable)
    void ItemCheckStateChangedHandler(ECheckBoxState State, UVGGridViewItem* payload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedColumn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemValue(int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemTag(int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemParameter(int32 index, int32 sub_index, FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItem(FVGGridItem& Item, int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGGridViewItem* GetGridViewItem(int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGWidget* GetCursor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsItemParameter(int32 index, int32 sub_index, FName Key) const;
    
    UFUNCTION(BlueprintCallable)
    bool ContainsAllItemParameter(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void AddItems(const TArray<FVGGridItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(const FVGGridItem& Item);
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChildWidget(UWidget* Widget);
    
};

