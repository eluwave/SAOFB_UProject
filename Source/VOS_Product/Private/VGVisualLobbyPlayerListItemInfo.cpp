#include "VGVisualLobbyPlayerListItemInfo.h"

FVGVisualLobbyPlayerListItemInfo::FVGVisualLobbyPlayerListItemInfo() {
    this->PlayerId = 0;
    this->AntenaNum = 0;
    this->Level = 0;
    this->ReadyState = false;
    this->PlayerType = EVGCoopLobbyPlayerType::Player;
    this->TeamType = EVGCharaTeam::None;
    this->CharaRole = EVGCharaRole::Assault;
    this->HeroCharaIndex = 0;
    this->IsHost = false;
    this->OwnerPlayerId = 0;
    this->OnlineRankValue = 0;
}

