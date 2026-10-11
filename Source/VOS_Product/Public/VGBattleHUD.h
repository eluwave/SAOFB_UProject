#pragma once
#include "CoreMinimal.h"
#include "VGRoamHUD.h"
#include "VGBattleHUD.generated.h"

class UVGBattleHUDWidget;
class UVGPartyCommandWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGBattleHUD : public AVGRoamHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGBattleHUDWidget* m_battle_hud_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPartyCommandWidget* m_party_command_widget;
    
    AVGBattleHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityHUD(bool f_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNameEvent(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGBattleHUDWidget* GetBattleHUDWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void AddLog(const FText& LogLine);
    
};

