#pragma once
#include "CoreMinimal.h"
#include "VGItemBoxEventFunction.h"
#include "VGWidget.h"
#include "VGItemBoxEventWidget.generated.h"

class UVGMainMenuList;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGItemBoxEventWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemBoxEventFunction> m_items;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_ui_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_top_menu_widget;
    
public:
    UVGItemBoxEventWidget();

};

