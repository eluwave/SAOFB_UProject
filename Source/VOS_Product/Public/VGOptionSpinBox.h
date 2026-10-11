#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "OnOptionSpinBoxValueChangedEventDelegate.h"
#include "VGWidget.h"
#include "VGOptionSpinBox.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGOptionSpinBox : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionSpinBoxValueChangedEvent OnValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_status_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_status_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_up_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_up_value_visibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_param_text;
    
public:
    UVGOptionSpinBox();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 value, bool send_event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetValueUp(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetValue(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRightArrowEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLeftArrowEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySubValueAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAddValueAnime();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

