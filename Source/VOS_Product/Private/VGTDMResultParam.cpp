#include "VGTDMResultParam.h"

FVGTDMResultParam::FVGTDMResultParam() {
    this->battle_type = EVGBattleType::None;
    this->damage_blue = 0.00f;
    this->damage_red = 0.00f;
    this->team_type = EVGNetworkResultTeamType::Coop;
    this->life_blue = 0;
    this->life_red = 0;
}

