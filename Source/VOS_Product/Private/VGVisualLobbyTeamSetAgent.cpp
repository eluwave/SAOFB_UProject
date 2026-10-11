#include "VGVisualLobbyTeamSetAgent.h"

AVGVisualLobbyTeamSetAgent::AVGVisualLobbyTeamSetAgent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_visual_lobby_team_set_widget_class = NULL;
    this->m_visual_lobby_team_set_widget = NULL;
}

void AVGVisualLobbyTeamSetAgent::Start(EVGVisualLobbyNetMode NetMode, const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayersItemInfo) {
}

void AVGVisualLobbyTeamSetAgent::SetPlayers(const TArray<FVGVisualLobbyPlayerListItemInfo>& PlayersItemInfo) {
}

void AVGVisualLobbyTeamSetAgent::ChangeTeamFormation(EVGCharaTeam newTeam, int32 PlayerIndex) {
}

