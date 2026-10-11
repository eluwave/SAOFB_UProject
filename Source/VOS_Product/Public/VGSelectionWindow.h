#pragma once
#include "CoreMinimal.h"
#include "VGSelectionCanceledDelegateDelegate.h"
#include "VGSelectionDecidedDelegateDelegate.h"
#include "VGSelectionSelectedIndexChangedDelegateDelegate.h"
#include "VGWidget.h"
#include "VGSelectionWindow.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSelectionWindow : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSelectionDecidedDelegate OnSelectionDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSelectionCanceledDelegate OnSelectionCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSelectionSelectedIndexChangedDelegate OnSelectionIndexChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_selection;
    
public:
    UVGSelectionWindow();

    UFUNCTION(BlueprintCallable)
    void SetSelectionItems(const TArray<FText> Items, int32 DefaultIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetItemNewIconVisible(int32 index, bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void SetCurSel(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool isInteractive);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

