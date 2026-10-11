#pragma once
#include "CoreMinimal.h"
#include "VGAfasysSetting.h"
#include "VGLobbyPlayerState.h"
#include "VGPlayerSetting.h"
#include "VGCoopVisualLobbyPlayerState.generated.h"

class AVGCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCoopVisualLobbyPlayerState : public AVGLobbyPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AVGCharacter* m_afasys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AfasysSetting, meta=(AllowPrivateAccess=true))
    FVGAfasysSetting m_afasys_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabledBattleAfasys, meta=(AllowPrivateAccess=true))
    bool m_is_join_battle_afasys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyCheckStatus, meta=(AllowPrivateAccess=true))
    bool m_ready_check_status;
    
public:
    AVGCoopVisualLobbyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetEnabledBattleAfasys(bool isEnable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCharacter(AVGCharacter* Chara);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetAfasysSetting(FVGAfasysSetting setting);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeSetting(FVGPlayerSetting setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeReadyCheckStatus(bool NewStatus, bool is_ready_applyed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeAfasysSetting(FVGAfasysSetting setting);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendFixedPhrase(FName ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyCheckStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEnabledBattleAfasys();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AfasysSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeReadyCheckStatus(bool NewStatus);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
};

