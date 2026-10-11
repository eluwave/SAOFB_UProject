#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGPlayerState.h"
#include "VGOnlinePlayerState.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGOnlinePlayerState : public AVGPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnlineRank, meta=(AllowPrivateAccess=true))
    int32 m_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_voice_team_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VoiceEnable, meta=(AllowPrivateAccess=true))
    bool m_voice_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MicEnable, meta=(AllowPrivateAccess=true))
    bool m_mic_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_is_voice_restrict;
    
public:
    AVGOnlinePlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRegion(int32 Region);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRank(int32 rank);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetChatTeamId(int32 ID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SendOnlineFixedPhrase(const FString& Name, FName ID, EVGCharaTeam Team, APlayerController* PC, const FString& unique_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeVoiceState(bool is_enable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeMicEnable(bool is_enable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeGameRestrictVoiceChat(bool is_restrict);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VoiceEnable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnlineRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MicEnable();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SendOnlineLogin(const FString& Name, bool login);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SendOnlineFixedPhrase(const FString& Name, FName ID, EVGCharaTeam Team, APlayerController* PC, const FString& unique_id);
    
};

