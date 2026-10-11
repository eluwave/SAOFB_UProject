#include "VGCharacterPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGCharacterPlayerState::AVGCharacterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
}

void AVGCharacterPlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGCharacterPlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGCharacterPlayerState::Server_SetCharacter_Implementation(AVGCharacter* Chara) {
}
bool AVGCharacterPlayerState::Server_SetCharacter_Validate(AVGCharacter* Chara) {
    return true;
}

void AVGCharacterPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGCharacterPlayerState, m_character);
    DOREPLIFETIME(AVGCharacterPlayerState, m_setting);
}

