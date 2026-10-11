#include "VGRoamPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGRoamPlayerState::AVGRoamPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
    this->m_afasys = NULL;
}

void AVGRoamPlayerState::Server_SetSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGRoamPlayerState::Server_SetSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGRoamPlayerState::Server_SetCharacter_Implementation(AVGCharacter* Chara) {
}
bool AVGRoamPlayerState::Server_SetCharacter_Validate(AVGCharacter* Chara) {
    return true;
}

void AVGRoamPlayerState::Server_SetAfasysSetting_Implementation(FVGAfasysSetting setting) {
}
bool AVGRoamPlayerState::Server_SetAfasysSetting_Validate(FVGAfasysSetting setting) {
    return true;
}

void AVGRoamPlayerState::onNavigationGenerationFinished(ANavigationData* NavData) {
}

void AVGRoamPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGRoamPlayerState, m_character);
    DOREPLIFETIME(AVGRoamPlayerState, m_setting);
    DOREPLIFETIME(AVGRoamPlayerState, m_afasys);
    DOREPLIFETIME(AVGRoamPlayerState, m_afasys_setting);
}

