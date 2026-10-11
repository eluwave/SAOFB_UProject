#pragma once
#include "CoreMinimal.h"
#include "VGBattleHUD.h"
#include "VGMissionBattleHUD.generated.h"

class UVGCoopBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGMissionBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCoopBattleHUDWidget* m_rule_hud_widget;
    
public:
    AVGMissionBattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerWithWarning(float Timer, float max_timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetRespawnMax(int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetRespawnCount(int32 Count);
    
};

