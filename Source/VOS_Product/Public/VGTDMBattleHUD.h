#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGBattleHUD.h"
#include "VGTDMBattleHUD.generated.h"

class UVGTDMBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGTDMBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGTDMBattleHUDWidget* m_tdm_hud_widget;
    
public:
    AVGTDMBattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerWithWarning(float Timer, float max_timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamDamage(EVGCharaTeam Type, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDamage(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeCount(EVGCharaTeam Type, int32 life);
    
};

