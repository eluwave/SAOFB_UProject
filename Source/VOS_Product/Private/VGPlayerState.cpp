#include "VGPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGPlayerState::AVGPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowTickBeforeBeginPlay = false;
    this->m_is_match_ready = false;
    this->m_is_game_ready = false;
    this->m_is_fade_out_complete = false;
}

void AVGPlayerState::Server_SetMatchReady_Implementation() {
}
bool AVGPlayerState::Server_SetMatchReady_Validate() {
    return true;
}

void AVGPlayerState::Server_SetGameReady_Implementation() {
}
bool AVGPlayerState::Server_SetGameReady_Validate() {
    return true;
}

void AVGPlayerState::Server_SetFadeOutComplete_Implementation() {
}
bool AVGPlayerState::Server_SetFadeOutComplete_Validate() {
    return true;
}

void AVGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGPlayerState, m_player_index);
    DOREPLIFETIME(AVGPlayerState, m_is_match_ready);
    DOREPLIFETIME(AVGPlayerState, m_is_game_ready);
    DOREPLIFETIME(AVGPlayerState, m_is_fade_out_complete);
}

