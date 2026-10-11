#include "VGPlayerMatchPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGPlayerMatchPlayerState::AVGPlayerMatchPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ready_check_status = false;
    this->m_respawn_id = -1;
}

void AVGPlayerMatchPlayerState::Server_SetRespawnId_Implementation(int32 respawn_id) {
}
bool AVGPlayerMatchPlayerState::Server_SetRespawnId_Validate(int32 respawn_id) {
    return true;
}

void AVGPlayerMatchPlayerState::Server_SendFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGPlayerMatchPlayerState::Server_SendFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGPlayerMatchPlayerState::Server_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}
bool AVGPlayerMatchPlayerState::Server_ChangeTeamFormation_Validate(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
    return true;
}

void AVGPlayerMatchPlayerState::Server_ChangeSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGPlayerMatchPlayerState::Server_ChangeSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGPlayerMatchPlayerState::Server_ChangeReadyCheckStatus_Implementation(bool NewStatus, bool is_ready_applyed) {
}
bool AVGPlayerMatchPlayerState::Server_ChangeReadyCheckStatus_Validate(bool NewStatus, bool is_ready_applyed) {
    return true;
}

void AVGPlayerMatchPlayerState::Server_AutoTeamFormation_Implementation(int32 TargetPlayerId) {
}
bool AVGPlayerMatchPlayerState::Server_AutoTeamFormation_Validate(int32 TargetPlayerId) {
    return true;
}

void AVGPlayerMatchPlayerState::OnRep_ReadyCheckStatus() {
}

void AVGPlayerMatchPlayerState::OnRep_PlayerSetting() {
}

void AVGPlayerMatchPlayerState::OnRep_OnlineRank() {
}

void AVGPlayerMatchPlayerState::OnChangeReadyCheckStatus(bool NewStatus) {
}

void AVGPlayerMatchPlayerState::Client_SetTeamFormation_Implementation(const TArray<FString>& PlayerIds, const TArray<EVGCharaTeam>& TeamTypes) {
}

void AVGPlayerMatchPlayerState::Client_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}

void AVGPlayerMatchPlayerState::Client_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}

void AVGPlayerMatchPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGPlayerMatchPlayerState, m_ready_check_status);
    DOREPLIFETIME(AVGPlayerMatchPlayerState, m_respawn_id);
}

