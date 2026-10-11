#include "VGCoopVisualLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGCoopVisualLobbyPlayerState::AVGCoopVisualLobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
    this->m_afasys = NULL;
    this->m_is_join_battle_afasys = false;
    this->m_ready_check_status = false;
}

void AVGCoopVisualLobbyPlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGCoopVisualLobbyPlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_SetEnabledBattleAfasys_Implementation(bool isEnable) {
}
bool AVGCoopVisualLobbyPlayerState::Server_SetEnabledBattleAfasys_Validate(bool isEnable) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_SetCharacter_Implementation(AVGCharacter* Chara) {
}
bool AVGCoopVisualLobbyPlayerState::Server_SetCharacter_Validate(AVGCharacter* Chara) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_SetAfasysSetting_Implementation(FVGAfasysSetting setting) {
}
bool AVGCoopVisualLobbyPlayerState::Server_SetAfasysSetting_Validate(FVGAfasysSetting setting) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_SendFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGCoopVisualLobbyPlayerState::Server_SendFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_ChangeSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGCoopVisualLobbyPlayerState::Server_ChangeSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_ChangeReadyCheckStatus_Implementation(bool NewStatus, bool is_ready_applyed) {
}
bool AVGCoopVisualLobbyPlayerState::Server_ChangeReadyCheckStatus_Validate(bool NewStatus, bool is_ready_applyed) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::Server_ChangeAfasysSetting_Implementation(FVGAfasysSetting setting) {
}
bool AVGCoopVisualLobbyPlayerState::Server_ChangeAfasysSetting_Validate(FVGAfasysSetting setting) {
    return true;
}

void AVGCoopVisualLobbyPlayerState::SendFixedPhrase(FName ID) {
}

void AVGCoopVisualLobbyPlayerState::OnRep_ReadyCheckStatus() {
}

void AVGCoopVisualLobbyPlayerState::OnRep_PlayerSetting() {
}

void AVGCoopVisualLobbyPlayerState::OnRep_IsEnabledBattleAfasys() {
}

void AVGCoopVisualLobbyPlayerState::OnRep_AfasysSetting() {
}

void AVGCoopVisualLobbyPlayerState::OnChangeReadyCheckStatus(bool NewStatus) {
}

void AVGCoopVisualLobbyPlayerState::Client_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}

void AVGCoopVisualLobbyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGCoopVisualLobbyPlayerState, m_character);
    DOREPLIFETIME(AVGCoopVisualLobbyPlayerState, m_afasys);
    DOREPLIFETIME(AVGCoopVisualLobbyPlayerState, m_afasys_setting);
    DOREPLIFETIME(AVGCoopVisualLobbyPlayerState, m_is_join_battle_afasys);
    DOREPLIFETIME(AVGCoopVisualLobbyPlayerState, m_ready_check_status);
}

