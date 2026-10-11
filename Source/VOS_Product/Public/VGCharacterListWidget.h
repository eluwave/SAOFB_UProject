#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGCharacterListItem.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGCharacterListWidget.generated.h"

class UImage;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCharacterListWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_dialog_class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_item_type_select_text[8];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_list_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_model_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_dialog_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCharacterListItem> m_list_items;
    
public:
    UVGCharacterListWidget();

    UFUNCTION(BlueprintCallable)
    void Open(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

