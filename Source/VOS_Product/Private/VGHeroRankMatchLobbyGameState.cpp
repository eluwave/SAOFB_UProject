#include "VGHeroRankMatchLobbyGameState.h"
#include "Net/UnrealNetwork.h"

AVGHeroRankMatchLobbyGameState::AVGHeroRankMatchLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_record = NULL;
    this->m_countdown_status = false;
    this->m_hero_countdown_status = false;
    this->m_rank_match_max_slot_num = 0;
    this->k_timer_count = 60.00f;
    this->k_opponent_wait_dialog_disp_sec = 0.00f;
    this->m_quest_agent_class = NULL;
    this->m_quest_agent = NULL;
}

void AVGHeroRankMatchLobbyGameState::UpdateTeamFormation() {
}

void AVGHeroRankMatchLobbyGameState::UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void AVGHeroRankMatchLobbyGameState::StartSettingVersusContext() {
}

void AVGHeroRankMatchLobbyGameState::SetHeroCountdownStatus(bool NewStatus) {
}

void AVGHeroRankMatchLobbyGameState::SetCountdownStatus(bool NewStatus) {
}

void AVGHeroRankMatchLobbyGameState::Server_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGHeroRankMatchLobbyGameState::Server_SetFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGHeroRankMatchLobbyGameState::Server_SelectHeroIndex_Implementation(int32 PlayerId, int32 HeroIndex) {
}
bool AVGHeroRankMatchLobbyGameState::Server_SelectHeroIndex_Validate(int32 PlayerId, int32 HeroIndex) {
    return true;
}

void AVGHeroRankMatchLobbyGameState::Server_HeroReadyChanged_Implementation(int32 PlayerId, int32 SelectIndex, bool IsReady) {
}
bool AVGHeroRankMatchLobbyGameState::Server_HeroReadyChanged_Validate(int32 PlayerId, int32 SelectIndex, bool IsReady) {
    return true;
}

void AVGHeroRankMatchLobbyGameState::RemovePlayer(int32 PlayerId) {
}

void AVGHeroRankMatchLobbyGameState::OpenQuestWidget(UVGGameEventStepSequence* ev) {
}

void AVGHeroRankMatchLobbyGameState::OpenQuestDetailWidget() {
}

void AVGHeroRankMatchLobbyGameState::OnRep_SetQuestId() {
}

void AVGHeroRankMatchLobbyGameState::OnRep_SetHeroCountdownStatus() {
}

void AVGHeroRankMatchLobbyGameState::OnRep_SetCountdownStatus() {
}

void AVGHeroRankMatchLobbyGameState::OnLoadedComplete() {
}

void AVGHeroRankMatchLobbyGameState::OnLeaveRoomRequested() {
}

void AVGHeroRankMatchLobbyGameState::OnHUDTimerCompleted() {
}

void AVGHeroRankMatchLobbyGameState::OnHUDReadyCheckStatusChanged(bool NewStatus) {
}

void AVGHeroRankMatchLobbyGameState::OnCustomizeSlotEnded() {
}

void AVGHeroRankMatchLobbyGameState::NetMulticast_OnTeamSyncStarted_Implementation() {
}

void AVGHeroRankMatchLobbyGameState::NetMulticast_OnQuestDataSynchStarted_Implementation(FName SetQuestID) {
}

void AVGHeroRankMatchLobbyGameState::NetMulticast_OnLeaveSessionCompleted_Implementation(const TArray<int32>& LeaveMembers) {
}

void AVGHeroRankMatchLobbyGameState::NetMulticast_OnLastSynchStarted_Implementation() {
}

void AVGHeroRankMatchLobbyGameState::NetMulticast_OnHeroSelectStarted_Implementation(const TArray<FString>& AlphaTeam, const TArray<FString>& BravoTeam) {
}

void AVGHeroRankMatchLobbyGameState::Init() {
}

FName AVGHeroRankMatchLobbyGameState::GetQuestId() {
    return NAME_None;
}

TArray<FVGVisualLobbyPlayerListItemInfo> AVGHeroRankMatchLobbyGameState::GetPlayersInfo() const {
    return TArray<FVGVisualLobbyPlayerListItemInfo>();
}

AVGVisualLobbyHUD* AVGHeroRankMatchLobbyGameState::GetLocalHud() const {
    return NULL;
}

void AVGHeroRankMatchLobbyGameState::Finalize() {
}

void AVGHeroRankMatchLobbyGameState::EraseQuest() {
}

void AVGHeroRankMatchLobbyGameState::CloseQuestWidget() {
}

void AVGHeroRankMatchLobbyGameState::ApplyQuestId() {
}

void AVGHeroRankMatchLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGHeroRankMatchLobbyGameState, m_quest_id);
    DOREPLIFETIME(AVGHeroRankMatchLobbyGameState, m_countdown_status);
    DOREPLIFETIME(AVGHeroRankMatchLobbyGameState, m_hero_countdown_status);
}

