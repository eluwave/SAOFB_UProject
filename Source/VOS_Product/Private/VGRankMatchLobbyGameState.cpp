#include "VGRankMatchLobbyGameState.h"
#include "Net/UnrealNetwork.h"

AVGRankMatchLobbyGameState::AVGRankMatchLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_record = NULL;
    this->m_countdown_status = false;
    this->m_rank_match_max_slot_num = 0;
    this->k_timer_count = 60.00f;
    this->m_quest_agent_class = NULL;
    this->m_quest_agent = NULL;
}

void AVGRankMatchLobbyGameState::UpdateTeamFormation() {
}

void AVGRankMatchLobbyGameState::UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void AVGRankMatchLobbyGameState::StartSettingVersusContext() {
}

void AVGRankMatchLobbyGameState::SetCountdownStatus(bool NewStatus) {
}

void AVGRankMatchLobbyGameState::Server_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGRankMatchLobbyGameState::Server_SetFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGRankMatchLobbyGameState::RemovePlayer(int32 PlayerId) {
}

void AVGRankMatchLobbyGameState::OpenQuestWidget(UVGGameEventStepSequence* ev) {
}

void AVGRankMatchLobbyGameState::OpenQuestDetailWidget() {
}

void AVGRankMatchLobbyGameState::OnRep_SetQuestId() {
}

void AVGRankMatchLobbyGameState::OnRep_SetCountdownStatus() {
}

void AVGRankMatchLobbyGameState::OnLoadedComplete() {
}

void AVGRankMatchLobbyGameState::OnLeaveRoomRequested() {
}

void AVGRankMatchLobbyGameState::OnHUDTimerCompleted() {
}

void AVGRankMatchLobbyGameState::OnHUDReadyCheckStatusChanged(bool NewStatus) {
}

void AVGRankMatchLobbyGameState::OnCustomizeSlotEnded() {
}

void AVGRankMatchLobbyGameState::NetMulticast_OnQuestDataSynchStarted_Implementation(FName SetQuestID) {
}

void AVGRankMatchLobbyGameState::NetMulticast_OnLeaveSessionCompleted_Implementation(const TArray<int32>& LeaveMembers) {
}

void AVGRankMatchLobbyGameState::NetMulticast_OnLastSynchStarted_Implementation() {
}

void AVGRankMatchLobbyGameState::Init() {
}

FName AVGRankMatchLobbyGameState::GetQuestId() {
    return NAME_None;
}

TArray<FVGVisualLobbyPlayerListItemInfo> AVGRankMatchLobbyGameState::GetPlayersInfo() const {
    return TArray<FVGVisualLobbyPlayerListItemInfo>();
}

AVGVisualLobbyHUD* AVGRankMatchLobbyGameState::GetLocalHud() const {
    return NULL;
}

void AVGRankMatchLobbyGameState::Finalize() {
}

void AVGRankMatchLobbyGameState::EraseQuest() {
}

void AVGRankMatchLobbyGameState::CloseQuestWidget() {
}

void AVGRankMatchLobbyGameState::ApplyQuestId() {
}

void AVGRankMatchLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGRankMatchLobbyGameState, m_quest_id);
    DOREPLIFETIME(AVGRankMatchLobbyGameState, m_countdown_status);
}

