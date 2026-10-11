#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGTutorialHelpBoardWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGTutorialHelpBoardWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_messages;
    
public:
    UVGTutorialHelpBoardWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitAnim(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveHelpTexts(const TArray<FString>& Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllHelpTexts();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AddHelpTexts(const TArray<FString>& Item);
    
};

