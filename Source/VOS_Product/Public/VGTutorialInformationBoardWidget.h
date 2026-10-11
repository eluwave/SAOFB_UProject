#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGTutorialInformationBoardWidget.generated.h"

class UVGRichTextBlock;
class UVGTutorialPageDetailWidget;
class UVGTutorialScreenData;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTutorialInformationBoardWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_widget_switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTutorialPageDetailWidget* m_current_active_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_page_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_page_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_title_text;
    
public:
    UVGTutorialInformationBoardWidget();

    UFUNCTION(BlueprintCallable)
    void SetPage(int32 NewPageIndex, bool FirstTime);
    
    UFUNCTION(BlueprintCallable)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void PrevPage();
    
    UFUNCTION(BlueprintCallable)
    void Open(UVGTutorialScreenData* ScreenData, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

