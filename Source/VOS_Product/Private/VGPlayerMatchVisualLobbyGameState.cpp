#include "VGPlayerMatchVisualLobbyGameState.h"
#include "Net/UnrealNetwork.h"

AVGPlayerMatchVisualLobbyGameState::AVGPlayerMatchVisualLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_record = NULL;
    this->m_countdown_status = false;
    this->k_coop_battle_max_slot_num = 8;
    this->k_timer_count = 20.00f;
}

void AVGPlayerMatchVisualLobbyGameState::UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void AVGPlayerMatchVisualLobbyGameState::StartSettingVersusContext() {
}

void AVGPlayerMatchVisualLobbyGameState::SetQuestCategory(EVGQuestCategory::Type quest_category) {
}

void AVGPlayerMatchVisualLobbyGameState::SetCountdownStatus(bool NewStatus) {
}

void AVGPlayerMatchVisualLobbyGameState::Server_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGPlayerMatchVisualLobbyGameState::Server_SetFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGPlayerMatchVisualLobbyGameState::Server_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}
bool AVGPlayerMatchVisualLobbyGameState::Server_ChangeTeamFormation_Validate(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
    return true;
}

void AVGPlayerMatchVisualLobbyGameState::RemovePlayer(int32 PlayerId) {
}

void AVGPlayerMatchVisualLobbyGameState::OpenQuestWidget(UVGGameEventStepSequence* ev) {
}

void AVGPlayerMatchVisualLobbyGameState::OpenQuestDetailWidget() {
}

void AVGPlayerMatchVisualLobbyGameState::OnTerminalMenuEnded() {
}

void AVGPlayerMatchVisualLobbyGameState::OnRep_SetQuestId() {
}

void AVGPlayerMatchVisualLobbyGameState::OnRep_SetNpcPool() {
}

void AVGPlayerMatchVisualLobbyGameState::OnRep_SetCountdownStatus() {
}

void AVGPlayerMatchVisualLobbyGameState::OnRep_OverwriteRuleParam() {
}

void AVGPlayerMatchVisualLobbyGameState::OnOverwriteSettingChanged(bool is_overwrite, EVGBattleType quest_battle_type, const TArray<FVGNWQuestSettingResultData>& SettingParamaters) {
}

void AVGPlayerMatchVisualLobbyGameState::OnLoadedComplete() {
}

void AVGPlayerMatchVisualLobbyGameState::OnLeaveRoomRequested() {
}

void AVGPlayerMatchVisualLobbyGameState::OnHUDTimerCompleted() {
}

void AVGPlayerMatchVisualLobbyGameState::OnHUDReadyCheckStatusChanged(bool NewStatus) {
}

void AVGPlayerMatchVisualLobbyGameState::NetMulticast_OnLeaveSessionCompleted_Implementation(const TArray<int32>& LeaveMembers) {
}

void AVGPlayerMatchVisualLobbyGameState::NetMulticast_OnLastSynchStarted_Implementation() {
}

void AVGPlayerMatchVisualLobbyGameState::Init() {
}

FName AVGPlayerMatchVisualLobbyGameState::GetQuestId() {
    return NAME_None;
}

AVGVisualLobbyHUD* AVGPlayerMatchVisualLobbyGameState::GetLocalHud() const {
    return NULL;
}

void AVGPlayerMatchVisualLobbyGameState::Finalize() {
}

void AVGPlayerMatchVisualLobbyGameState::EraseQuest() {
}

void AVGPlayerMatchVisualLobbyGameState::CloseQuestWidget() {
}

void AVGPlayerMatchVisualLobbyGameState::ApplyQuestId() {
}

void AVGPlayerMatchVisualLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGPlayerMatchVisualLobbyGameState, m_quest_id);
    DOREPLIFETIME(AVGPlayerMatchVisualLobbyGameState, m_countdown_status);
    DOREPLIFETIME(AVGPlayerMatchVisualLobbyGameState, m_npc_pool);
    DOREPLIFETIME(AVGPlayerMatchVisualLobbyGameState, m_overwrite_rule_param);
}

