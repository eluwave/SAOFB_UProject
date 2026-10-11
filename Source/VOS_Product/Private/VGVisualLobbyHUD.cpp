#include "VGVisualLobbyHUD.h"

AVGVisualLobbyHUD::AVGVisualLobbyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_visual_lobby_hud_agent = NULL;
    this->m_visual_lobby_menu_agent = NULL;
    this->m_hero_select_agent = NULL;
}

void AVGVisualLobbyHUD::UnsetQuest() {
}

void AVGVisualLobbyHUD::SyncStart() {
}

void AVGVisualLobbyHUD::SyncRollback() {
}

void AVGVisualLobbyHUD::StartTimer(float TimerCount) {
}

void AVGVisualLobbyHUD::SetQuest(const FName& QuestID, const FText& QuestDisplayText, EVGQuestCategory::Type Category) {
}

void AVGVisualLobbyHUD::SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayerInfo) {
}

void AVGVisualLobbyHUD::RemovePlayers() {
}

void AVGVisualLobbyHUD::OnMenuOpenStatusChanged(bool IsOpened) {
}

void AVGVisualLobbyHUD::ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex) {
}

void AVGVisualLobbyHUD::CancelTimer() {
}

void AVGVisualLobbyHUD::AddLog(const FText& LogLine) {
}

