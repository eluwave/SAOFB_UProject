#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGTutorialPageDetailWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTutorialPageDetailWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_icon_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_title_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_total_page;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_current_page;
    
public:
    UVGTutorialPageDetailWidget();

    UFUNCTION(BlueprintCallable)
    void SetData(UTexture2D* Icon, const FText& Title, const FText& Description, int32 TotalPage, int32 CurrentPage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PageChange(bool Left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyCloseFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

