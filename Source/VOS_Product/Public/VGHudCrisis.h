#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudCrisis.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudCrisis : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hp_warning_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_display;
    
public:
    UVGHudCrisis();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndDisplay();
    
};

