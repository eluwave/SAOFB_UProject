#include "VGHeroStrugglePlayerListItemInfo.h"

FVGHeroStrugglePlayerListItemInfo::FVGHeroStrugglePlayerListItemInfo() {
    this->PlayerId = 0;
    this->TeamType = EVGCharaTeam::None;
    this->IsReady = false;
    this->CursorHeroIndex = 0;
    this->SelectedHeroIndex = 0;
}

