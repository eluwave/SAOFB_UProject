#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGBattleHUD.h"
#include "VGVersusBattleHUD.generated.h"

class UVGVersusBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGVersusBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVersusBattleHUDWidget* m_versus_hud_widget;
    
public:
    AVGVersusBattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTimerWithWarning(float Timer, float max_timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamDamage(EVGCharaTeam Type, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDamage(float Damage);
    
};

