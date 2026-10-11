#pragma once
#include "CoreMinimal.h"

#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EVGWidgetSound.h"
#include "VGTextSymbol.h"
#include "VGWidgetAnimationGroup.h"
#include "VGWidgetEventDelegate.h"
#include "VGWidgetSoundRecord.h"
#include "VGWidget.generated.h"

class UObject;
class UTexture2D;
class UVGWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWidgetEvent OnShowWidgetEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGWidgetEvent OnHideWidgetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_input_mask;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> m_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> m_params_object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGWidgetAnimationGroup> m_anim_group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_initial_animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enable_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EVGWidgetSound::Type>, FVGWidgetSoundRecord> m_se_overrides;
    
public:
    UVGWidget();

    UFUNCTION(BlueprintCallable)
    bool Transition(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor StringToLinearColor(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void StopAnim(FName group);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnim();
    
    UFUNCTION(BlueprintCallable)
    void ShowWidget(bool withAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetStaging(bool value);
    
    UFUNCTION(BlueprintCallable)
    void SetResponse(const FString& res, int32 value);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideSE(EVGWidgetSound::Type Type, const FVGWidgetSoundRecord& record);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameter(FName Key, int32 value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName Key, float value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameter(FName Key, bool value);
    
    UFUNCTION(BlueprintCallable)
    void RequestWaitParameter(UVGWidget* Widget, FName Key, int32 phase);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransition(UVGWidget* Widget, FName State, int32 phase);
    
    UFUNCTION(BlueprintCallable)
    void RequestAnimation(FName group, UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, int32 phase);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParameter(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParameters();
    
    UFUNCTION(BlueprintCallable)
    void PlaySE(EVGWidgetSound::Type Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayNewAnim(FName group, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(FName group, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, const FString& tag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetAnimationFinished(FName group, const FString& tag, bool Aborted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowWidget(bool withAnimation, bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnRequestSound(EVGWidgetSound::Type Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemParameterChanged(FName Key, const FString& value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* OnInitialAnimation(bool& isReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideWidget(bool withAnimation, bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndTransition(FName State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginTransition(FName State);
    
    UFUNCTION(BlueprintCallable)
    void MonitorInputDevice();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayAnim() const;
    
    UFUNCTION(BlueprintCallable)
    void HideWidget(bool withAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTextureParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVGTextSymbol GetTextSymbolParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocTextParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentAnimTag(FName group) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColorParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolParameter(FName Key) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void FinishHideWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush FindUIKeyImage(FName ID, bool isUI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistAnimRequest(FName group) const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemParameters();
    
    UFUNCTION(BlueprintCallable)
    void EnableSE(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableInteract(bool isEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsParameter(FName Key) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAnimRequest(FName group);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
};

