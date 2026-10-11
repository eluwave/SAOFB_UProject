#pragma once
#include "CoreMinimal.h"
#include "VGGridItem.h"
#include "VGWidget.h"
#include "VGMainMenuList.generated.h"

class UVGGridView;
class UVGGridViewItem;
class UVGMainMenuListItemBottom;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMainMenuList : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_leave_in_order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_leave_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_main_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuListItemBottom* m_list_bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGridItem> m_grid_item;
    
public:
    UVGMainMenuList();

    UFUNCTION(BlueprintCallable)
    void SetItem(const FVGGridItem& Item, int32 index, int32 sub_index);
    
    UFUNCTION(BlueprintCallable)
    void SelectIndex(int32 index, int32 sub_index, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void OpenWithParam(const TArray<FText>& text_list, int32 select_index, TArray<int32>& param00, TArray<int32>& param01);
    
    UFUNCTION(BlueprintCallable)
    void OpenWithGridItem(const TArray<FVGGridItem>& grid_item, int32 select_index);
    
    UFUNCTION(BlueprintCallable)
    void Open(const TArray<FText>& text_list, int32 select_index);
    
    UFUNCTION(BlueprintCallable)
    bool IsClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItem(FVGGridItem& Item, int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGGridViewItem* GetGridViewItem(int32 index, int32 sub_index) const;
    
    UFUNCTION(BlueprintCallable)
    void Decide(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

