#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGShopActionWidget.generated.h"

class UImage;
class UVGMainMenuList;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGShopActionWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_ui_action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_top_menu_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_capture_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_item_text;
    
public:
    UVGShopActionWidget();

};

