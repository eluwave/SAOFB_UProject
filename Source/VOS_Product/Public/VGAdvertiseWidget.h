#pragma once
#include "CoreMinimal.h"

#include "VGWidget.h"
#include "VGAdvertiseWidget.generated.h"

class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAdvertiseWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* m_border_widget;
    
public:
    UVGAdvertiseWidget();

    UFUNCTION(BlueprintCallable)
    void StartFadeOut(float Time, FLinearColor EndColor);
    
    UFUNCTION(BlueprintCallable)
    void StartFadeIn(float Time, FLinearColor StartColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartFade(bool IsFadeOut);
    
};

