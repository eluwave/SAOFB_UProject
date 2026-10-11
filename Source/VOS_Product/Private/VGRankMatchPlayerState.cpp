#include "VGRankMatchPlayerState.h"
#include "Net/UnrealNetwork.h"

AVGRankMatchPlayerState::AVGRankMatchPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ready_check_status = false;
}

void AVGRankMatchPlayerState::Server_SendFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGRankMatchPlayerState::Server_SendFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGRankMatchPlayerState::Server_ChangeSetting_Implementation(FVGPlayerSetting setting) {
}
bool AVGRankMatchPlayerState::Server_ChangeSetting_Validate(FVGPlayerSetting setting) {
    return true;
}

void AVGRankMatchPlayerState::Server_ChangeReadyCheckStatus_Implementation(bool NewStatus, bool is_ready_applyed) {
}
bool AVGRankMatchPlayerState::Server_ChangeReadyCheckStatus_Validate(bool NewStatus, bool is_ready_applyed) {
    return true;
}

void AVGRankMatchPlayerState::OnRep_ReadyCheckStatus() {
}

void AVGRankMatchPlayerState::OnRep_PlayerSetting() {
}

void AVGRankMatchPlayerState::OnRep_OnlineRank() {
}

void AVGRankMatchPlayerState::OnChangeReadyCheckStatus(bool NewStatus) {
}

void AVGRankMatchPlayerState::Client_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}

void AVGRankMatchPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGRankMatchPlayerState, m_ready_check_status);
}

