#pragma once
#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "VGFullscreenFade.generated.h"

class UBorder;
class UVGLoadingTips;
class UVGVisualLobbyPlayerListForLoadingWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFullscreenFade : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* m_border_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGLoadingTips* m_loading_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVisualLobbyPlayerListForLoadingWidget* m_party_widget;
    
public:
    UVGFullscreenFade();

    UFUNCTION(BlueprintCallable)
    void StopLoading();
    
    UFUNCTION(BlueprintCallable)
    void StartLoading();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOut(float Time, FLinearColor EndColor);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn(float Time, FLinearColor EndColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFade(bool IsFadeOut);
    
};

