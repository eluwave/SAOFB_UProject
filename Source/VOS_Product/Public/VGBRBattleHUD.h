#pragma once
#include "CoreMinimal.h"
#include "VGBattleHUD.h"
#include "VGBRBattleHUD.generated.h"

class UVGBRBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGBRBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGBRBattleHUDWidget* m_rule_hud_widget;
    
public:
    AVGBRBattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubScore(int32 index, int32 score, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerWithWarning(float Timer, float max_timer);
    
    UFUNCTION(BlueprintCallable)
    void SetTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(int32 index, int32 score);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayer(int32 index, bool is_player);
    
    UFUNCTION(BlueprintCallable)
    void SetName(int32 index, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetKillGoal(int32 Goal);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterIcon(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void ScoreCollapse(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void MoveScore(int32 index, int32 row, int32 column);
    
    UFUNCTION(BlueprintCallable)
    void AddScore(int32 index, int32 score, int32 Count);
    
};

