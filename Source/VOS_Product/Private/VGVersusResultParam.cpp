#include "VGVersusResultParam.h"

FVGVersusResultParam::FVGVersusResultParam() {
    this->battle_type = EVGBattleType::None;
    this->damage_blue = 0.00f;
    this->damage_red = 0.00f;
    this->team_type = EVGNetworkResultTeamType::Coop;
}

