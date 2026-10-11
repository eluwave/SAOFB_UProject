#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGDefenceBattleHUDWidget.generated.h"

class UVGHudInvasionGauge;
class UVGHudSummon;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGDefenceBattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudSummon* m_HudSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudInvasionGauge* m_HudInvasionGauge;
    
public:
    UVGDefenceBattleHUDWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OpenSummon();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenInvasionGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseSummon();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseInvasionGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

