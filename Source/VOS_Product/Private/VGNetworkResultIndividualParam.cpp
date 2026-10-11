#include "VGNetworkResultIndividualParam.h"

FVGNetworkResultIndividualParam::FVGNetworkResultIndividualParam() {
    this->chara_unique = EVGCharaUnique::None;
    this->damage_dealt = 0.00f;
    this->down_num = 0;
    this->token_num = 0;
    this->rezurrection_num = 0;
    this->healing_done = 0.00f;
    this->kill_num = 0;
    this->team_type = EVGNetworkResultTeamType::Coop;
    this->is_self = false;
}

