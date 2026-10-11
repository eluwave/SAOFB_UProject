#pragma once
#include "CoreMinimal.h"
#include "VGBattleSettingCoop.h"
#include "VGBattleSettingVersus.h"
#include "VGOnlinePlayerState.h"
#include "VGPlayerSetting.h"
#include "VGBattlePlayerState.generated.h"

class ANavigationData;
class AVGCharacter;
class UVGAfasysAICustomizeAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBattlePlayerState : public AVGOnlinePlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGBattleSettingCoop m_coop_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVGBattleSettingVersus m_versus_setting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysAICustomizeAsset* m_ai_asset;
    
public:
    AVGBattlePlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable)
    void onNavigationGenerationFinished(ANavigationData* NavData);
    
};

