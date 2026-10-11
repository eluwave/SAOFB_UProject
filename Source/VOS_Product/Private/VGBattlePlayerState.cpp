#include "VGBattlePlayerState.h"
#include "Net/UnrealNetwork.h"

AVGBattlePlayerState::AVGBattlePlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
    this->m_ai_asset = NULL;
}

void AVGBattlePlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGBattlePlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGBattlePlayerState::Server_SetCharacter_Implementation(AVGCharacter* Chara) {
}
bool AVGBattlePlayerState::Server_SetCharacter_Validate(AVGCharacter* Chara) {
    return true;
}

void AVGBattlePlayerState::onNavigationGenerationFinished(ANavigationData* NavData) {
}

void AVGBattlePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGBattlePlayerState, m_character);
    DOREPLIFETIME(AVGBattlePlayerState, m_setting);
    DOREPLIFETIME(AVGBattlePlayerState, m_coop_setting);
    DOREPLIFETIME(AVGBattlePlayerState, m_versus_setting);
}

