#include "VGVisualLobbyMenuAgent.h"

AVGVisualLobbyMenuAgent::AVGVisualLobbyMenuAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_visual_lobby_menu_widget = NULL;
    this->m_visual_lobby_menu_widget_class = NULL;
}

void AVGVisualLobbyMenuAgent::UnsetQuestText() {
}

void AVGVisualLobbyMenuAgent::ToggleMemberList() {
}

void AVGVisualLobbyMenuAgent::SetQuestText(const FText& QuestName) {
}

void AVGVisualLobbyMenuAgent::SetQuestID(const FName& QuestID) {
}

void AVGVisualLobbyMenuAgent::SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& entries) {
}

void AVGVisualLobbyMenuAgent::SetOwnerPlayerId(int32 PlayerId) {
}

void AVGVisualLobbyMenuAgent::SetCloseButton(EVGPadKey::Type btn) {
}

void AVGVisualLobbyMenuAgent::RemovePlayers() {
}

void AVGVisualLobbyMenuAgent::Open() {
}

void AVGVisualLobbyMenuAgent::NotifySyncPhase(bool Start) {
}

void AVGVisualLobbyMenuAgent::NotifyCountdown(bool Start) {
}

void AVGVisualLobbyMenuAgent::Init(EVGVisualLobbyNetMode NetMode) {
}

bool AVGVisualLobbyMenuAgent::GetMenuOpenStatus() const {
    return false;
}

void AVGVisualLobbyMenuAgent::CloseAll() {
}

void AVGVisualLobbyMenuAgent::Close() {
}

void AVGVisualLobbyMenuAgent::ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerId) {
}

