#include "VGOnlinePlayerState.h"
#include "Net/UnrealNetwork.h"

AVGOnlinePlayerState::AVGOnlinePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_rank = 0;
    this->m_region = 0;
    this->m_voice_team_id = -1;
    this->m_voice_enable = false;
    this->m_mic_enable = false;
    this->m_is_voice_restrict = false;
}

void AVGOnlinePlayerState::Server_SetRegion_Implementation(int32 Region) {
}
bool AVGOnlinePlayerState::Server_SetRegion_Validate(int32 Region) {
    return true;
}

void AVGOnlinePlayerState::Server_SetRank_Implementation(int32 rank) {
}
bool AVGOnlinePlayerState::Server_SetRank_Validate(int32 rank) {
    return true;
}

void AVGOnlinePlayerState::Server_SetChatTeamId_Implementation(int32 ID) {
}
bool AVGOnlinePlayerState::Server_SetChatTeamId_Validate(int32 ID) {
    return true;
}

void AVGOnlinePlayerState::Server_SendOnlineFixedPhrase_Implementation(const FString& Name, FName ID, EVGCharaTeam Team, APlayerController* PC, const FString& unique_id) {
}
bool AVGOnlinePlayerState::Server_SendOnlineFixedPhrase_Validate(const FString& Name, FName ID, EVGCharaTeam Team, APlayerController* PC, const FString& unique_id) {
    return true;
}

void AVGOnlinePlayerState::Server_ChangeVoiceState_Implementation(bool is_enable) {
}
bool AVGOnlinePlayerState::Server_ChangeVoiceState_Validate(bool is_enable) {
    return true;
}

void AVGOnlinePlayerState::Server_ChangeMicEnable_Implementation(bool is_enable) {
}
bool AVGOnlinePlayerState::Server_ChangeMicEnable_Validate(bool is_enable) {
    return true;
}

void AVGOnlinePlayerState::Server_ChangeGameRestrictVoiceChat_Implementation(bool is_restrict) {
}
bool AVGOnlinePlayerState::Server_ChangeGameRestrictVoiceChat_Validate(bool is_restrict) {
    return true;
}

void AVGOnlinePlayerState::OnRep_VoiceEnable() {
}

void AVGOnlinePlayerState::OnRep_OnlineRank() {
}

void AVGOnlinePlayerState::OnRep_MicEnable() {
}

void AVGOnlinePlayerState::Multicast_SendOnlineLogin_Implementation(const FString& Name, bool login) {
}

void AVGOnlinePlayerState::Multicast_SendOnlineFixedPhrase_Implementation(const FString& Name, FName ID, EVGCharaTeam Team, APlayerController* PC, const FString& unique_id) {
}

void AVGOnlinePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGOnlinePlayerState, m_rank);
    DOREPLIFETIME(AVGOnlinePlayerState, m_region);
    DOREPLIFETIME(AVGOnlinePlayerState, m_voice_team_id);
    DOREPLIFETIME(AVGOnlinePlayerState, m_voice_enable);
    DOREPLIFETIME(AVGOnlinePlayerState, m_mic_enable);
    DOREPLIFETIME(AVGOnlinePlayerState, m_is_voice_restrict);
}

