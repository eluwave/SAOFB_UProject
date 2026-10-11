#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGNavigationOverride.h"
#include "VGWidget.h"
#include "VGTabbedListView.generated.h"

class UVGGridViewBase;
class UVGGridViewItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTabbedListView : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGridViewItem> m_item_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delay_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_limit_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wrap_tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_tableave_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGNavigationOverride m_navigation_override;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridViewBase* m_gv_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridViewBase* m_gv_tab;
    
public:
    UVGTabbedListView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveTabIndex(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListHeaderChanged(int32 value);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveTab();
    
    UFUNCTION(BlueprintCallable)
    void LeaveItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayedActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusyItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListHeaderCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetListHeader(int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentTabText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentEmptyText() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterTab();
    
    UFUNCTION(BlueprintCallable)
    void EnterItems();
    
};

