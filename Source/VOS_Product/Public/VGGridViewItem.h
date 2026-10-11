#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EVGGridEditReason.h"
#include "EVGGridViewAction.h"
#include "VGGridItem.h"
#include "VGWidget.h"
#include "VGGridViewItem.generated.h"

class UVGGridViewBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGGridViewItem : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGridViewAction m_action_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_capture_editing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_tag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_editing_widget;
    
public:
    UVGGridViewItem();

    UFUNCTION(BlueprintCallable)
    static void SetGridItemParam(const FVGGridItem& Item, FName Key, const FString& value, FVGGridItem& OutVal);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState State);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemValueChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSelected(bool isSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChecked(ECheckBoxState checkdState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnIsEditable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* OnGetYieldWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* OnEditModeChanged(bool editMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForbidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetSelectedVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGGridViewBase* GetOwnerView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGridItemParam(const FVGGridItem& Item, FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeEditMode(bool mode, EVGGridEditReason Reason);
    
};

