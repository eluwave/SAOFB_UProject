#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGPlayerSetting.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyPlayerState.h"
#include "VGHeroPlayerMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHeroPlayerMatchPlayerState : public AVGVisualLobbyPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyCheckStatus, meta=(AllowPrivateAccess=true))
    bool m_ready_check_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroSetting, meta=(AllowPrivateAccess=true))
    FVGPlayerSetting m_hero_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroSelectIndex, meta=(AllowPrivateAccess=true))
    int32 m_hero_select_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_respawn_id;
    
public:
    AVGHeroPlayerMatchPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRespawnId(int32 respawn_id);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHeroSetting(FVGPlayerSetting HeroSetting);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SelectHeroIndex(int32 ChangePlayerId, int32 HeroIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_HeroReadyChanged(int32 ChangePlayerId, int32 SelectIndex, bool IsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeTeamFormation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeReadyCheckStatus(bool NewStatus, bool is_ready_applyed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AutoTeamFormation(int32 TargetPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyCheckStatus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroSetting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroSelectIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeReadyCheckStatus(bool NewStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTeamFormation(const TArray<FString>& PlayerIds, const TArray<EVGCharaTeam>& TeamTypes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SelectHeroIndex(int32 ChangePlayerId, int32 HeroIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HeroReadyChanged(int32 ChangePlayerId, int32 SelectIndex, bool IsReady);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FixupCharacterSelect();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChangeTeamFormation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo);
    
};

