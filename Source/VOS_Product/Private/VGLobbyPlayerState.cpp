#include "VGLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGLobbyPlayerState::AVGLobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_is_last_ready = false;
}

void AVGLobbyPlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGLobbyPlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGLobbyPlayerState::Server_SetReadyApplyed_Implementation(bool is_applyed) {
}
bool AVGLobbyPlayerState::Server_SetReadyApplyed_Validate(bool is_applyed) {
    return true;
}

void AVGLobbyPlayerState::Server_SetPlayerCard_Implementation(FVGPlayerCardData Card) {
}
bool AVGLobbyPlayerState::Server_SetPlayerCard_Validate(FVGPlayerCardData Card) {
    return true;
}

void AVGLobbyPlayerState::Server_SetLastReady_Implementation(bool is_enable) {
}
bool AVGLobbyPlayerState::Server_SetLastReady_Validate(bool is_enable) {
    return true;
}

void AVGLobbyPlayerState::Server_SendFreeInputText_Implementation(const FString& Name, const FString& String, const FString& unique_id) {
}
bool AVGLobbyPlayerState::Server_SendFreeInputText_Validate(const FString& Name, const FString& String, const FString& unique_id) {
    return true;
}

void AVGLobbyPlayerState::Server_ChangeSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGLobbyPlayerState::Server_ChangeSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGLobbyPlayerState::OnRep_PlayerSetting() {
}

void AVGLobbyPlayerState::OnRep_PlayerCard() {
}

void AVGLobbyPlayerState::Client_SetFreeInputText_Implementation(const FString& Name, const FString& String, const FString& unique_id) {
}

void AVGLobbyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGLobbyPlayerState, m_setting);
    DOREPLIFETIME(AVGLobbyPlayerState, m_is_last_ready);
    DOREPLIFETIME(AVGLobbyPlayerState, m_player_card_data);
}

