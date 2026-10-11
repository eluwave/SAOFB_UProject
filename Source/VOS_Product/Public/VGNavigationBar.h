#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGWidget.h"
#include "VGNavigationBar.generated.h"

class UDataTable;
class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNavigationBar : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_navi_icon_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_navi_item_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_show_help_message;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_navi_item_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_help_message;
    
public:
    UVGNavigationBar();

    UFUNCTION(BlueprintCallable)
    void ShowHelpMessage(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetHelpMessage(FText str);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibleHelpMessage(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNaviTextChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHelpMessageChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowHelpMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHelpMessage() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
    UFUNCTION(BlueprintCallable)
    void AddItemByKey(FName Key, int32 pri, bool grayed);
    
};

