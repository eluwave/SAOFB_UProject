#include "VGHeroPlayerMatchLobbyGameState.h"
#include "Net/UnrealNetwork.h"

AVGHeroPlayerMatchLobbyGameState::AVGHeroPlayerMatchLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_quest_record = NULL;
    this->m_countdown_status = false;
    this->k_coop_battle_max_slot_num = 0;
    this->k_timer_count = 60.00f;
    this->k_opponent_wait_dialog_disp_sec = 0.00f;
}

void AVGHeroPlayerMatchLobbyGameState::UpdateTeamFormation() {
}

void AVGHeroPlayerMatchLobbyGameState::UpdatePlayer(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void AVGHeroPlayerMatchLobbyGameState::StartSettingVersusContext() {
}

void AVGHeroPlayerMatchLobbyGameState::SetQuestCategory(EVGQuestCategory::Type quest_category) {
}

void AVGHeroPlayerMatchLobbyGameState::SetCountdownStatus(bool NewStatus) {
}

void AVGHeroPlayerMatchLobbyGameState::Server_SetFixedPhrase_Implementation(const FString& Name, const FName& ID, const FString& unique_id) {
}
bool AVGHeroPlayerMatchLobbyGameState::Server_SetFixedPhrase_Validate(const FString& Name, const FName& ID, const FString& unique_id) {
    return true;
}

void AVGHeroPlayerMatchLobbyGameState::Server_SelectHeroIndex_Implementation(int32 PlayerId, int32 HeroIndex) {
}
bool AVGHeroPlayerMatchLobbyGameState::Server_SelectHeroIndex_Validate(int32 PlayerId, int32 HeroIndex) {
    return true;
}

void AVGHeroPlayerMatchLobbyGameState::Server_HeroReadyChanged_Implementation(int32 PlayerId, int32 SelectIndex, bool IsReady) {
}
bool AVGHeroPlayerMatchLobbyGameState::Server_HeroReadyChanged_Validate(int32 PlayerId, int32 SelectIndex, bool IsReady) {
    return true;
}

void AVGHeroPlayerMatchLobbyGameState::Server_ChangeTeamFormation_Implementation(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
}
bool AVGHeroPlayerMatchLobbyGameState::Server_ChangeTeamFormation_Validate(const TArray<FVGVisualLobbyPlayerListItemInfo>& NewTeamInfo) {
    return true;
}

void AVGHeroPlayerMatchLobbyGameState::RemovePlayer(int32 PlayerId) {
}

void AVGHeroPlayerMatchLobbyGameState::OpenQuestWidget(UVGGameEventStepSequence* ev) {
}

void AVGHeroPlayerMatchLobbyGameState::OpenQuestDetailWidget() {
}

void AVGHeroPlayerMatchLobbyGameState::OnTerminalMenuEnded() {
}

void AVGHeroPlayerMatchLobbyGameState::OnRep_SetQuestId() {
}

void AVGHeroPlayerMatchLobbyGameState::OnRep_SetCountdownStatus() {
}

void AVGHeroPlayerMatchLobbyGameState::OnRep_OverwriteRuleParam() {
}

void AVGHeroPlayerMatchLobbyGameState::OnOverwriteSettingChanged(bool is_overwrite, EVGBattleType quest_battle_type, const TArray<FVGNWQuestSettingResultData>& SettingParamaters) {
}

void AVGHeroPlayerMatchLobbyGameState::OnLoadedComplete() {
}

void AVGHeroPlayerMatchLobbyGameState::OnLeaveRoomRequested() {
}

void AVGHeroPlayerMatchLobbyGameState::OnHUDTimerCompleted() {
}

void AVGHeroPlayerMatchLobbyGameState::OnHUDReadyCheckStatusChanged(bool NewStatus) {
}

void AVGHeroPlayerMatchLobbyGameState::OnCustomizeSlotEnded() {
}

void AVGHeroPlayerMatchLobbyGameState::NetMulticast_OnLeaveSessionCompleted_Implementation(const TArray<int32>& LeaveMembers) {
}

void AVGHeroPlayerMatchLobbyGameState::NetMulticast_OnLastSynchStarted_Implementation() {
}

void AVGHeroPlayerMatchLobbyGameState::Init() {
}

FName AVGHeroPlayerMatchLobbyGameState::GetQuestId() {
    return NAME_None;
}

TArray<FVGVisualLobbyPlayerListItemInfo> AVGHeroPlayerMatchLobbyGameState::GetPlayersInfo() const {
    return TArray<FVGVisualLobbyPlayerListItemInfo>();
}

AVGVisualLobbyHUD* AVGHeroPlayerMatchLobbyGameState::GetLocalHud() const {
    return NULL;
}

void AVGHeroPlayerMatchLobbyGameState::Finalize() {
}

void AVGHeroPlayerMatchLobbyGameState::EraseQuest() {
}

void AVGHeroPlayerMatchLobbyGameState::CloseQuestWidget() {
}

void AVGHeroPlayerMatchLobbyGameState::ApplyQuestId() {
}

void AVGHeroPlayerMatchLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGHeroPlayerMatchLobbyGameState, m_quest_id);
    DOREPLIFETIME(AVGHeroPlayerMatchLobbyGameState, m_countdown_status);
    DOREPLIFETIME(AVGHeroPlayerMatchLobbyGameState, m_overwrite_rule_param);
}

