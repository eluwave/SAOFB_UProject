#include "VGCoopVisualLobbyGameState.h"
#include "Net/UnrealNetwork.h"

AVGCoopVisualLobbyGameState::AVGCoopVisualLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_record = NULL;
    this->m_countdown_status = false;
    this->k_coop_battle_max_slot_num = 8;
    this->k_timer_count = 20.00f;
}

void AVGCoopVisualLobbyGameState::UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void AVGCoopVisualLobbyGameState::StartSettingCoopContext() {
}

void AVGCoopVisualLobbyGameState::SetCountdownStatus(bool NewStatus) {
}

void AVGCoopVisualLobbyGameState::SetCoopQuestMode(EVGCoopQuestModeType coop_type) {
}

void AVGCoopVisualLobbyGameState::Server_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGCoopVisualLobbyGameState::Server_SetFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGCoopVisualLobbyGameState::RemovePlayer(int32 PlayerId) {
}

void AVGCoopVisualLobbyGameState::RemoveAfasys(int32 PlayerId) {
}

void AVGCoopVisualLobbyGameState::OpenQuestWidget(UVGGameEventStepSequence* ev) {
}

void AVGCoopVisualLobbyGameState::OpenQuestDetailWidget() {
}

void AVGCoopVisualLobbyGameState::OnTerminalMenuEnded() {
}

void AVGCoopVisualLobbyGameState::OnRep_SetQuestId() {
}

void AVGCoopVisualLobbyGameState::OnRep_SetNpcPool() {
}

void AVGCoopVisualLobbyGameState::OnRep_SetCountdownStatus() {
}

void AVGCoopVisualLobbyGameState::OnLoadedComplete() {
}

void AVGCoopVisualLobbyGameState::OnLeaveRoomRequested() {
}

void AVGCoopVisualLobbyGameState::OnHUDTimerCompleted() {
}

void AVGCoopVisualLobbyGameState::OnHUDReadyCheckStatusChanged(bool NewStatus) {
}

void AVGCoopVisualLobbyGameState::NetMulticast_OnLeaveSessionCompleted_Implementation(const TArray<int32>& LeaveMembers) {
}

void AVGCoopVisualLobbyGameState::NetMulticast_OnLastSynchStarted_Implementation() {
}

void AVGCoopVisualLobbyGameState::Init() {
}

FName AVGCoopVisualLobbyGameState::GetQuestId() {
    return NAME_None;
}

AVGVisualLobbyHUD* AVGCoopVisualLobbyGameState::GetLocalHud() const {
    return NULL;
}

void AVGCoopVisualLobbyGameState::Finalize() {
}

void AVGCoopVisualLobbyGameState::EraseQuest() {
}

void AVGCoopVisualLobbyGameState::CloseQuestWidget() {
}

void AVGCoopVisualLobbyGameState::ApplyQuestId() {
}

void AVGCoopVisualLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGCoopVisualLobbyGameState, m_quest_id);
    DOREPLIFETIME(AVGCoopVisualLobbyGameState, m_countdown_status);
    DOREPLIFETIME(AVGCoopVisualLobbyGameState, m_npc_pool);
}

