#include "VGHeroPlayerMatchPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGHeroPlayerMatchPlayerState::AVGHeroPlayerMatchPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ready_check_status = false;
    this->m_hero_select_index = -1;
    this->m_respawn_id = -1;
}

void AVGHeroPlayerMatchPlayerState::Server_SetRespawnId_Implementation(int32 respawn_id) {
}
bool AVGHeroPlayerMatchPlayerState::Server_SetRespawnId_Validate(int32 respawn_id) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_SetHeroSetting_Implementation(FVGPlayerSetting HeroSetting) {
}
bool AVGHeroPlayerMatchPlayerState::Server_SetHeroSetting_Validate(FVGPlayerSetting HeroSetting) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_SendFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGHeroPlayerMatchPlayerState::Server_SendFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_SelectHeroIndex_Implementation(int32 ChangePlayerId, int32 HeroIndex) {
}
bool AVGHeroPlayerMatchPlayerState::Server_SelectHeroIndex_Validate(int32 ChangePlayerId, int32 HeroIndex) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_HeroReadyChanged_Implementation(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
}
bool AVGHeroPlayerMatchPlayerState::Server_HeroReadyChanged_Validate(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}
bool AVGHeroPlayerMatchPlayerState::Server_ChangeTeamFormation_Validate(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_ChangeReadyCheckStatus_Implementation(bool NewStatus, bool is_ready_applyed) {
}
bool AVGHeroPlayerMatchPlayerState::Server_ChangeReadyCheckStatus_Validate(bool NewStatus, bool is_ready_applyed) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::Server_AutoTeamFormation_Implementation(int32 TargetPlayerId) {
}
bool AVGHeroPlayerMatchPlayerState::Server_AutoTeamFormation_Validate(int32 TargetPlayerId) {
    return true;
}

void AVGHeroPlayerMatchPlayerState::OnRep_ReadyCheckStatus() {
}

void AVGHeroPlayerMatchPlayerState::OnRep_PlayerSetting() {
}

void AVGHeroPlayerMatchPlayerState::OnRep_OnlineRank() {
}

void AVGHeroPlayerMatchPlayerState::OnRep_HeroSetting() {
}

void AVGHeroPlayerMatchPlayerState::OnRep_HeroSelectIndex() {
}

void AVGHeroPlayerMatchPlayerState::OnChangeReadyCheckStatus(bool NewStatus) {
}

void AVGHeroPlayerMatchPlayerState::Client_SetTeamFormation_Implementation(const TArray<FString>& PlayerIds, const TArray<EVGCharaTeam>& TeamTypes) {
}

void AVGHeroPlayerMatchPlayerState::Client_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}

void AVGHeroPlayerMatchPlayerState::Client_SelectHeroIndex_Implementation(int32 ChangePlayerId, int32 HeroIndex) {
}

void AVGHeroPlayerMatchPlayerState::Client_HeroReadyChanged_Implementation(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
}

void AVGHeroPlayerMatchPlayerState::Client_FixupCharacterSelect_Implementation() {
}

void AVGHeroPlayerMatchPlayerState::Client_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}

void AVGHeroPlayerMatchPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGHeroPlayerMatchPlayerState, m_ready_check_status);
    DOREPLIFETIME(AVGHeroPlayerMatchPlayerState, m_hero_setting);
    DOREPLIFETIME(AVGHeroPlayerMatchPlayerState, m_hero_select_index);
    DOREPLIFETIME(AVGHeroPlayerMatchPlayerState, m_respawn_id);
}

