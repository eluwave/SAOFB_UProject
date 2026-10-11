#pragma once
#include "CoreMinimal.h"
#include "VGBattleHUD.h"
#include "VGFFABattleHUD.generated.h"

class UVGFFABattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGFFABattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGFFABattleHUDWidget* m_rule_hud_widget;
    
public:
    AVGFFABattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerWithWarning(float Timer, float max_timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Timer);
    
};

