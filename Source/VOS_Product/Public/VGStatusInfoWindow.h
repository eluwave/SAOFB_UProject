#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGWidget.h"
#include "VGStatusInfoWindow.generated.h"

class UVGGridView;
class UVGScrollBox;
class UVGSlider;
class UVGStatusInfoListItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusInfoWindow : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGStatusInfoListItem> m_list_item_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_info_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGScrollBox* m_scroll_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSlider* m_slider;
    
public:
    UVGStatusInfoWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetUpArrowEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDownArrowEnable(bool is_enable);
    
};

