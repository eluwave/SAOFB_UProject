#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHudInvasionGauge.generated.h"

class UCanvasPanel;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudInvasionGauge : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_invasion_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_invasion_gauge;
    
public:
    UVGHudInvasionGauge();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NormalState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmergencyState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CrisisState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

