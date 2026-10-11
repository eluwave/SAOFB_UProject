#include "VGHeroRankMatchPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGHeroRankMatchPlayerState::AVGHeroRankMatchPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ready_check_status = false;
}

void AVGHeroRankMatchPlayerState::Server_SetHeroSetting_Implementation(FVGPlayerSetting HeroSetting) {
}
bool AVGHeroRankMatchPlayerState::Server_SetHeroSetting_Validate(FVGPlayerSetting HeroSetting) {
    return true;
}

void AVGHeroRankMatchPlayerState::Server_SendFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGHeroRankMatchPlayerState::Server_SendFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGHeroRankMatchPlayerState::Server_SelectHeroIndex_Implementation(int32 ChangePlayerId, int32 HeroIndex) {
}
bool AVGHeroRankMatchPlayerState::Server_SelectHeroIndex_Validate(int32 ChangePlayerId, int32 HeroIndex) {
    return true;
}

void AVGHeroRankMatchPlayerState::Server_HeroReadyChanged_Implementation(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
}
bool AVGHeroRankMatchPlayerState::Server_HeroReadyChanged_Validate(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
    return true;
}

void AVGHeroRankMatchPlayerState::Server_ChangeReadyCheckStatus_Implementation(bool NewStatus, bool is_ready_applyed) {
}
bool AVGHeroRankMatchPlayerState::Server_ChangeReadyCheckStatus_Validate(bool NewStatus, bool is_ready_applyed) {
    return true;
}

void AVGHeroRankMatchPlayerState::OnRep_ReadyCheckStatus() {
}

void AVGHeroRankMatchPlayerState::OnRep_OnlineRank() {
}

void AVGHeroRankMatchPlayerState::OnRep_HeroSetting() {
}

void AVGHeroRankMatchPlayerState::OnChangeReadyCheckStatus(bool NewStatus) {
}

void AVGHeroRankMatchPlayerState::Client_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}

void AVGHeroRankMatchPlayerState::Client_SelectHeroIndex_Implementation(int32 ChangePlayerId, int32 HeroIndex) {
}

void AVGHeroRankMatchPlayerState::Client_HeroReadyChanged_Implementation(int32 ChangePlayerId, int32 SelectIndex, bool IsReady) {
}

void AVGHeroRankMatchPlayerState::Client_FixupCharacterSelect_Implementation() {
}

void AVGHeroRankMatchPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGHeroRankMatchPlayerState, m_ready_check_status);
    DOREPLIFETIME(AVGHeroRankMatchPlayerState, m_hero_setting);
}

