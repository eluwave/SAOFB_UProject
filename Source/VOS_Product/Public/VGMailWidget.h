#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGMailWidget.generated.h"

class UVGScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMailWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_change_slot_dialog_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_release_equip_dialog_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_mail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGScrollBox* m_scroll_box;
    
public:
    UVGMailWidget();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

