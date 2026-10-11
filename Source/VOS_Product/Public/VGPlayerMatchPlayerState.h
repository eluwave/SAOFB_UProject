#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGPlayerSetting.h"
#include "VGVisualLobbyPlayerListItemInfo.h"
#include "VGVisualLobbyPlayerState.h"
#include "VGPlayerMatchPlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPlayerMatchPlayerState : public AVGVisualLobbyPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyCheckStatus, meta=(AllowPrivateAccess=true))
    bool m_ready_check_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_respawn_id;
    
public:
    AVGPlayerMatchPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRespawnId(int32 respawn_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeTeamFormation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeSetting(FVGPlayerSetting setting);
    
public:
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
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeReadyCheckStatus(bool NewStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTeamFormation(const TArray<FString>& PlayerIds, const TArray<EVGCharaTeam>& TeamTypes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFixedPhrase(const FString& Name, const FName& ID, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChangeTeamFormation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo);
    
};

