#include "VGVisualLobbyTeamSetListItem.h"

UVGVisualLobbyTeamSetListItem::UVGVisualLobbyTeamSetListItem() {
    this->bIsFocusable = true;
    this->m_selected_team = EVGCharaTeam::None;
}

void UVGVisualLobbyTeamSetListItem::SetRandomButton() {
}

void UVGVisualLobbyTeamSetListItem::SetPlayerListItemInfo(const FVGVisualLobbyPlayerListItemInfo& PlayerListItemInfo) {
}

void UVGVisualLobbyTeamSetListItem::SetDecideButton() {
}

void UVGVisualLobbyTeamSetListItem::Init(EVGVisualLobbyNetMode NetMode) {
}

EVGCharaTeam UVGVisualLobbyTeamSetListItem::GetTeamType() const {
    return EVGCharaTeam::None;
}

void UVGVisualLobbyTeamSetListItem::ChangeTeam(EVGCharaTeam newTeam) {
}

