#pragma once
#include "CoreMinimal.h"
#include "EVGDialogButton.h"
#include "EVGDialogButtonStyle.h"
#include "Templates/SubclassOf.h"
#include "VGDialogResultDelegate.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGDialog.generated.h"

class UDataTable;
class UObject;
class UVGDialog;
class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGDialog : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol ButtonText[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_default_caption_text;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGDialogResult DialogResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UISoundSheet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_buttons;
    
public:
    UVGDialog();

    UFUNCTION(BlueprintCallable)
    void SetModal(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurSel(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetCancellable(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetBody(FText Body);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoClose(float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGDialog* OpenLoadingDialog(UObject* WorldContextObject, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGDialog* OpenDialogEx(UObject* WorldContextObject, TSubclassOf<UVGDialog> cls, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGDialog* OpenDialog(UObject* WorldContextObject, FText Body, FText Caption, EVGDialogButtonStyle::Type Style, int32 DefaultIndex, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void Open(FText Body, FText Caption, const TArray<TEnumAsByte<EVGDialogButton::Type>>& buttons, int32 DefaultIndex, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurSel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCaption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBody() const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

