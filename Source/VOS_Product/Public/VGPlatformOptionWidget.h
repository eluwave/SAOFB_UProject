#pragma once
#include "CoreMinimal.h"

#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "VGPlatformOptionPage.h"
#include "VGSteamOptionItem.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGPlatformOptionWidget.generated.h"

class UDataTable;
class UVGDialog;
class UVGGridView;
class UVGGridViewItem;
class UVGOptionSteamDialog;
class UVGSaveGameDataAsset;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlatformOptionWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_key_custom_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_menu_to_key_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSaveGameDataAsset* m_default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_default_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_default_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGOptionSteamDialog> m_key_assign_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_navigation_bar_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_select_key_set_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_option_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_tab_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_sub_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlatformOptionPage> m_option_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSteamOptionItem> m_selected_page_items;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_resolution_dialog;
    
public:
    UVGPlatformOptionWidget();

    UFUNCTION(BlueprintCallable)
    void SetResolutionArray(TArray<FIntPoint> Resolutions);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeItemIndex(UVGGridViewItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindSelectKeySet(UVGGridViewItem* Item);
    
};

