#include "VGVisualLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGVisualLobbyPlayerState::AVGVisualLobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
}

void AVGVisualLobbyPlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGVisualLobbyPlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGVisualLobbyPlayerState::Server_SetCharacter_Implementation(AVGCharacter* Chara) {
}
bool AVGVisualLobbyPlayerState::Server_SetCharacter_Validate(AVGCharacter* Chara) {
    return true;
}

void AVGVisualLobbyPlayerState::Server_ChangeSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGVisualLobbyPlayerState::Server_ChangeSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGVisualLobbyPlayerState::OnRep_PlayerSetting() {
}

void AVGVisualLobbyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGVisualLobbyPlayerState, m_character);
}

